#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.ssl.AbstractVerifier.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace ssl {
class AllowAllHostnameVerifier : public virtual ::java::lang::Object,
                                 public virtual ::org::apache::http::conn::ssl::AbstractVerifier {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AllowAllHostnameVerifier(jobject _obj) : ::java::lang::Object(_obj), ::javax::net::ssl::HostnameVerifier(_obj), ::org::apache::http::conn::ssl::AbstractVerifier(_obj), ::org::apache::http::conn::ssl::X509HostnameVerifier(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AllowAllHostnameVerifier(const ::org::apache::http::conn::ssl::AllowAllHostnameVerifier& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::HostnameVerifier((jobject)0), ::org::apache::http::conn::ssl::AbstractVerifier((jobject)0), ::org::apache::http::conn::ssl::X509HostnameVerifier((jobject)0) {obj = x.obj;}
    AllowAllHostnameVerifier(::org::apache::http::conn::ssl::AllowAllHostnameVerifier&& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::HostnameVerifier((jobject)0), ::org::apache::http::conn::ssl::AbstractVerifier((jobject)0), ::org::apache::http::conn::ssl::X509HostnameVerifier((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ssl::AllowAllHostnameVerifier& operator=(const ::org::apache::http::conn::ssl::AllowAllHostnameVerifier& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ssl::AllowAllHostnameVerifier& operator=(::org::apache::http::conn::ssl::AllowAllHostnameVerifier&& x) {obj = std::move(x.obj); return *this;}
    
    AllowAllHostnameVerifier();
    void verify(const ::java::lang::String&, const std::vector< ::java::lang::String>&, const std::vector< ::java::lang::String>&) const;
    ::java::lang::String toString() const;

};
}
}
}
}
}


