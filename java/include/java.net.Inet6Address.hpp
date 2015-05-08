#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.InetAddress.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class Inet6Address; } }
namespace java { namespace net { class NetworkInterface; } }

namespace java {
namespace net {
class Inet6Address : public virtual ::java::lang::Object,
                     public virtual ::java::net::InetAddress {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Inet6Address(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::net::InetAddress(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Inet6Address(const ::java::net::Inet6Address& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::net::InetAddress((jobject)0) {obj = x.obj;}
    Inet6Address(::java::net::Inet6Address&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::net::InetAddress((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::Inet6Address& operator=(const ::java::net::Inet6Address& x) {obj = x.obj; return *this;}
    ::java::net::Inet6Address& operator=(::java::net::Inet6Address&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::net::Inet6Address getByAddress(const ::java::lang::String&, const std::vector< int8_t>&, int32_t);
    static ::java::net::Inet6Address getByAddress(const ::java::lang::String&, const std::vector< int8_t>&, const ::java::net::NetworkInterface&);
    bool isAnyLocalAddress() const ;
    bool isIPv4CompatibleAddress() const ;
    bool isLinkLocalAddress() const ;
    bool isLoopbackAddress() const ;
    bool isMCGlobal() const ;
    bool isMCLinkLocal() const ;
    bool isMCNodeLocal() const ;
    bool isMCOrgLocal() const ;
    bool isMCSiteLocal() const ;
    bool isMulticastAddress() const ;
    bool isSiteLocalAddress() const ;
    int32_t getScopeId() const ;
    ::java::net::NetworkInterface getScopedInterface() const ;
    ::java::lang::String toString() const ;

};
}
}


