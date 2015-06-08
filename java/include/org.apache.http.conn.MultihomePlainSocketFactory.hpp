#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.scheme.SocketFactory.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class Socket; } }
namespace org { namespace apache { namespace http { namespace conn { class MultihomePlainSocketFactory; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class MultihomePlainSocketFactory : public virtual ::java::lang::Object,
                                    public virtual ::org::apache::http::conn::scheme::SocketFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MultihomePlainSocketFactory(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::scheme::SocketFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MultihomePlainSocketFactory(const ::org::apache::http::conn::MultihomePlainSocketFactory& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {obj = x.obj;}
    MultihomePlainSocketFactory(::org::apache::http::conn::MultihomePlainSocketFactory&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::MultihomePlainSocketFactory& operator=(const ::org::apache::http::conn::MultihomePlainSocketFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::MultihomePlainSocketFactory& operator=(::org::apache::http::conn::MultihomePlainSocketFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::org::apache::http::conn::MultihomePlainSocketFactory getSocketFactory();
    ::java::net::Socket createSocket() const;
    ::java::net::Socket connectSocket(const ::java::net::Socket&, const ::java::lang::String&, int32_t, const ::java::net::InetAddress&, int32_t, const ::org::apache::http::params::HttpParams&) const;
    bool isSecure(const ::java::net::Socket&) const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;

};
}
}
}
}


