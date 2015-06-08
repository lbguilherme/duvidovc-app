#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace security { class Guard; } }

namespace java {
namespace security {
class GuardedObject : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GuardedObject(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GuardedObject(const ::java::security::GuardedObject& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    GuardedObject(::java::security::GuardedObject&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::GuardedObject& operator=(const ::java::security::GuardedObject& x) {obj = x.obj; return *this;}
    ::java::security::GuardedObject& operator=(::java::security::GuardedObject&& x) {obj = std::move(x.obj); return *this;}
    
    GuardedObject(const ::java::lang::Object&, const ::java::security::Guard&);
    ::java::lang::Object getObject() const;

};
}
}


