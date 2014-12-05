
#include <glbinding/ProcAddress.h>

#include <iostream>

#ifdef WIN32
    #include <string>
    #include <tchar.h>
    #include <windows.h>
#elif __APPLE__
    #include <cassert>
    #include <string>
    #include <dlfcn.h>
#else
    #include <GL/glx.h>
    #include <dlfcn.h>
#endif

namespace glbinding 
{

ProcAddress getProcAddress(const char * name)
{
#ifdef WIN32

    typedef void (__stdcall * PROCADDRESS)();
    PROCADDRESS procAddress = reinterpret_cast<PROCADDRESS>(wglGetProcAddress(name));

    if (procAddress == nullptr)
    {
        static HMODULE module = LoadLibrary(_T("OPENGL32.DLL"));
        procAddress = reinterpret_cast<PROCADDRESS>(::GetProcAddress(module, name));
    }

#elif __APPLE__

    typedef void * PROCADDRESS;

    void * library = dlopen("/System/Library/Frameworks/OpenGL.framework/Versions/Current/OpenGL", RTLD_LAZY);
    assert(library != nullptr);

    void * symbol = dlsym(library, name);

    PROCADDRESS procAddress = reinterpret_cast<PROCADDRESS>(symbol);

#else

    typedef void (* PROCADDRESS)();
    PROCADDRESS procAddress = reinterpret_cast<PROCADDRESS>(glXGetProcAddress(reinterpret_cast<const unsigned char*>(name)));

#endif

    return reinterpret_cast<ProcAddress>(procAddress);
}

ProcAddress getProcAddressES(const char * name)
{
#ifdef WIN32

    typedef void (__stdcall * PROCADDRESS)();
    PROCADDRESS procAddress = nullptr;
#elif __APPLE__

    typedef void * PROCADDRESS;
    PROCADDRESS procAddress = nullptr;

#else

    typedef void (* PROCADDRESS)();

    void* handle = dlopen("libGLESv2.so", RTLD_LAZY);

    if (!handle)
    {
        std::cerr << "Cannot open library: " << dlerror() << std::endl;
        return nullptr;
    }

    PROCADDRESS procAddress = reinterpret_cast<PROCADDRESS>(dlsym(handle, name));

    const char *dlsym_error = dlerror();
    if (dlsym_error)
    {
        std::cerr << "Cannot load symbol 'hello': " << dlsym_error << std::endl;
        dlclose(handle);
        return nullptr;
    }

    dlclose(handle);

#endif

    return reinterpret_cast<ProcAddress>(procAddress);
}

} // namespace glbinding
