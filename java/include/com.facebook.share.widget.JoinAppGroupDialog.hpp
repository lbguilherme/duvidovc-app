#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.internal.FacebookDialogBase.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class JoinAppGroupDialog : public virtual ::java::lang::Object,
                           public virtual ::com::facebook::internal::FacebookDialogBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JoinAppGroupDialog(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::FacebookDialog(_obj), ::com::facebook::internal::FacebookDialogBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JoinAppGroupDialog(const ::com::facebook::share::widget::JoinAppGroupDialog& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {obj = x.obj;}
    JoinAppGroupDialog(::com::facebook::share::widget::JoinAppGroupDialog&& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::JoinAppGroupDialog& operator=(const ::com::facebook::share::widget::JoinAppGroupDialog& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::JoinAppGroupDialog& operator=(::com::facebook::share::widget::JoinAppGroupDialog&& x) {obj = std::move(x.obj); return *this;}
    
    static bool canShow();
    static void show(const ::android::app::Activity&, const ::java::lang::String&);
    static void show(const ::android::support::v4::app::Fragment&, const ::java::lang::String&);
    JoinAppGroupDialog(const ::android::app::Activity&);
    JoinAppGroupDialog(const ::android::support::v4::app::Fragment&);

};
}
}
}
}

#include "com.facebook.share.widget.JoinAppGroupDialog_Result.hpp"
#include "com.facebook.share.widget.JoinAppGroupDialog_WebHandler.hpp"

