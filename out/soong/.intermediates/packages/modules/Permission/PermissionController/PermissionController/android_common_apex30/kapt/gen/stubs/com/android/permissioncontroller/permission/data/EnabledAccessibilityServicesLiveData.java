package com.android.permissioncontroller.permission.data;

import android.accessibilityservice.AccessibilityServiceInfo;
import android.app.Application;
import android.os.UserHandle;
import android.view.accessibility.AccessibilityManager;
import com.android.permissioncontroller.PermissionControllerApplication;
import com.android.permissioncontroller.permission.utils.Utils;

/**
 * A LiveData which tracks enabled accessibility service packages
 *
 * @param app The current application
 * @param user The user the services should be determined for
 */
@kotlin.Metadata(mv = {1, 4, 2}, bv = {1, 0, 3}, k = 1, d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u0000 \u000f2\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\u00020\u0001:\u0001\u000fB\u0015\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u00a2\u0006\u0002\u0010\bJ\u0019\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fH\u0096@\u00f8\u0001\u0000\u00a2\u0006\u0002\u0010\rJ\b\u0010\u000e\u001a\u00020\nH\u0014R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004\u00a2\u0006\u0002\n\u0000\u0082\u0002\u0004\n\u0002\b\u0019"}, d2 = {"Lcom/android/permissioncontroller/permission/data/EnabledAccessibilityServicesLiveData;", "Lcom/android/permissioncontroller/permission/data/SmartAsyncMediatorLiveData;", "", "", "app", "Landroid/app/Application;", "user", "Landroid/os/UserHandle;", "(Landroid/app/Application;Landroid/os/UserHandle;)V", "loadDataAndPostValue", "", "job", "Lkotlinx/coroutines/Job;", "(Lkotlinx/coroutines/Job;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "onActive", "Companion"})
public final class EnabledAccessibilityServicesLiveData extends com.android.permissioncontroller.permission.data.SmartAsyncMediatorLiveData<java.util.List<? extends java.lang.String>> {
    private final android.app.Application app = null;
    private final android.os.UserHandle user = null;
    @org.jetbrains.annotations.NotNull()
    public static final com.android.permissioncontroller.permission.data.EnabledAccessibilityServicesLiveData.Companion Companion = null;
    
    @org.jetbrains.annotations.Nullable()
    @java.lang.Override()
    public java.lang.Object loadDataAndPostValue(@org.jetbrains.annotations.NotNull()
    kotlinx.coroutines.Job job, @org.jetbrains.annotations.NotNull()
    kotlin.coroutines.Continuation<? super kotlin.Unit> p1) {
        return null;
    }
    
    @java.lang.Override()
    protected void onActive() {
    }
    
    public EnabledAccessibilityServicesLiveData(@org.jetbrains.annotations.NotNull()
    android.app.Application app, @org.jetbrains.annotations.NotNull()
    android.os.UserHandle user) {
        super(false, false);
    }
    
    /**
     * Repository for [EnabledAccessibilityServicesLiveData]
     *
     * <p> Key value is a user, value is its corresponding LiveData.
     */
    @kotlin.Metadata(mv = {1, 4, 2}, bv = {1, 0, 3}, k = 1, d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u00030\u0001B\u0007\b\u0002\u00a2\u0006\u0002\u0010\u0004J\u0010\u0010\u0005\u001a\u00020\u00032\u0006\u0010\u0006\u001a\u00020\u0002H\u0014"}, d2 = {"Lcom/android/permissioncontroller/permission/data/EnabledAccessibilityServicesLiveData$Companion;", "Lcom/android/permissioncontroller/permission/data/DataRepositoryForPackage;", "Landroid/os/UserHandle;", "Lcom/android/permissioncontroller/permission/data/EnabledAccessibilityServicesLiveData;", "()V", "newValue", "key"})
    public static final class Companion extends com.android.permissioncontroller.permission.data.DataRepositoryForPackage<android.os.UserHandle, com.android.permissioncontroller.permission.data.EnabledAccessibilityServicesLiveData> {
        
        @org.jetbrains.annotations.NotNull()
        @java.lang.Override()
        protected com.android.permissioncontroller.permission.data.EnabledAccessibilityServicesLiveData newValue(@org.jetbrains.annotations.NotNull()
        android.os.UserHandle key) {
            return null;
        }
        
        private Companion() {
            super();
        }
    }
}