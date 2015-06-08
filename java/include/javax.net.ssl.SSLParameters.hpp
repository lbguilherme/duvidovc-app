#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace net {
namespace ssl {
class SSLParameters : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLParameters(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLParameters(const ::javax::net::ssl::SSLParameters& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SSLParameters(::javax::net::ssl::SSLParameters&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLParameters& operator=(const ::javax::net::ssl::SSLParameters& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLParameters& operator=(::javax::net::ssl::SSLParameters&& x) {obj = std::move(x.obj); return *this;}
    
    SSLParameters();
    SSLParameters(const std::vector< ::java::lang::String>&);
    SSLParameters(const std::vector< ::java::lang::String>&, const std::vector< ::java::lang::String>&);
    std::vector< ::java::lang::String> getCipherSuites() const;
    void setCipherSuites(const std::vector< ::java::lang::String>&) const;
    std::vector< ::java::lang::String> getProtocols() const;
    void setProtocols(const std::vector< ::java::lang::String>&) const;
    bool getNeedClientAuth() const;
    void setNeedClientAuth(bool) const;
    bool getWantClientAuth() const;
    void setWantClientAuth(bool) const;

};
}
}
}


