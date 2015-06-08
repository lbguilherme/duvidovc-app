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
class PopupWindowCompat_PopupWindowImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PopupWindowCompat_PopupWindowImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PopupWindowCompat_PopupWindowImpl(const ::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PopupWindowCompat_PopupWindowImpl(::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl& operator=(const ::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl& operator=(::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void showAsDropDown(const ::android::widget::PopupWindow&, const ::android::view::View&, int32_t, int32_t, int32_t) const;

};
}
}
}
}


