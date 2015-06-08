#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class NetworkInterface; } }

namespace java {
namespace net {
class InetAddress : public virtual ::java::lang::Object,
                    public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InetAddress(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InetAddress(const ::java::net::InetAddress& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    InetAddress(::java::net::InetAddress&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::InetAddress& operator=(const ::java::net::InetAddress& x) {obj = x.obj; return *this;}
    ::java::net::InetAddress& operator=(::java::net::InetAddress&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const;
    std::vector< int8_t> getAddress() const;
    static std::vector< ::java::net::InetAddress> getAllByName(const ::java::lang::String&);
    static ::java::net::InetAddress getByName(const ::java::lang::String&);
    ::java::lang::String getHostAddress() const;
    ::java::lang::String getHostName() const;
    ::java::lang::String getCanonicalHostName() const;
    static ::java::net::InetAddress getLocalHost();
    int32_t hashCode() const;
    ::java::lang::String toString() const;
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
    bool isReachable(int32_t) const;
    bool isReachable(const ::java::net::NetworkInterface&, int32_t, int32_t) const;
    static ::java::net::InetAddress getByAddress(const std::vector< int8_t>&);
    static ::java::net::InetAddress getByAddress(const ::java::lang::String&, const std::vector< int8_t>&);

};
}
}


