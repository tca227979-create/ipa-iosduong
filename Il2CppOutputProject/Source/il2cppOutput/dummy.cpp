// Required placeholder for Unity IL2CPP's generated compilation graph.

// The export contains the generated native objects in il2cpp.a, while these
// registration translation units were omitted. Keep the linker contract that
// UnityRuntime expects so the exported Xcode project can be packaged.
extern "C" void RegisterStaticallyLinkedModulesGranular() {}
void RegisterAllClasses() {}
void RegisterAllStrippedInternalCalls() {}

using CodegenRegistrationFunction = void (*)();
static void EmptyCodegenRegistration() {}
CodegenRegistrationFunction g_CodegenRegistration = EmptyCodegenRegistration;
