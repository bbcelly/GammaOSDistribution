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
public final class BindingDeclarationFormatter_Factory implements Factory<BindingDeclarationFormatter> {
  private final Provider<MethodSignatureFormatter> methodSignatureFormatterProvider;

  public BindingDeclarationFormatter_Factory(
      Provider<MethodSignatureFormatter> methodSignatureFormatterProvider) {
    this.methodSignatureFormatterProvider = methodSignatureFormatterProvider;
  }

  @Override
  public BindingDeclarationFormatter get() {
    return new BindingDeclarationFormatter(methodSignatureFormatterProvider.get());
  }

  public static BindingDeclarationFormatter_Factory create(
      Provider<MethodSignatureFormatter> methodSignatureFormatterProvider) {
    return new BindingDeclarationFormatter_Factory(methodSignatureFormatterProvider);
  }

  public static BindingDeclarationFormatter newInstance(
      MethodSignatureFormatter methodSignatureFormatter) {
    return new BindingDeclarationFormatter(methodSignatureFormatter);
  }
}
