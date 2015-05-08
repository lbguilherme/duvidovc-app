#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
class RequestProgress : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RequestProgress(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RequestProgress(const ::com::facebook::RequestProgress& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RequestProgress(::com::facebook::RequestProgress&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::RequestProgress& operator=(const ::com::facebook::RequestProgress& x) {obj = x.obj; return *this;}
    ::com::facebook::RequestProgress& operator=(::com::facebook::RequestProgress&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


