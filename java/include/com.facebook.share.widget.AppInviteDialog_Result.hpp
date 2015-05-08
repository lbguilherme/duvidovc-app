#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class AppInviteDialog_Result : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppInviteDialog_Result(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppInviteDialog_Result(const ::com::facebook::share::widget::AppInviteDialog_Result& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppInviteDialog_Result(::com::facebook::share::widget::AppInviteDialog_Result&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::AppInviteDialog_Result& operator=(const ::com::facebook::share::widget::AppInviteDialog_Result& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::AppInviteDialog_Result& operator=(::com::facebook::share::widget::AppInviteDialog_Result&& x) {obj = std::move(x.obj); return *this;}
    
    AppInviteDialog_Result(const ::android::os::Bundle&);
    ::android::os::Bundle getData() const ;

};
}
}
}
}


