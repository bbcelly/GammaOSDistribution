/*
 * Copyright (C) 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.android.car;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager.NameNotFoundException;
import android.os.Binder;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.SystemClock;
import android.util.ArrayMap;
import android.util.Slog;

import com.android.internal.annotations.VisibleForTesting;

import java.util.ArrayList;
import java.util.List;

/** Utility class */
public final class CarServiceUtils {

    private static final String TAG = CarLog.tagFor(CarServiceUtils.class);
    /** Empty int array */
    public  static final int[] EMPTY_INT_ARRAY = new int[0];

    private static final String PACKAGE_NOT_FOUND = "Package not found:";

    /** K: class name, V: HandlerThread */
    private static final ArrayMap<String, HandlerThread> sHandlerThreads = new ArrayMap<>();

    /** do not construct. static only */
    private CarServiceUtils() {};

    /**
     * Check if package name passed belongs to UID for the current binder call.
     * @param context
     * @param packageName
     */
    public static void assertPackageName(Context context, String packageName)
            throws IllegalArgumentException, SecurityException {
        if (packageName == null) {
            throw new IllegalArgumentException("Package name null");
        }
        ApplicationInfo appInfo = null;
        try {
            appInfo = context.getPackageManager().getApplicationInfo(packageName,
                    0);
        } catch (NameNotFoundException e) {
            String msg = PACKAGE_NOT_FOUND + packageName;
            Slog.w(CarLog.TAG_SERVICE, msg, e);
            throw new SecurityException(msg, e);
        }
        if (appInfo == null) {
            throw new SecurityException(PACKAGE_NOT_FOUND + packageName);
        }
        int uid = Binder.getCallingUid();
        if (uid != appInfo.uid) {
            throw new SecurityException("Wrong package name:" + packageName +
                    ", The package does not belong to caller's uid:" + uid);
        }
    }

    /**
     * Execute a runnable on the main thread
     *
     * @param action The code to run on the main thread.
     */
    public static void runOnMain(Runnable action) {
        runOnLooper(Looper.getMainLooper(), action);
    }

    /**
     * Execute a runnable in the given looper
     * @param looper Looper to run the action.
     * @param action The code to run.
     */
    public static void runOnLooper(Looper looper, Runnable action) {
        new Handler(looper).post(action);
    }

    /**
     * Execute a call on the application's main thread, blocking until it is
     * complete.  Useful for doing things that are not thread-safe, such as
     * looking at or modifying the view hierarchy.
     *
     * @param action The code to run on the main thread.
     */
    public static void runOnMainSync(Runnable action) {
        runOnLooperSync(Looper.getMainLooper(), action);
    }

    /**
     * Execute a call on the given Looper thread, blocking until it is
     * complete.
     *
     * @param looper Looper to run the action.
     * @param action The code to run on the main thread.
     */
    public static void runOnLooperSync(Looper looper, Runnable action) {
        if (Looper.myLooper() == looper) {
            // requested thread is the same as the current thread. call directly.
            action.run();
        } else {
            Handler handler = new Handler(looper);
            SyncRunnable sr = new SyncRunnable(action);
            handler.post(sr);
            sr.waitForComplete();
        }
    }

    private static final class SyncRunnable implements Runnable {
        private final Runnable mTarget;
        private volatile boolean mComplete = false;

        public SyncRunnable(Runnable target) {
            mTarget = target;
        }

        @Override
        public void run() {
            mTarget.run();
            synchronized (this) {
                mComplete = true;
                notifyAll();
            }
        }

        public void waitForComplete() {
            synchronized (this) {
                while (!mComplete) {
                    try {
                        wait();
                    } catch (InterruptedException e) {
                    }
                }
            }
        }
    }

    public static float[] toFloatArray(List<Float> list) {
        int size = list.size();
        float[] array = new float[size];
        for (int i = 0; i < size; ++i) {
            array[i] = list.get(i);
        }
        return array;
    }

    public static long[] toLongArray(List<Long> list) {
        int size = list.size();
        long[] array = new long[size];
        for (int i = 0; i < size; ++i) {
            array[i] = list.get(i);
        }
        return array;
    }

    public static int[] toIntArray(List<Integer> list) {
        int size = list.size();
        int[] array = new int[size];
        for (int i = 0; i < size; ++i) {
            array[i] = list.get(i);
        }
        return array;
    }

    public static byte[] toByteArray(List<Byte> list) {
        int size = list.size();
        byte[] array = new byte[size];
        for (int i = 0; i < size; ++i) {
            array[i] = list.get(i);
        }
        return array;
    }

    /**
     * Returns delta between elapsed time to uptime = {@link SystemClock#elapsedRealtime()} -
     * {@link SystemClock#uptimeMillis()}. Note that this value will be always >= 0.
     */
    public static long getUptimeToElapsedTimeDeltaInMillis() {
        int retry = 0;
        int max_retry = 2; // try only up to twice
        while (true) {
            long elapsed1 = SystemClock.elapsedRealtime();
            long uptime = SystemClock.uptimeMillis();
            long elapsed2 = SystemClock.elapsedRealtime();
            if (elapsed1 == elapsed2) { // avoid possible 1 ms fluctuation.
                return elapsed1 - uptime;
            }
            retry++;
            if (retry >= max_retry) {
                return elapsed1 - uptime;
            }
        }
    }

    /**
     * Gets a static instance of {@code HandlerThread} for the given {@code name}. If the thread
     * does not exist, create one and start it before returning.
     */
    public static HandlerThread getHandlerThread(String name) {
        synchronized (sHandlerThreads) {
            HandlerThread thread = sHandlerThreads.get(name);
            if (thread == null || !thread.isAlive()) {
                Slog.i(TAG, "Starting HandlerThread:" + name);
                thread = new HandlerThread(name);
                thread.start();
                sHandlerThreads.put(name, thread);
            }
            return thread;
        }
    }

    /**
     * Finishes all queued {@code Handler} tasks for {@code HandlerThread} created via
     * {@link #getHandlerThread(String)}. This is useful only for testing.
     */
    @VisibleForTesting
    public static void finishAllHandlerTasks() {
        ArrayList<HandlerThread> threads;
        synchronized (sHandlerThreads) {
            threads = new ArrayList<>(sHandlerThreads.values());
        }
        ArrayList<SyncRunnable> syncs = new ArrayList<>(threads.size());
        for (int i = 0; i < threads.size(); i++) {
            if (!threads.get(i).isAlive()) {
                continue;
            }
            Handler handler = new Handler(threads.get(i).getLooper());
            SyncRunnable sr = new SyncRunnable(() -> { });
            if (handler.post(sr)) {
                // Track the threads only where SyncRunnable is posted successfully.
                syncs.add(sr);
            }
        }
        for (int i = 0; i < syncs.size(); i++) {
            syncs.get(i).waitForComplete();
        }
    }
}
