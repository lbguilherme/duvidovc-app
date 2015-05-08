#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
class FacebookRequestError_Range : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookRequestError_Range(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookRequestError_Range(const ::com::facebook::FacebookRequestError_Range& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FacebookRequestError_Range(::com::facebook::FacebookRequestError_Range&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookRequestError_Range& operator=(const ::com::facebook::FacebookRequestError_Range& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookRequestError_Range& operator=(::com::facebook::FacebookRequestError_Range&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


