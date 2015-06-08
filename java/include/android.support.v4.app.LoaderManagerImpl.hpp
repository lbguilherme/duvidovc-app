#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.LoaderManager.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class LoaderManager_LoaderCallbacks; } } } }
namespace android { namespace support { namespace v4 { namespace content { class Loader; } } } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class LoaderManagerImpl : public virtual ::java::lang::Object,
                          public virtual ::android::support::v4::app::LoaderManager {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoaderManagerImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::LoaderManager(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoaderManagerImpl(const ::android::support::v4::app::LoaderManagerImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::LoaderManager((jobject)0) {obj = x.obj;}
    LoaderManagerImpl(::android::support::v4::app::LoaderManagerImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::LoaderManager((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::LoaderManagerImpl& operator=(const ::android::support::v4::app::LoaderManagerImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::LoaderManagerImpl& operator=(::android::support::v4::app::LoaderManagerImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::support::v4::content::Loader initLoader(int32_t, const ::android::os::Bundle&, const ::android::support::v4::app::LoaderManager_LoaderCallbacks&) const;
    ::android::support::v4::content::Loader restartLoader(int32_t, const ::android::os::Bundle&, const ::android::support::v4::app::LoaderManager_LoaderCallbacks&) const;
    void destroyLoader(int32_t) const;
    ::android::support::v4::content::Loader getLoader(int32_t) const;
    ::java::lang::String toString() const;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const;
    bool hasRunningLoaders() const;

};
}
}
}
}

#include "android.support.v4.app.LoaderManagerImpl_LoaderInfo.hpp"

