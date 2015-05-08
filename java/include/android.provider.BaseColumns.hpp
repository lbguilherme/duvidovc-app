#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class BaseColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BaseColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BaseColumns(const ::android::provider::BaseColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BaseColumns(::android::provider::BaseColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::BaseColumns& operator=(const ::android::provider::BaseColumns& x) {obj = x.obj; return *this;}
    ::android::provider::BaseColumns& operator=(::android::provider::BaseColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


