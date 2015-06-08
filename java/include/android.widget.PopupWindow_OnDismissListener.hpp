#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class PopupWindow_OnDismissListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PopupWindow_OnDismissListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PopupWindow_OnDismissListener(const ::android::widget::PopupWindow_OnDismissListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PopupWindow_OnDismissListener(::android::widget::PopupWindow_OnDismissListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::PopupWindow_OnDismissListener& operator=(const ::android::widget::PopupWindow_OnDismissListener& x) {obj = x.obj; return *this;}
    ::android::widget::PopupWindow_OnDismissListener& operator=(::android::widget::PopupWindow_OnDismissListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onDismiss() const;

};
}
}


