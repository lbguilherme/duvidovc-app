#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace util {
class Config : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Config(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Config(const ::android::util::Config& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Config(::android::util::Config&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::Config& operator=(const ::android::util::Config& x) {obj = x.obj; return *this;}
    ::android::util::Config& operator=(::android::util::Config&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


