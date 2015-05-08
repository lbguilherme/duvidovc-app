#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.internal.FacebookDialogBase_ModeHandler.hpp"

namespace com { namespace facebook { namespace internal { class AppCall; } } }
namespace com { namespace facebook { namespace share { namespace model { class AppInviteContent; } } } }
namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class AppInviteDialog_NativeHandler : public virtual ::java::lang::Object,
                                      public virtual ::com::facebook::internal::FacebookDialogBase_ModeHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppInviteDialog_NativeHandler(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::internal::FacebookDialogBase_ModeHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppInviteDialog_NativeHandler(const ::com::facebook::share::widget::AppInviteDialog_NativeHandler& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::FacebookDialogBase_ModeHandler((jobject)0) {obj = x.obj;}
    AppInviteDialog_NativeHandler(::com::facebook::share::widget::AppInviteDialog_NativeHandler&& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::FacebookDialogBase_ModeHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::AppInviteDialog_NativeHandler& operator=(const ::com::facebook::share::widget::AppInviteDialog_NativeHandler& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::AppInviteDialog_NativeHandler& operator=(::com::facebook::share::widget::AppInviteDialog_NativeHandler&& x) {obj = std::move(x.obj); return *this;}
    
    bool canShow(const ::com::facebook::share::model::AppInviteContent&) const ;
    ::com::facebook::internal::AppCall createAppCall(const ::com::facebook::share::model::AppInviteContent&) const ;
    ::com::facebook::internal::AppCall createAppCall(const ::java::lang::Object&) const ;
    bool canShow(const ::java::lang::Object&) const ;

};
}
}
}
}


