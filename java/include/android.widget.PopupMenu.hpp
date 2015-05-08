#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuInflater; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class PopupMenu_OnDismissListener; } }
namespace android { namespace widget { class PopupMenu_OnMenuItemClickListener; } }

namespace android {
namespace widget {
class PopupMenu : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PopupMenu(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PopupMenu(const ::android::widget::PopupMenu& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PopupMenu(::android::widget::PopupMenu&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::PopupMenu& operator=(const ::android::widget::PopupMenu& x) {obj = x.obj; return *this;}
    ::android::widget::PopupMenu& operator=(::android::widget::PopupMenu&& x) {obj = std::move(x.obj); return *this;}
    
    PopupMenu(const ::android::content::Context&, const ::android::view::View&);
    ::android::view::Menu getMenu() const ;
    ::android::view::MenuInflater getMenuInflater() const ;
    void inflate(int32_t) const ;
    void show() const ;
    void dismiss() const ;
    void setOnMenuItemClickListener(const ::android::widget::PopupMenu_OnMenuItemClickListener&) const ;
    void setOnDismissListener(const ::android::widget::PopupMenu_OnDismissListener&) const ;

};
}
}

#include "android.widget.PopupMenu_OnDismissListener.hpp"
#include "android.widget.PopupMenu_OnMenuItemClickListener.hpp"

