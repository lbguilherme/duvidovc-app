#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.PopupMenuCompat_BasePopupMenuImpl.hpp"

namespace android { namespace view { class View_OnTouchListener; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class PopupMenuCompat_KitKatPopupMenuImpl : public virtual ::java::lang::Object,
                                            public virtual ::android::support::v4::widget::PopupMenuCompat_BasePopupMenuImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PopupMenuCompat_KitKatPopupMenuImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::PopupMenuCompat_BasePopupMenuImpl(_obj), ::android::support::v4::widget::PopupMenuCompat_PopupMenuImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PopupMenuCompat_KitKatPopupMenuImpl(const ::android::support::v4::widget::PopupMenuCompat_KitKatPopupMenuImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::PopupMenuCompat_BasePopupMenuImpl((jobject)0), ::android::support::v4::widget::PopupMenuCompat_PopupMenuImpl((jobject)0) {obj = x.obj;}
    PopupMenuCompat_KitKatPopupMenuImpl(::android::support::v4::widget::PopupMenuCompat_KitKatPopupMenuImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::PopupMenuCompat_BasePopupMenuImpl((jobject)0), ::android::support::v4::widget::PopupMenuCompat_PopupMenuImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::PopupMenuCompat_KitKatPopupMenuImpl& operator=(const ::android::support::v4::widget::PopupMenuCompat_KitKatPopupMenuImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::PopupMenuCompat_KitKatPopupMenuImpl& operator=(::android::support::v4::widget::PopupMenuCompat_KitKatPopupMenuImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View_OnTouchListener getDragToOpenListener(const ::java::lang::Object&) const ;

};
}
}
}
}

