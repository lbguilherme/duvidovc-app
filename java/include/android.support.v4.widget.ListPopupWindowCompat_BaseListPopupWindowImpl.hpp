#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.ListPopupWindowCompat_ListPopupWindowImpl.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class View_OnTouchListener; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ListPopupWindowCompat_BaseListPopupWindowImpl : public virtual ::java::lang::Object,
                                                      public virtual ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListPopupWindowCompat_BaseListPopupWindowImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListPopupWindowCompat_BaseListPopupWindowImpl(const ::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl((jobject)0) {obj = x.obj;}
    ListPopupWindowCompat_BaseListPopupWindowImpl(::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl& operator=(const ::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl& operator=(::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View_OnTouchListener createDragToOpenListener(const ::java::lang::Object&, const ::android::view::View&) const ;

};
}
}
}
}


