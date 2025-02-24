package dagger.internal.codegen.binding;

import dagger.internal.Factory;
import javax.annotation.Generated;
import javax.inject.Provider;

@Generated(
    value = "dagger.internal.codegen.ComponentProcessor",
    comments = "https://dagger.dev"
)
@SuppressWarnings({
    "unchecked",
    "rawtypes"
})
public final class SubcomponentDeclaration_Factory_Factory implements Factory<SubcomponentDeclaration.Factory> {
  private final Provider<KeyFactory> keyFactoryProvider;

  public SubcomponentDeclaration_Factory_Factory(Provider<KeyFactory> keyFactoryProvider) {
    this.keyFactoryProvider = keyFactoryProvider;
  }

  @Override
  public SubcomponentDeclaration.Factory get() {
    return new SubcomponentDeclaration.Factory(keyFactoryProvider.get());
  }

  public static SubcomponentDeclaration_Factory_Factory create(
      Provider<KeyFactory> keyFactoryProvider) {
    return new SubcomponentDeclaration_Factory_Factory(keyFactoryProvider);
  }

  public static SubcomponentDeclaration.Factory newInstance(KeyFactory keyFactory) {
    return new SubcomponentDeclaration.Factory(keyFactory);
  }
}
