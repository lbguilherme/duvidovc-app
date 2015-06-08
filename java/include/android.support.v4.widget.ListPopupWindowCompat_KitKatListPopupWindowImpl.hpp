#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.ListPopupWindowCompat_BaseListPopupWindowImpl.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class View_OnTouchListener; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ListPopupWindowCompat_KitKatListPopupWindowImpl : public virtual ::java::lang::Object,
                                                        public virtual ::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListPopupWindowCompat_KitKatListPopupWindowImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl(_obj), ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListPopupWindowCompat_KitKatListPopupWindowImpl(const ::android::support::v4::widget::ListPopupWindowCompat_KitKatListPopupWindowImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl((jobject)0), ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl((jobject)0) {obj = x.obj;}
    ListPopupWindowCompat_KitKatListPopupWindowImpl(::android::support::v4::widget::ListPopupWindowCompat_KitKatListPopupWindowImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl((jobject)0), ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ListPopupWindowCompat_KitKatListPopupWindowImpl& operator=(const ::android::support::v4::widget::ListPopupWindowCompat_KitKatListPopupWindowImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ListPopupWindowCompat_KitKatListPopupWindowImpl& operator=(::android::support::v4::widget::ListPopupWindowCompat_KitKatListPopupWindowImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View_OnTouchListener createDragToOpenListener(const ::java::lang::Object&, const ::android::view::View&) const;

};
}
}
}
}


