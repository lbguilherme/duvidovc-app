#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class View_OnTouchListener; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ListPopupWindowCompat_ListPopupWindowImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListPopupWindowCompat_ListPopupWindowImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListPopupWindowCompat_ListPopupWindowImpl(const ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ListPopupWindowCompat_ListPopupWindowImpl(::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl& operator=(const ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl& operator=(::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View_OnTouchListener createDragToOpenListener(const ::java::lang::Object&, const ::android::view::View&) const ;

};
}
}
}
}

