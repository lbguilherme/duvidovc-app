#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { class Enumeration; } }
namespace javax { namespace net { namespace ssl { class SSLSession; } } }

namespace javax {
namespace net {
namespace ssl {
class SSLSessionContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLSessionContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLSessionContext(const ::javax::net::ssl::SSLSessionContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SSLSessionContext(::javax::net::ssl::SSLSessionContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLSessionContext& operator=(const ::javax::net::ssl::SSLSessionContext& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLSessionContext& operator=(::javax::net::ssl::SSLSessionContext&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Enumeration getIds() const ;
    ::javax::net::ssl::SSLSession getSession(const std::vector< int8_t>&) const ;
    int32_t getSessionCacheSize() const ;
    int32_t getSessionTimeout() const ;
    void setSessionCacheSize(int32_t) const ;
    void setSessionTimeout(int32_t) const ;

};
}
}
}


