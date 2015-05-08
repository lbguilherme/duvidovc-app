#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
class Manifest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Manifest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Manifest(const ::android::Manifest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Manifest(::android::Manifest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::Manifest& operator=(const ::android::Manifest& x) {obj = x.obj; return *this;}
    ::android::Manifest& operator=(::android::Manifest&& x) {obj = std::move(x.obj); return *this;}
    
    Manifest();

};
}

#include "android.Manifest_permission.hpp"
#include "android.Manifest_permission_group.hpp"

