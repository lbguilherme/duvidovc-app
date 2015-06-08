#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class NumberPicker_Formatter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NumberPicker_Formatter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NumberPicker_Formatter(const ::android::widget::NumberPicker_Formatter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NumberPicker_Formatter(::android::widget::NumberPicker_Formatter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::NumberPicker_Formatter& operator=(const ::android::widget::NumberPicker_Formatter& x) {obj = x.obj; return *this;}
    ::android::widget::NumberPicker_Formatter& operator=(::android::widget::NumberPicker_Formatter&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String format(int32_t) const;

};
}
}


