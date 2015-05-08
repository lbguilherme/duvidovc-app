#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
class Manifest_permission : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Manifest_permission(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Manifest_permission(const ::android::Manifest_permission& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Manifest_permission(::android::Manifest_permission&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::Manifest_permission& operator=(const ::android::Manifest_permission& x) {obj = x.obj; return *this;}
    ::android::Manifest_permission& operator=(::android::Manifest_permission&& x) {obj = std::move(x.obj); return *this;}
    
    Manifest_permission();

};
}


