#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace sql {
class Ref : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Ref(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Ref(const ::java::sql::Ref& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Ref(::java::sql::Ref&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Ref& operator=(const ::java::sql::Ref& x) {obj = x.obj; return *this;}
    ::java::sql::Ref& operator=(::java::sql::Ref&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getBaseTypeName() const ;
    ::java::lang::Object getObject() const ;
    ::java::lang::Object getObject(const ::java::util::Map&) const ;
    void setObject(const ::java::lang::Object&) const ;

};
}
}


