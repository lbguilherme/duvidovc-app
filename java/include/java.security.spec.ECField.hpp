#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace security {
namespace spec {
class ECField : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ECField(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ECField(const ::java::security::spec::ECField& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ECField(::java::security::spec::ECField&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::ECField& operator=(const ::java::security::spec::ECField& x) {obj = x.obj; return *this;}
    ::java::security::spec::ECField& operator=(::java::security::spec::ECField&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getFieldSize() const;

};
}
}
}


