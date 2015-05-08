#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class Proxy : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Proxy(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Proxy(const ::android::net::Proxy& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Proxy(::android::net::Proxy&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::Proxy& operator=(const ::android::net::Proxy& x) {obj = x.obj; return *this;}
    ::android::net::Proxy& operator=(::android::net::Proxy&& x) {obj = std::move(x.obj); return *this;}
    
    Proxy();
    static ::java::lang::String getHost(const ::android::content::Context&);
    static int32_t getPort(const ::android::content::Context&);
    static ::java::lang::String getDefaultHost();
    static int32_t getDefaultPort();

};
}
}


