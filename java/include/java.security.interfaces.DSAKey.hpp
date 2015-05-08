#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace security { namespace interfaces { class DSAParams; } } }

namespace java {
namespace security {
namespace interfaces {
class DSAKey : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DSAKey(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DSAKey(const ::java::security::interfaces::DSAKey& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DSAKey(::java::security::interfaces::DSAKey&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::interfaces::DSAKey& operator=(const ::java::security::interfaces::DSAKey& x) {obj = x.obj; return *this;}
    ::java::security::interfaces::DSAKey& operator=(::java::security::interfaces::DSAKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::security::interfaces::DSAParams getParams() const ;

};
}
}
}


