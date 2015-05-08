#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace io { class File; } }

namespace android {
namespace net {
class SSLSessionCache : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLSessionCache(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLSessionCache(const ::android::net::SSLSessionCache& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SSLSessionCache(::android::net::SSLSessionCache&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::SSLSessionCache& operator=(const ::android::net::SSLSessionCache& x) {obj = x.obj; return *this;}
    ::android::net::SSLSessionCache& operator=(::android::net::SSLSessionCache&& x) {obj = std::move(x.obj); return *this;}
    
    SSLSessionCache(const ::java::io::File&);
    SSLSessionCache(const ::android::content::Context&);

};
}
}


