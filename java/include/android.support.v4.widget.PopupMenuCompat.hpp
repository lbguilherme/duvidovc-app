#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View_OnTouchListener; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class PopupMenuCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PopupMenuCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PopupMenuCompat(const ::android::support::v4::widget::PopupMenuCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PopupMenuCompat(::android::support::v4::widget::PopupMenuCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::PopupMenuCompat& operator=(const ::android::support::v4::widget::PopupMenuCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::PopupMenuCompat& operator=(::android::support::v4::widget::PopupMenuCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::view::View_OnTouchListener getDragToOpenListener(const ::java::lang::Object&);

};
}
}
}
}

#include "android.support.v4.widget.PopupMenuCompat_BasePopupMenuImpl.hpp"
#include "android.support.v4.widget.PopupMenuCompat_KitKatPopupMenuImpl.hpp"
#include "android.support.v4.widget.PopupMenuCompat_PopupMenuImpl.hpp"

