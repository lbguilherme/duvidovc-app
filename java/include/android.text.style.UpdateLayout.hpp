#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.UpdateAppearance.hpp"


namespace android {
namespace text {
namespace style {
class UpdateLayout : public virtual ::java::lang::Object,
                     public virtual ::android::text::style::UpdateAppearance {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UpdateLayout(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::UpdateAppearance(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UpdateLayout(const ::android::text::style::UpdateLayout& x) : ::java::lang::Object((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj;}
    UpdateLayout(::android::text::style::UpdateLayout&& x) : ::java::lang::Object((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::UpdateLayout& operator=(const ::android::text::style::UpdateLayout& x) {obj = x.obj; return *this;}
    ::android::text::style::UpdateLayout& operator=(::android::text::style::UpdateLayout&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


