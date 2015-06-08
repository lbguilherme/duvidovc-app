#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class NetworkInterface; } }
namespace java { namespace util { class Enumeration; } }
namespace java { namespace util { class List; } }

namespace java {
namespace net {
class NetworkInterface : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NetworkInterface(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NetworkInterface(const ::java::net::NetworkInterface& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NetworkInterface(::java::net::NetworkInterface&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::NetworkInterface& operator=(const ::java::net::NetworkInterface& x) {obj = x.obj; return *this;}
    ::java::net::NetworkInterface& operator=(::java::net::NetworkInterface&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const;
    ::java::util::Enumeration getInetAddresses() const;
    ::java::lang::String getDisplayName() const;
    static ::java::net::NetworkInterface getByName(const ::java::lang::String&);
    static ::java::net::NetworkInterface getByInetAddress(const ::java::net::InetAddress&);
    static ::java::util::Enumeration getNetworkInterfaces();
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;
    ::java::util::List getInterfaceAddresses() const;
    ::java::util::Enumeration getSubInterfaces() const;
    ::java::net::NetworkInterface getParent() const;
    bool isUp() const;
    bool isLoopback() const;
    bool isPointToPoint() const;
    bool supportsMulticast() const;
    std::vector< int8_t> getHardwareAddress() const;
    int32_t getMTU() const;
    bool isVirtual() const;

};
}
}


