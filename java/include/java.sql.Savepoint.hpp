#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace sql {
class Savepoint : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Savepoint(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Savepoint(const ::java::sql::Savepoint& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Savepoint(::java::sql::Savepoint&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Savepoint& operator=(const ::java::sql::Savepoint& x) {obj = x.obj; return *this;}
    ::java::sql::Savepoint& operator=(::java::sql::Savepoint&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getSavepointId() const ;
    ::java::lang::String getSavepointName() const ;

};
}
}


