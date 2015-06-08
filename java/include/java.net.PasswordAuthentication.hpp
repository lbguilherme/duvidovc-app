#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace net {
class PasswordAuthentication : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PasswordAuthentication(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PasswordAuthentication(const ::java::net::PasswordAuthentication& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PasswordAuthentication(::java::net::PasswordAuthentication&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::PasswordAuthentication& operator=(const ::java::net::PasswordAuthentication& x) {obj = x.obj; return *this;}
    ::java::net::PasswordAuthentication& operator=(::java::net::PasswordAuthentication&& x) {obj = std::move(x.obj); return *this;}
    
    PasswordAuthentication(const ::java::lang::String&, const std::vector< uint16_t>&);
    std::vector< uint16_t> getPassword() const;
    ::java::lang::String getUserName() const;

};
}
}


