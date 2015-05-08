#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace widget { class PopupWindow; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class PopupWindowCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PopupWindowCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PopupWindowCompat(const ::android::support::v4::widget::PopupWindowCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PopupWindowCompat(::android::support::v4::widget::PopupWindowCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::PopupWindowCompat& operator=(const ::android::support::v4::widget::PopupWindowCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::PopupWindowCompat& operator=(::android::support::v4::widget::PopupWindowCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static void showAsDropDown(const ::android::widget::PopupWindow&, const ::android::view::View&, int32_t, int32_t, int32_t);

};
}
}
}
}

#include "android.support.v4.widget.PopupWindowCompat_BasePopupWindowImpl.hpp"
#include "android.support.v4.widget.PopupWindowCompat_KitKatPopupWindowImpl.hpp"
#include "android.support.v4.widget.PopupWindowCompat_PopupWindowImpl.hpp"

