#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace cookie {
class CookieOrigin : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieOrigin(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieOrigin(const ::org::apache::http::cookie::CookieOrigin& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookieOrigin(::org::apache::http::cookie::CookieOrigin&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::CookieOrigin& operator=(const ::org::apache::http::cookie::CookieOrigin& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::CookieOrigin& operator=(::org::apache::http::cookie::CookieOrigin&& x) {obj = std::move(x.obj); return *this;}
    
    CookieOrigin(const ::java::lang::String&, int32_t, const ::java::lang::String&, bool);
    ::java::lang::String getHost() const;
    ::java::lang::String getPath() const;
    int32_t getPort() const;
    bool isSecure() const;
    ::java::lang::String toString() const;

};
}
}
}
}


