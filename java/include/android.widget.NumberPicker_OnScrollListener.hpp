#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class NumberPicker; } }

namespace android {
namespace widget {
class NumberPicker_OnScrollListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NumberPicker_OnScrollListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NumberPicker_OnScrollListener(const ::android::widget::NumberPicker_OnScrollListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NumberPicker_OnScrollListener(::android::widget::NumberPicker_OnScrollListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::NumberPicker_OnScrollListener& operator=(const ::android::widget::NumberPicker_OnScrollListener& x) {obj = x.obj; return *this;}
    ::android::widget::NumberPicker_OnScrollListener& operator=(::android::widget::NumberPicker_OnScrollListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onScrollStateChange(const ::android::widget::NumberPicker&, int32_t) const ;

};
}
}


