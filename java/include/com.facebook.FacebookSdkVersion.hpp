#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
class FacebookSdkVersion : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookSdkVersion(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookSdkVersion(const ::com::facebook::FacebookSdkVersion& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FacebookSdkVersion(::com::facebook::FacebookSdkVersion&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookSdkVersion& operator=(const ::com::facebook::FacebookSdkVersion& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookSdkVersion& operator=(::com::facebook::FacebookSdkVersion&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


