#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace security { namespace spec { class ECParameterSpec; } } }

namespace java {
namespace security {
namespace interfaces {
class ECKey : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ECKey(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ECKey(const ::java::security::interfaces::ECKey& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ECKey(::java::security::interfaces::ECKey&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::interfaces::ECKey& operator=(const ::java::security::interfaces::ECKey& x) {obj = x.obj; return *this;}
    ::java::security::interfaces::ECKey& operator=(::java::security::interfaces::ECKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::security::spec::ECParameterSpec getParams() const ;

};
}
}
}


