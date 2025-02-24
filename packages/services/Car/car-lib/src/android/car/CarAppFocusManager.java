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

package android.car;

import android.annotation.IntDef;
import android.annotation.Nullable;
import android.annotation.TestApi;
import android.os.IBinder;
import android.os.RemoteException;

import com.android.internal.annotations.VisibleForTesting;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

/**
 * CarAppFocusManager allows applications to set and listen for the current application focus
 * like active navigation or active voice command. Usually only one instance of such application
 * should run in the system, and other app setting the flag for the matching app should
 * lead into other app to stop.
 */
public final class CarAppFocusManager extends CarManagerBase {
    /**
     * Listener to get notification for app getting information on application type status changes.
     */
    public interface OnAppFocusChangedListener {
        /**
         * Application focus has changed. Note that {@link CarAppFocusManager} instance
         * causing the change will not get this notification.
         *
         * <p>Note that this call can happen for app focus grant, release, and ownership change.
         *
         * @param appType appType where the focus change has happened.
         * @param active {@code true} if there is an active owner for the focus.
         */
        void onAppFocusChanged(@AppFocusType int appType, boolean active);
    }

    /**
     * Listener to get notification for app getting information on app type ownership loss.
     */
    public interface OnAppFocusOwnershipCallback {
        /**
         * Lost ownership for the focus, which happens when other app has set the focus.
         * The app losing focus should stop the action associated with the focus.
         * For example, navigation app currently running active navigation should stop navigation
         * upon getting this for {@link CarAppFocusManager#APP_FOCUS_TYPE_NAVIGATION}.
         * @param appType
         */
        void onAppFocusOwnershipLost(@AppFocusType int appType);

        /**
         * Granted ownership for the focus, which happens when app has requested the focus.
         * The app getting focus can start the action associated with the focus.
         * For example, navigation app can start navigation
         * upon getting this for {@link CarAppFocusManager#APP_FOCUS_TYPE_NAVIGATION}.
         * @param appType
         */
        void onAppFocusOwnershipGranted(@AppFocusType int appType);
    }

    /**
     * Represents navigation focus.
     */
    public static final int APP_FOCUS_TYPE_NAVIGATION = 1;
    /**
     * Represents voice command focus.
     *
     * @deprecated use {@link android.service.voice.VoiceInteractionService} instead.
     */
    @Deprecated
    public static final int APP_FOCUS_TYPE_VOICE_COMMAND = 2;
    /**
     * Update this after adding a new app type.
     * @hide
     */
    public static final int APP_FOCUS_MAX = 2;

    /** @hide */
    @IntDef({
        APP_FOCUS_TYPE_NAVIGATION,
    })
    @Retention(RetentionPolicy.SOURCE)
    public @interface AppFocusType {}

    /**
     * A failed focus change request.
     */
    public static final int APP_FOCUS_REQUEST_FAILED = 0;
    /**
     * A successful focus change request.
     */
    public static final int APP_FOCUS_REQUEST_SUCCEEDED = 1;

    /** @hide */
    @IntDef({
        APP_FOCUS_REQUEST_FAILED,
        APP_FOCUS_REQUEST_SUCCEEDED
    })
    @Retention(RetentionPolicy.SOURCE)
    public @interface AppFocusRequestResult {}

    private final IAppFocus mService;
    private final Map<OnAppFocusChangedListener, IAppFocusListenerImpl> mChangeBinders =
            new HashMap<>();
    private final Map<OnAppFocusOwnershipCallback, IAppFocusOwnershipCallbackImpl>
            mOwnershipBinders = new HashMap<>();

    /**
     * @hide
     */
    @VisibleForTesting
    public CarAppFocusManager(Car car, IBinder service) {
        super(car);
        mService = IAppFocus.Stub.asInterface(service);
    }

    /**
     * Register listener to monitor app focus change.
     * @param listener
     * @param appType Application type to get notification for.
     */
    public void addFocusListener(OnAppFocusChangedListener listener, @AppFocusType int appType) {
        if (listener == null) {
            throw new IllegalArgumentException("null listener");
        }
        IAppFocusListenerImpl binder;
        synchronized (this) {
            binder = mChangeBinders.get(listener);
            if (binder == null) {
                binder = new IAppFocusListenerImpl(this, listener);
                mChangeBinders.put(listener, binder);
            }
            binder.addAppType(appType);
        }
        try {
            mService.registerFocusListener(binder, appType);
        } catch (RemoteException e) {
            handleRemoteExceptionFromCarService(e);
        }
    }

    /**
     * Unregister listener for application type and stop listening focus change events.
     * @param listener
     * @param appType
     */
    public void removeFocusListener(OnAppFocusChangedListener listener, @AppFocusType int appType) {
        IAppFocusListenerImpl binder;
        synchronized (this) {
            binder = mChangeBinders.get(listener);
            if (binder == null) {
                return;
            }
        }
        try {
            mService.unregisterFocusListener(binder, appType);
        } catch (RemoteException e) {
            handleRemoteExceptionFromCarService(e);
            // continue for local clean-up
        }
        synchronized (this) {
            binder.removeAppType(appType);
            if (!binder.hasAppTypes()) {
                mChangeBinders.remove(listener);
            }

        }
    }

    /**
     * Unregister listener and stop listening focus change events.
     * @param listener
     */
    public void removeFocusListener(OnAppFocusChangedListener listener) {
        IAppFocusListenerImpl binder;
        synchronized (this) {
            binder = mChangeBinders.remove(listener);
            if (binder == null) {
                return;
            }
        }
        try {
            for (Integer appType : binder.getAppTypes()) {
                mService.unregisterFocusListener(binder, appType);
            }
        } catch (RemoteException e) {
            handleRemoteExceptionFromCarService(e);
        }
    }

    /**
     * Returns application types currently active in the system.
     * @hide
     */
    @TestApi
    public int[] getActiveAppTypes() {
        try {
            return mService.getActiveAppTypes();
        } catch (RemoteException e) {
            return handleRemoteExceptionFromCarService(e, new int[0]);
        }
    }

    /**
     * Returns the package names of the current owner of a given application type, or {@code null}
     * if there is no owner. This method might return more than one package name if the current
     * owner uses the "android:sharedUserId" feature.
     *
     * @hide
     */
    @Nullable
    public List<String> getAppTypeOwner(@AppFocusType int appType) {
        try {
            return mService.getAppTypeOwner(appType);
        } catch (RemoteException e) {
            return handleRemoteExceptionFromCarService(e, null);
        }
    }

    /**
     * Checks if listener is associated with active a focus
     * @param callback
     * @param appType
     */
    public boolean isOwningFocus(OnAppFocusOwnershipCallback callback, @AppFocusType int appType) {
        IAppFocusOwnershipCallbackImpl binder;
        synchronized (this) {
            binder = mOwnershipBinders.get(callback);
            if (binder == null) {
                return false;
            }
        }
        try {
            return mService.isOwningFocus(binder, appType);
        } catch (RemoteException e) {
            return handleRemoteExceptionFromCarService(e, false);
        }
    }

    /**
     * Requests application focus.
     * By requesting this, the application is becoming owner of the focus, and will get
     * {@link OnAppFocusOwnershipCallback#onAppFocusOwnershipLost(int)}
     * if ownership is given to other app by calling this. Fore-ground app will have higher priority
     * and other app cannot set the same focus while owner is in fore-ground.
     * @param appType
     * @param ownershipCallback
     * @return {@link #APP_FOCUS_REQUEST_FAILED} or {@link #APP_FOCUS_REQUEST_SUCCEEDED}
     * @throws SecurityException If owner cannot be changed.
     */
    public @AppFocusRequestResult int requestAppFocus(
            int appType, OnAppFocusOwnershipCallback ownershipCallback) {
        if (ownershipCallback == null) {
            throw new IllegalArgumentException("null listener");
        }
        IAppFocusOwnershipCallbackImpl binder;
        synchronized (this) {
            binder = mOwnershipBinders.get(ownershipCallback);
            if (binder == null) {
                binder = new IAppFocusOwnershipCallbackImpl(this, ownershipCallback);
                mOwnershipBinders.put(ownershipCallback, binder);
            }
            binder.addAppType(appType);
        }
        try {
            return mService.requestAppFocus(binder, appType);
        } catch (RemoteException e) {
            return handleRemoteExceptionFromCarService(e, APP_FOCUS_REQUEST_FAILED);
        }
    }

    /**
     * Abandon the given focus, i.e. mark it as inactive. This also involves releasing ownership
     * for the focus.
     * @param ownershipCallback
     * @param appType
     */
    public void abandonAppFocus(OnAppFocusOwnershipCallback ownershipCallback,
            @AppFocusType int appType) {
        if (ownershipCallback == null) {
            throw new IllegalArgumentException("null callback");
        }
        IAppFocusOwnershipCallbackImpl binder;
        synchronized (this) {
            binder = mOwnershipBinders.get(ownershipCallback);
            if (binder == null) {
                return;
            }
        }
        try {
            mService.abandonAppFocus(binder, appType);
        } catch (RemoteException e) {
            handleRemoteExceptionFromCarService(e);
            // continue for local clean-up
        }
        synchronized (this) {
            binder.removeAppType(appType);
            if (!binder.hasAppTypes()) {
                mOwnershipBinders.remove(ownershipCallback);
            }
        }
    }

    /**
     * Abandon all focuses, i.e. mark them as inactive. This also involves releasing ownership
     * for the focus.
     * @param ownershipCallback
     */
    public void abandonAppFocus(OnAppFocusOwnershipCallback ownershipCallback) {
        IAppFocusOwnershipCallbackImpl binder;
        synchronized (this) {
            binder = mOwnershipBinders.remove(ownershipCallback);
            if (binder == null) {
                return;
            }
        }
        try {
            for (Integer appType : binder.getAppTypes()) {
                mService.abandonAppFocus(binder, appType);
            }
        } catch (RemoteException e) {
            handleRemoteExceptionFromCarService(e);
        }
    }

    /** @hide */
    @Override
    public void onCarDisconnected() {
        // nothing to do
    }

    private static class IAppFocusListenerImpl extends IAppFocusListener.Stub {

        private final WeakReference<CarAppFocusManager> mManager;
        private final WeakReference<OnAppFocusChangedListener> mListener;
        private final Set<Integer> mAppTypes = new HashSet<>();

        private IAppFocusListenerImpl(CarAppFocusManager manager,
                OnAppFocusChangedListener listener) {
            mManager = new WeakReference<>(manager);
            mListener = new WeakReference<>(listener);
        }

        public void addAppType(@AppFocusType int appType) {
            mAppTypes.add(appType);
        }

        public void removeAppType(@AppFocusType int appType) {
            mAppTypes.remove(appType);
        }

        public Set<Integer> getAppTypes() {
            return mAppTypes;
        }

        public boolean hasAppTypes() {
            return !mAppTypes.isEmpty();
        }

        @Override
        public void onAppFocusChanged(final @AppFocusType int appType, final boolean active) {
            final CarAppFocusManager manager = mManager.get();
            final OnAppFocusChangedListener listener = mListener.get();
            if (manager == null || listener == null) {
                return;
            }
            manager.getEventHandler().post(() -> {
                listener.onAppFocusChanged(appType, active);
            });
        }
    }

    private static class IAppFocusOwnershipCallbackImpl extends IAppFocusOwnershipCallback.Stub {

        private final WeakReference<CarAppFocusManager> mManager;
        private final WeakReference<OnAppFocusOwnershipCallback> mCallback;
        private final Set<Integer> mAppTypes = new HashSet<>();

        private IAppFocusOwnershipCallbackImpl(CarAppFocusManager manager,
                OnAppFocusOwnershipCallback callback) {
            mManager = new WeakReference<>(manager);
            mCallback = new WeakReference<>(callback);
        }

        public void addAppType(@AppFocusType int appType) {
            mAppTypes.add(appType);
        }

        public void removeAppType(@AppFocusType int appType) {
            mAppTypes.remove(appType);
        }

        public Set<Integer> getAppTypes() {
            return mAppTypes;
        }

        public boolean hasAppTypes() {
            return !mAppTypes.isEmpty();
        }

        @Override
        public void onAppFocusOwnershipLost(final @AppFocusType int appType) {
            final CarAppFocusManager manager = mManager.get();
            final OnAppFocusOwnershipCallback callback = mCallback.get();
            if (manager == null || callback == null) {
                return;
            }
            manager.getEventHandler().post(() -> {
                callback.onAppFocusOwnershipLost(appType);
            });
        }

        @Override
        public void onAppFocusOwnershipGranted(final @AppFocusType int appType) {
            final CarAppFocusManager manager = mManager.get();
            final OnAppFocusOwnershipCallback callback = mCallback.get();
            if (manager == null || callback == null) {
                return;
            }
            manager.getEventHandler().post(() -> {
                callback.onAppFocusOwnershipGranted(appType);
            });
        }
    }
}
