#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.PopupWindowCompat_PopupWindowImpl.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace widget { class PopupWindow; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class PopupWindowCompat_BasePopupWindowImpl : public virtual ::java::lang::Object,
                                              public virtual ::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PopupWindowCompat_BasePopupWindowImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PopupWindowCompat_BasePopupWindowImpl(const ::android::support::v4::widget::PopupWindowCompat_BasePopupWindowImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl((jobject)0) {obj = x.obj;}
    PopupWindowCompat_BasePopupWindowImpl(::android::support::v4::widget::PopupWindowCompat_BasePopupWindowImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::PopupWindowCompat_BasePopupWindowImpl& operator=(const ::android::support::v4::widget::PopupWindowCompat_BasePopupWindowImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::PopupWindowCompat_BasePopupWindowImpl& operator=(::android::support::v4::widget::PopupWindowCompat_BasePopupWindowImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void showAsDropDown(const ::android::widget::PopupWindow&, const ::android::view::View&, int32_t, int32_t, int32_t) const ;

};
}
}
}
}


