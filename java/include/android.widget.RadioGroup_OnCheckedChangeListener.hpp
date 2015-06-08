#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class RadioGroup; } }

namespace android {
namespace widget {
class RadioGroup_OnCheckedChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RadioGroup_OnCheckedChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RadioGroup_OnCheckedChangeListener(const ::android::widget::RadioGroup_OnCheckedChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RadioGroup_OnCheckedChangeListener(::android::widget::RadioGroup_OnCheckedChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RadioGroup_OnCheckedChangeListener& operator=(const ::android::widget::RadioGroup_OnCheckedChangeListener& x) {obj = x.obj; return *this;}
    ::android::widget::RadioGroup_OnCheckedChangeListener& operator=(::android::widget::RadioGroup_OnCheckedChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onCheckedChanged(const ::android::widget::RadioGroup&, int32_t) const;

};
}
}


