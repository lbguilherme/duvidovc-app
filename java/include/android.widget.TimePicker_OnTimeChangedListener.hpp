#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class TimePicker; } }

namespace android {
namespace widget {
class TimePicker_OnTimeChangedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimePicker_OnTimeChangedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimePicker_OnTimeChangedListener(const ::android::widget::TimePicker_OnTimeChangedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TimePicker_OnTimeChangedListener(::android::widget::TimePicker_OnTimeChangedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TimePicker_OnTimeChangedListener& operator=(const ::android::widget::TimePicker_OnTimeChangedListener& x) {obj = x.obj; return *this;}
    ::android::widget::TimePicker_OnTimeChangedListener& operator=(::android::widget::TimePicker_OnTimeChangedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onTimeChanged(const ::android::widget::TimePicker&, int32_t, int32_t) const ;

};
}
}


