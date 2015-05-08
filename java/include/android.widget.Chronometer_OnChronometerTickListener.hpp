#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class Chronometer; } }

namespace android {
namespace widget {
class Chronometer_OnChronometerTickListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Chronometer_OnChronometerTickListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Chronometer_OnChronometerTickListener(const ::android::widget::Chronometer_OnChronometerTickListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Chronometer_OnChronometerTickListener(::android::widget::Chronometer_OnChronometerTickListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Chronometer_OnChronometerTickListener& operator=(const ::android::widget::Chronometer_OnChronometerTickListener& x) {obj = x.obj; return *this;}
    ::android::widget::Chronometer_OnChronometerTickListener& operator=(::android::widget::Chronometer_OnChronometerTickListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onChronometerTick(const ::android::widget::Chronometer&) const ;

};
}
}


