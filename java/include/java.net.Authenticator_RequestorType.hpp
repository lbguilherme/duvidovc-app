#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class Authenticator_RequestorType; } }

namespace java {
namespace net {
class Authenticator_RequestorType : public virtual ::java::lang::Object,
                                    public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Authenticator_RequestorType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Authenticator_RequestorType(const ::java::net::Authenticator_RequestorType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Authenticator_RequestorType(::java::net::Authenticator_RequestorType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::Authenticator_RequestorType& operator=(const ::java::net::Authenticator_RequestorType& x) {obj = x.obj; return *this;}
    ::java::net::Authenticator_RequestorType& operator=(::java::net::Authenticator_RequestorType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::java::net::Authenticator_RequestorType> values();
    static ::java::net::Authenticator_RequestorType valueOf(const ::java::lang::String&);

};
}
}


