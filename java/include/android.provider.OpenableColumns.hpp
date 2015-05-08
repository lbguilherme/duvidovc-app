#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class OpenableColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OpenableColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OpenableColumns(const ::android::provider::OpenableColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    OpenableColumns(::android::provider::OpenableColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::OpenableColumns& operator=(const ::android::provider::OpenableColumns& x) {obj = x.obj; return *this;}
    ::android::provider::OpenableColumns& operator=(::android::provider::OpenableColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


