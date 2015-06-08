#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.InetAddress.hpp"


namespace java {
namespace net {
class Inet4Address : public virtual ::java::lang::Object,
                     public virtual ::java::net::InetAddress {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Inet4Address(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::net::InetAddress(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Inet4Address(const ::java::net::Inet4Address& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::net::InetAddress((jobject)0) {obj = x.obj;}
    Inet4Address(::java::net::Inet4Address&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::net::InetAddress((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::Inet4Address& operator=(const ::java::net::Inet4Address& x) {obj = x.obj; return *this;}
    ::java::net::Inet4Address& operator=(::java::net::Inet4Address&& x) {obj = std::move(x.obj); return *this;}
    
    bool isAnyLocalAddress() const;
    bool isLinkLocalAddress() const;
    bool isLoopbackAddress() const;
    bool isMCGlobal() const;
    bool isMCLinkLocal() const;
    bool isMCNodeLocal() const;
    bool isMCOrgLocal() const;
    bool isMCSiteLocal() const;
    bool isMulticastAddress() const;
    bool isSiteLocalAddress() const;

};
}
}


