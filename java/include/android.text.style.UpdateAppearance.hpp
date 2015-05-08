#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace text {
namespace style {
class UpdateAppearance : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UpdateAppearance(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UpdateAppearance(const ::android::text::style::UpdateAppearance& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UpdateAppearance(::android::text::style::UpdateAppearance&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::UpdateAppearance& operator=(const ::android::text::style::UpdateAppearance& x) {obj = x.obj; return *this;}
    ::android::text::style::UpdateAppearance& operator=(::android::text::style::UpdateAppearance&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


