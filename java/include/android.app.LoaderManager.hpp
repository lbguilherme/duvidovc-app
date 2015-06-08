#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class LoaderManager_LoaderCallbacks; } }
namespace android { namespace content { class Loader; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class LoaderManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoaderManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoaderManager(const ::android::app::LoaderManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LoaderManager(::android::app::LoaderManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::LoaderManager& operator=(const ::android::app::LoaderManager& x) {obj = x.obj; return *this;}
    ::android::app::LoaderManager& operator=(::android::app::LoaderManager&& x) {obj = std::move(x.obj); return *this;}
    
    LoaderManager();
    ::android::content::Loader initLoader(int32_t, const ::android::os::Bundle&, const ::android::app::LoaderManager_LoaderCallbacks&) const;
    ::android::content::Loader restartLoader(int32_t, const ::android::os::Bundle&, const ::android::app::LoaderManager_LoaderCallbacks&) const;
    void destroyLoader(int32_t) const;
    ::android::content::Loader getLoader(int32_t) const;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const;
    static void enableDebugLogging(bool);

};
}
}

#include "android.app.LoaderManager_LoaderCallbacks.hpp"

