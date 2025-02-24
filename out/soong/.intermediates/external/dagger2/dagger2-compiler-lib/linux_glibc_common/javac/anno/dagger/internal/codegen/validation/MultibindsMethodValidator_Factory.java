package dagger.internal.codegen.validation;

import dagger.internal.Factory;
import dagger.internal.codegen.binding.InjectionAnnotations;
import dagger.internal.codegen.kotlin.KotlinMetadataUtil;
import dagger.internal.codegen.langmodel.DaggerElements;
import dagger.internal.codegen.langmodel.DaggerTypes;
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
public final class MultibindsMethodValidator_Factory implements Factory<MultibindsMethodValidator> {
  private final Provider<DaggerElements> elementsProvider;

  private final Provider<DaggerTypes> typesProvider;

  private final Provider<KotlinMetadataUtil> kotlinMetadataUtilProvider;

  private final Provider<DependencyRequestValidator> dependencyRequestValidatorProvider;

  private final Provider<InjectionAnnotations> injectionAnnotationsProvider;

  public MultibindsMethodValidator_Factory(Provider<DaggerElements> elementsProvider,
      Provider<DaggerTypes> typesProvider, Provider<KotlinMetadataUtil> kotlinMetadataUtilProvider,
      Provider<DependencyRequestValidator> dependencyRequestValidatorProvider,
      Provider<InjectionAnnotations> injectionAnnotationsProvider) {
    this.elementsProvider = elementsProvider;
    this.typesProvider = typesProvider;
    this.kotlinMetadataUtilProvider = kotlinMetadataUtilProvider;
    this.dependencyRequestValidatorProvider = dependencyRequestValidatorProvider;
    this.injectionAnnotationsProvider = injectionAnnotationsProvider;
  }

  @Override
  public MultibindsMethodValidator get() {
    return new MultibindsMethodValidator(elementsProvider.get(), typesProvider.get(), kotlinMetadataUtilProvider.get(), dependencyRequestValidatorProvider.get(), injectionAnnotationsProvider.get());
  }

  public static MultibindsMethodValidator_Factory create(Provider<DaggerElements> elementsProvider,
      Provider<DaggerTypes> typesProvider, Provider<KotlinMetadataUtil> kotlinMetadataUtilProvider,
      Provider<DependencyRequestValidator> dependencyRequestValidatorProvider,
      Provider<InjectionAnnotations> injectionAnnotationsProvider) {
    return new MultibindsMethodValidator_Factory(elementsProvider, typesProvider, kotlinMetadataUtilProvider, dependencyRequestValidatorProvider, injectionAnnotationsProvider);
  }

  public static MultibindsMethodValidator newInstance(DaggerElements elements, DaggerTypes types,
      KotlinMetadataUtil kotlinMetadataUtil, Object dependencyRequestValidator,
      InjectionAnnotations injectionAnnotations) {
    return new MultibindsMethodValidator(elements, types, kotlinMetadataUtil, (DependencyRequestValidator) dependencyRequestValidator, injectionAnnotations);
  }
}
