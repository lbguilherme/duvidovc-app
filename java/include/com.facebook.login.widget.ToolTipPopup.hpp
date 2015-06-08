#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace com { namespace facebook { namespace login { namespace widget { class ToolTipPopup_Style; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace login {
namespace widget {
class ToolTipPopup : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ToolTipPopup(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ToolTipPopup(const ::com::facebook::login::widget::ToolTipPopup& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ToolTipPopup(::com::facebook::login::widget::ToolTipPopup&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::widget::ToolTipPopup& operator=(const ::com::facebook::login::widget::ToolTipPopup& x) {obj = x.obj; return *this;}
    ::com::facebook::login::widget::ToolTipPopup& operator=(::com::facebook::login::widget::ToolTipPopup&& x) {obj = std::move(x.obj); return *this;}
    
    ToolTipPopup(const ::java::lang::String&, const ::android::view::View&);
    void setStyle(const ::com::facebook::login::widget::ToolTipPopup_Style&) const;
    void show() const;
    void setNuxDisplayTime(int64_t) const;
    void dismiss() const;

};
}
}
}
}

#include "com.facebook.login.widget.ToolTipPopup_PopupContentView.hpp"
#include "com.facebook.login.widget.ToolTipPopup_Style.hpp"

