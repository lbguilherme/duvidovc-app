#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View_OnClickListener.hpp"

namespace android { namespace view { class View; } }

namespace com {
namespace facebook {
namespace login {
namespace widget {
class LoginButton_LoginClickListener : public virtual ::java::lang::Object,
                                       public virtual ::android::view::View_OnClickListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginButton_LoginClickListener(jobject _obj) : ::java::lang::Object(_obj), ::android::view::View_OnClickListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginButton_LoginClickListener(const ::com::facebook::login::widget::LoginButton_LoginClickListener& x) : ::java::lang::Object((jobject)0), ::android::view::View_OnClickListener((jobject)0) {obj = x.obj;}
    LoginButton_LoginClickListener(::com::facebook::login::widget::LoginButton_LoginClickListener&& x) : ::java::lang::Object((jobject)0), ::android::view::View_OnClickListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::widget::LoginButton_LoginClickListener& operator=(const ::com::facebook::login::widget::LoginButton_LoginClickListener& x) {obj = x.obj; return *this;}
    ::com::facebook::login::widget::LoginButton_LoginClickListener& operator=(::com::facebook::login::widget::LoginButton_LoginClickListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onClick(const ::android::view::View&) const;

};
}
}
}
}


