#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class AssetFileDescriptor; } } }
namespace android { namespace content { namespace res { class XmlResourceParser; } } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace res {
class AssetManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AssetManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AssetManager(const ::android::content::res::AssetManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AssetManager(::android::content::res::AssetManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::AssetManager& operator=(const ::android::content::res::AssetManager& x) {obj = x.obj; return *this;}
    ::android::content::res::AssetManager& operator=(::android::content::res::AssetManager&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const;
    ::java::io::InputStream open(const ::java::lang::String&) const;
    ::java::io::InputStream open(const ::java::lang::String&, int32_t) const;
    ::android::content::res::AssetFileDescriptor openFd(const ::java::lang::String&) const;
    std::vector< ::java::lang::String> list(const ::java::lang::String&) const;
    ::android::content::res::AssetFileDescriptor openNonAssetFd(const ::java::lang::String&) const;
    ::android::content::res::AssetFileDescriptor openNonAssetFd(int32_t, const ::java::lang::String&) const;
    ::android::content::res::XmlResourceParser openXmlResourceParser(const ::java::lang::String&) const;
    ::android::content::res::XmlResourceParser openXmlResourceParser(int32_t, const ::java::lang::String&) const;
    std::vector< ::java::lang::String> getLocales() const;

};
}
}
}

#include "android.content.res.AssetManager_AssetInputStream.hpp"

