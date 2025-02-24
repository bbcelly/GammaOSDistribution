package com.android.permissioncontroller.permission.data;

import android.app.Application;
import android.content.ComponentName;
import android.os.UserHandle;
import android.provider.Settings;
import com.android.permissioncontroller.PermissionControllerApplication;
import com.android.permissioncontroller.permission.utils.Utils;

/**
 * A LiveData which tracks disabled print service packages
 *
 * @param app The current application
 * @param user The user the services should be determined for
 */
@kotlin.Metadata(mv = {1, 4, 2}, bv = {1, 0, 3}, k = 1, d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 \u000e2\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\u00020\u0001:\u0001\u000eB\u0015\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u00a2\u0006\u0002\u0010\bJ\u0019\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fH\u0096@\u00f8\u0001\u0000\u00a2\u0006\u0002\u0010\rR\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004\u00a2\u0006\u0002\n\u0000\u0082\u0002\u0004\n\u0002\b\u0019"}, d2 = {"Lcom/android/permissioncontroller/permission/data/DisabledPrintServicesLiveData;", "Lcom/android/permissioncontroller/permission/data/SmartAsyncMediatorLiveData;", "", "", "app", "Landroid/app/Application;", "user", "Landroid/os/UserHandle;", "(Landroid/app/Application;Landroid/os/UserHandle;)V", "loadDataAndPostValue", "", "job", "Lkotlinx/coroutines/Job;", "(Lkotlinx/coroutines/Job;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Companion"})
public final class DisabledPrintServicesLiveData extends com.android.permissioncontroller.permission.data.SmartAsyncMediatorLiveData<java.util.List<? extends java.lang.String>> {
    private final android.app.Application app = null;
    private final android.os.UserHandle user = null;
    private static final java.lang.String SETTING = "disabled_print_services";
    @org.jetbrains.annotations.NotNull()
    public static final com.android.permissioncontroller.permission.data.DisabledPrintServicesLiveData.Companion Companion = null;
    
    @org.jetbrains.annotations.Nullable()
    @java.lang.Override()
    public java.lang.Object loadDataAndPostValue(@org.jetbrains.annotations.NotNull()
    kotlinx.coroutines.Job job, @org.jetbrains.annotations.NotNull()
    kotlin.coroutines.Continuation<? super kotlin.Unit> p1) {
        return null;
    }
    
    public DisabledPrintServicesLiveData(@org.jetbrains.annotations.NotNull()
    android.app.Application app, @org.jetbrains.annotations.NotNull()
    android.os.UserHandle user) {
        super(false, false);
    }
    
    /**
     * Repository for [DisabledPrintServicesLiveData]
     *
     * <p> Key value is a user, value is its corresponding LiveData.
     */
    @kotlin.Metadata(mv = {1, 4, 2}, bv = {1, 0, 3}, k = 1, d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u00030\u0001B\u0007\b\u0002\u00a2\u0006\u0002\u0010\u0004J\u0010\u0010\u0007\u001a\u00020\u00032\u0006\u0010\b\u001a\u00020\u0002H\u0014R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082T\u00a2\u0006\u0002\n\u0000"}, d2 = {"Lcom/android/permissioncontroller/permission/data/DisabledPrintServicesLiveData$Companion;", "Lcom/android/permissioncontroller/permission/data/DataRepositoryForPackage;", "Landroid/os/UserHandle;", "Lcom/android/permissioncontroller/permission/data/DisabledPrintServicesLiveData;", "()V", "SETTING", "", "newValue", "key"})
    public static final class Companion extends com.android.permissioncontroller.permission.data.DataRepositoryForPackage<android.os.UserHandle, com.android.permissioncontroller.permission.data.DisabledPrintServicesLiveData> {
        
        @org.jetbrains.annotations.NotNull()
        @java.lang.Override()
        protected com.android.permissioncontroller.permission.data.DisabledPrintServicesLiveData newValue(@org.jetbrains.annotations.NotNull()
        android.os.UserHandle key) {
            return null;
        }
        
        private Companion() {
            super();
        }
    }
}