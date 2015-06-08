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
class NumberPicker_OnValueChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NumberPicker_OnValueChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NumberPicker_OnValueChangeListener(const ::android::widget::NumberPicker_OnValueChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NumberPicker_OnValueChangeListener(::android::widget::NumberPicker_OnValueChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::NumberPicker_OnValueChangeListener& operator=(const ::android::widget::NumberPicker_OnValueChangeListener& x) {obj = x.obj; return *this;}
    ::android::widget::NumberPicker_OnValueChangeListener& operator=(::android::widget::NumberPicker_OnValueChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onValueChange(const ::android::widget::NumberPicker&, int32_t, int32_t) const;

};
}
}


