#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { namespace reflect { class InvocationHandler; } } }

namespace java {
namespace lang {
namespace reflect {
class Proxy : public virtual ::java::lang::Object,
              public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Proxy(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Proxy(const ::java::lang::reflect::Proxy& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Proxy(::java::lang::reflect::Proxy&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::Proxy& operator=(const ::java::lang::reflect::Proxy& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::Proxy& operator=(::java::lang::reflect::Proxy&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::Class getProxyClass(const ::java::lang::ClassLoader&, const std::vector< ::java::lang::Class>&);
    static ::java::lang::Object newProxyInstance(const ::java::lang::ClassLoader&, const std::vector< ::java::lang::Class>&, const ::java::lang::reflect::InvocationHandler&);
    static bool isProxyClass(const ::java::lang::Class&);
    static ::java::lang::reflect::InvocationHandler getInvocationHandler(const ::java::lang::Object&);

};
}
}
}


