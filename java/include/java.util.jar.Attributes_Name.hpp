#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace jar {
class Attributes_Name : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Attributes_Name(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Attributes_Name(const ::java::util::jar::Attributes_Name& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Attributes_Name(::java::util::jar::Attributes_Name&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::jar::Attributes_Name& operator=(const ::java::util::jar::Attributes_Name& x) {obj = x.obj; return *this;}
    ::java::util::jar::Attributes_Name& operator=(::java::util::jar::Attributes_Name&& x) {obj = std::move(x.obj); return *this;}
    
    Attributes_Name(const ::java::lang::String&);
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;

};
}
}
}


