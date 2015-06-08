#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class PopupMenu; } }

namespace android {
namespace widget {
class PopupMenu_OnDismissListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PopupMenu_OnDismissListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PopupMenu_OnDismissListener(const ::android::widget::PopupMenu_OnDismissListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PopupMenu_OnDismissListener(::android::widget::PopupMenu_OnDismissListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::PopupMenu_OnDismissListener& operator=(const ::android::widget::PopupMenu_OnDismissListener& x) {obj = x.obj; return *this;}
    ::android::widget::PopupMenu_OnDismissListener& operator=(::android::widget::PopupMenu_OnDismissListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onDismiss(const ::android::widget::PopupMenu&) const;

};
}
}


