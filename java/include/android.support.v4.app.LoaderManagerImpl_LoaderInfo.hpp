#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.content.Loader_OnLoadCompleteListener.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class LoaderManager_LoaderCallbacks; } } } }
namespace android { namespace support { namespace v4 { namespace content { class Loader; } } } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class LoaderManagerImpl_LoaderInfo : public virtual ::java::lang::Object,
                                     public virtual ::android::support::v4::content::Loader_OnLoadCompleteListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoaderManagerImpl_LoaderInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::content::Loader_OnLoadCompleteListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoaderManagerImpl_LoaderInfo(const ::android::support::v4::app::LoaderManagerImpl_LoaderInfo& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::Loader_OnLoadCompleteListener((jobject)0) {obj = x.obj;}
    LoaderManagerImpl_LoaderInfo(::android::support::v4::app::LoaderManagerImpl_LoaderInfo&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::Loader_OnLoadCompleteListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::LoaderManagerImpl_LoaderInfo& operator=(const ::android::support::v4::app::LoaderManagerImpl_LoaderInfo& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::LoaderManagerImpl_LoaderInfo& operator=(::android::support::v4::app::LoaderManagerImpl_LoaderInfo&& x) {obj = std::move(x.obj); return *this;}
    
    LoaderManagerImpl_LoaderInfo(int32_t, const ::android::os::Bundle&, const ::android::support::v4::app::LoaderManager_LoaderCallbacks&);
    void onLoadComplete(const ::android::support::v4::content::Loader&, const ::java::lang::Object&) const;
    ::java::lang::String toString() const;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const;

};
}
}
}
}


