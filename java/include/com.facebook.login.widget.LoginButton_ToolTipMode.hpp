#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { namespace login { namespace widget { class LoginButton_ToolTipMode; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace login {
namespace widget {
class LoginButton_ToolTipMode : public virtual ::java::lang::Object,
                                public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginButton_ToolTipMode(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginButton_ToolTipMode(const ::com::facebook::login::widget::LoginButton_ToolTipMode& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    LoginButton_ToolTipMode(::com::facebook::login::widget::LoginButton_ToolTipMode&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::widget::LoginButton_ToolTipMode& operator=(const ::com::facebook::login::widget::LoginButton_ToolTipMode& x) {obj = x.obj; return *this;}
    ::com::facebook::login::widget::LoginButton_ToolTipMode& operator=(::com::facebook::login::widget::LoginButton_ToolTipMode&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::login::widget::LoginButton_ToolTipMode> values();
    static ::com::facebook::login::widget::LoginButton_ToolTipMode valueOf(const ::java::lang::String&);
    static ::com::facebook::login::widget::LoginButton_ToolTipMode fromInt(int32_t);
    ::java::lang::String toString() const ;
    int32_t getValue() const ;

};
}
}
}
}


