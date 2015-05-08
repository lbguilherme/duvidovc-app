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
class ListPopupWindowCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListPopupWindowCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListPopupWindowCompat(const ::android::support::v4::widget::ListPopupWindowCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ListPopupWindowCompat(::android::support::v4::widget::ListPopupWindowCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ListPopupWindowCompat& operator=(const ::android::support::v4::widget::ListPopupWindowCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ListPopupWindowCompat& operator=(::android::support::v4::widget::ListPopupWindowCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::view::View_OnTouchListener createDragToOpenListener(const ::java::lang::Object&, const ::android::view::View&);

};
}
}
}
}

#include "android.support.v4.widget.ListPopupWindowCompat_BaseListPopupWindowImpl.hpp"
#include "android.support.v4.widget.ListPopupWindowCompat_KitKatListPopupWindowImpl.hpp"
#include "android.support.v4.widget.ListPopupWindowCompat_ListPopupWindowImpl.hpp"

