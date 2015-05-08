#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace os {
class Build_VERSION : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Build_VERSION(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Build_VERSION(const ::android::os::Build_VERSION& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Build_VERSION(::android::os::Build_VERSION&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Build_VERSION& operator=(const ::android::os::Build_VERSION& x) {obj = x.obj; return *this;}
    ::android::os::Build_VERSION& operator=(::android::os::Build_VERSION&& x) {obj = std::move(x.obj); return *this;}
    
    Build_VERSION();

};
}
}


