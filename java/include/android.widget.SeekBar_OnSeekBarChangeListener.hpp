#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class SeekBar; } }

namespace android {
namespace widget {
class SeekBar_OnSeekBarChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SeekBar_OnSeekBarChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SeekBar_OnSeekBarChangeListener(const ::android::widget::SeekBar_OnSeekBarChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SeekBar_OnSeekBarChangeListener(::android::widget::SeekBar_OnSeekBarChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SeekBar_OnSeekBarChangeListener& operator=(const ::android::widget::SeekBar_OnSeekBarChangeListener& x) {obj = x.obj; return *this;}
    ::android::widget::SeekBar_OnSeekBarChangeListener& operator=(::android::widget::SeekBar_OnSeekBarChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onProgressChanged(const ::android::widget::SeekBar&, int32_t, bool) const ;
    void onStartTrackingTouch(const ::android::widget::SeekBar&) const ;
    void onStopTrackingTouch(const ::android::widget::SeekBar&) const ;

};
}
}


