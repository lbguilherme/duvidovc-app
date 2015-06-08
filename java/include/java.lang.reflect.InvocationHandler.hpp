#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { namespace reflect { class Method; } } }

namespace java {
namespace lang {
namespace reflect {
class InvocationHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InvocationHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InvocationHandler(const ::java::lang::reflect::InvocationHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InvocationHandler(::java::lang::reflect::InvocationHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::InvocationHandler& operator=(const ::java::lang::reflect::InvocationHandler& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::InvocationHandler& operator=(::java::lang::reflect::InvocationHandler&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object invoke(const ::java::lang::Object&, const ::java::lang::reflect::Method&, const std::vector< ::java::lang::Object>&) const;

};
}
}
}


