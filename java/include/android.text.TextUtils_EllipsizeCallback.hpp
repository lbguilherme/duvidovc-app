#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace text {
class TextUtils_EllipsizeCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextUtils_EllipsizeCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextUtils_EllipsizeCallback(const ::android::text::TextUtils_EllipsizeCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextUtils_EllipsizeCallback(::android::text::TextUtils_EllipsizeCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::TextUtils_EllipsizeCallback& operator=(const ::android::text::TextUtils_EllipsizeCallback& x) {obj = x.obj; return *this;}
    ::android::text::TextUtils_EllipsizeCallback& operator=(::android::text::TextUtils_EllipsizeCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void ellipsized(int32_t, int32_t) const;

};
}
}


