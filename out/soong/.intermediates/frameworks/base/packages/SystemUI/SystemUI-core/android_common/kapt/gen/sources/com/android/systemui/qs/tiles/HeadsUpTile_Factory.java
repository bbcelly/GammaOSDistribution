package com.android.systemui.qs.tiles;

import android.os.Handler;
import android.os.Looper;
import com.android.internal.logging.MetricsLogger;
import com.android.systemui.plugins.ActivityStarter;
import com.android.systemui.plugins.FalsingManager;
import com.android.systemui.plugins.statusbar.StatusBarStateController;
import com.android.systemui.qs.QSHost;
import com.android.systemui.qs.logging.QSLogger;
import dagger.internal.Factory;
import javax.annotation.processing.Generated;
import javax.inject.Provider;

@Generated(
    value = "dagger.internal.codegen.ComponentProcessor",
    comments = "https://dagger.dev"
)
@SuppressWarnings({
    "unchecked",
    "rawtypes"
})
public final class HeadsUpTile_Factory implements Factory<HeadsUpTile> {
  private final Provider<QSHost> hostProvider;

  private final Provider<Looper> backgroundLooperProvider;

  private final Provider<Handler> mainHandlerProvider;

  private final Provider<FalsingManager> falsingManagerProvider;

  private final Provider<MetricsLogger> metricsLoggerProvider;

  private final Provider<StatusBarStateController> statusBarStateControllerProvider;

  private final Provider<ActivityStarter> activityStarterProvider;

  private final Provider<QSLogger> qsLoggerProvider;

  public HeadsUpTile_Factory(Provider<QSHost> hostProvider,
      Provider<Looper> backgroundLooperProvider, Provider<Handler> mainHandlerProvider,
      Provider<FalsingManager> falsingManagerProvider,
      Provider<MetricsLogger> metricsLoggerProvider,
      Provider<StatusBarStateController> statusBarStateControllerProvider,
      Provider<ActivityStarter> activityStarterProvider, Provider<QSLogger> qsLoggerProvider) {
    this.hostProvider = hostProvider;
    this.backgroundLooperProvider = backgroundLooperProvider;
    this.mainHandlerProvider = mainHandlerProvider;
    this.falsingManagerProvider = falsingManagerProvider;
    this.metricsLoggerProvider = metricsLoggerProvider;
    this.statusBarStateControllerProvider = statusBarStateControllerProvider;
    this.activityStarterProvider = activityStarterProvider;
    this.qsLoggerProvider = qsLoggerProvider;
  }

  @Override
  public HeadsUpTile get() {
    return newInstance(hostProvider.get(), backgroundLooperProvider.get(), mainHandlerProvider.get(), falsingManagerProvider.get(), metricsLoggerProvider.get(), statusBarStateControllerProvider.get(), activityStarterProvider.get(), qsLoggerProvider.get());
  }

  public static HeadsUpTile_Factory create(Provider<QSHost> hostProvider,
      Provider<Looper> backgroundLooperProvider, Provider<Handler> mainHandlerProvider,
      Provider<FalsingManager> falsingManagerProvider,
      Provider<MetricsLogger> metricsLoggerProvider,
      Provider<StatusBarStateController> statusBarStateControllerProvider,
      Provider<ActivityStarter> activityStarterProvider, Provider<QSLogger> qsLoggerProvider) {
    return new HeadsUpTile_Factory(hostProvider, backgroundLooperProvider, mainHandlerProvider, falsingManagerProvider, metricsLoggerProvider, statusBarStateControllerProvider, activityStarterProvider, qsLoggerProvider);
  }

  public static HeadsUpTile newInstance(QSHost host, Looper backgroundLooper, Handler mainHandler,
      FalsingManager falsingManager, MetricsLogger metricsLogger,
      StatusBarStateController statusBarStateController, ActivityStarter activityStarter,
      QSLogger qsLogger) {
    return new HeadsUpTile(host, backgroundLooper, mainHandler, falsingManager, metricsLogger, statusBarStateController, activityStarter, qsLogger);
  }
}
