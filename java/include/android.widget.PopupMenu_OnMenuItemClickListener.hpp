#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class MenuItem; } }

namespace android {
namespace widget {
class PopupMenu_OnMenuItemClickListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PopupMenu_OnMenuItemClickListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PopupMenu_OnMenuItemClickListener(const ::android::widget::PopupMenu_OnMenuItemClickListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PopupMenu_OnMenuItemClickListener(::android::widget::PopupMenu_OnMenuItemClickListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::PopupMenu_OnMenuItemClickListener& operator=(const ::android::widget::PopupMenu_OnMenuItemClickListener& x) {obj = x.obj; return *this;}
    ::android::widget::PopupMenu_OnMenuItemClickListener& operator=(::android::widget::PopupMenu_OnMenuItemClickListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onMenuItemClick(const ::android::view::MenuItem&) const;

};
}
}


