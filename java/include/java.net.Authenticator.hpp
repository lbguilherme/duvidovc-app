#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class Authenticator; } }
namespace java { namespace net { class Authenticator_RequestorType; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class PasswordAuthentication; } }
namespace java { namespace net { class URL; } }

namespace java {
namespace net {
class Authenticator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Authenticator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Authenticator(const ::java::net::Authenticator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Authenticator(::java::net::Authenticator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::Authenticator& operator=(const ::java::net::Authenticator& x) {obj = x.obj; return *this;}
    ::java::net::Authenticator& operator=(::java::net::Authenticator&& x) {obj = std::move(x.obj); return *this;}
    
    Authenticator();
    static ::java::net::PasswordAuthentication requestPasswordAuthentication(const ::java::net::InetAddress&, int32_t, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static void setDefault(const ::java::net::Authenticator&);
    static ::java::net::PasswordAuthentication requestPasswordAuthentication(const ::java::lang::String&, const ::java::net::InetAddress&, int32_t, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static ::java::net::PasswordAuthentication requestPasswordAuthentication(const ::java::lang::String&, const ::java::net::InetAddress&, int32_t, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::net::URL&, const ::java::net::Authenticator_RequestorType&);

};
}
}

#include "java.net.Authenticator_RequestorType.hpp"

