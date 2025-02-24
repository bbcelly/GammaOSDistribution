package dagger.internal.codegen.writing;

import dagger.internal.Factory;
import dagger.internal.codegen.langmodel.DaggerElements;
import javax.annotation.Generated;
import javax.annotation.processing.Filer;
import javax.inject.Provider;
import javax.lang.model.SourceVersion;

@Generated(
    value = "dagger.internal.codegen.ComponentProcessor",
    comments = "https://dagger.dev"
)
@SuppressWarnings({
    "unchecked",
    "rawtypes"
})
public final class AnnotationCreatorGenerator_Factory implements Factory<AnnotationCreatorGenerator> {
  private final Provider<Filer> filerProvider;

  private final Provider<DaggerElements> elementsProvider;

  private final Provider<SourceVersion> sourceVersionProvider;

  public AnnotationCreatorGenerator_Factory(Provider<Filer> filerProvider,
      Provider<DaggerElements> elementsProvider, Provider<SourceVersion> sourceVersionProvider) {
    this.filerProvider = filerProvider;
    this.elementsProvider = elementsProvider;
    this.sourceVersionProvider = sourceVersionProvider;
  }

  @Override
  public AnnotationCreatorGenerator get() {
    return new AnnotationCreatorGenerator(filerProvider.get(), elementsProvider.get(), sourceVersionProvider.get());
  }

  public static AnnotationCreatorGenerator_Factory create(Provider<Filer> filerProvider,
      Provider<DaggerElements> elementsProvider, Provider<SourceVersion> sourceVersionProvider) {
    return new AnnotationCreatorGenerator_Factory(filerProvider, elementsProvider, sourceVersionProvider);
  }

  public static AnnotationCreatorGenerator newInstance(Filer filer, DaggerElements elements,
      SourceVersion sourceVersion) {
    return new AnnotationCreatorGenerator(filer, elements, sourceVersion);
  }
}
