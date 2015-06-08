#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class CacheManager_CacheResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CacheManager_CacheResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CacheManager_CacheResult(const ::android::webkit::CacheManager_CacheResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CacheManager_CacheResult(::android::webkit::CacheManager_CacheResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::CacheManager_CacheResult& operator=(const ::android::webkit::CacheManager_CacheResult& x) {obj = x.obj; return *this;}
    ::android::webkit::CacheManager_CacheResult& operator=(::android::webkit::CacheManager_CacheResult&& x) {obj = std::move(x.obj); return *this;}
    
    CacheManager_CacheResult();
    int32_t getHttpStatusCode() const;
    int64_t getContentLength() const;
    ::java::lang::String getLocalPath() const;
    int64_t getExpires() const;
    ::java::lang::String getExpiresString() const;
    ::java::lang::String getLastModified() const;
    ::java::lang::String getETag() const;
    ::java::lang::String getMimeType() const;
    ::java::lang::String getLocation() const;
    ::java::lang::String getEncoding() const;
    ::java::lang::String getContentDisposition() const;
    ::java::io::InputStream getInputStream() const;
    ::java::io::OutputStream getOutputStream() const;
    void setInputStream(const ::java::io::InputStream&) const;
    void setEncoding(const ::java::lang::String&) const;

};
}
}


