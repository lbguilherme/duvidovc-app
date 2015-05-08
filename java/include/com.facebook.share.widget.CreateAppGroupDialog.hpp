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
namespace com { namespace facebook { namespace share { namespace model { class AppGroupCreationContent; } } } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class CreateAppGroupDialog : public virtual ::java::lang::Object,
                             public virtual ::com::facebook::internal::FacebookDialogBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CreateAppGroupDialog(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::FacebookDialog(_obj), ::com::facebook::internal::FacebookDialogBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CreateAppGroupDialog(const ::com::facebook::share::widget::CreateAppGroupDialog& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {obj = x.obj;}
    CreateAppGroupDialog(::com::facebook::share::widget::CreateAppGroupDialog&& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::CreateAppGroupDialog& operator=(const ::com::facebook::share::widget::CreateAppGroupDialog& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::CreateAppGroupDialog& operator=(::com::facebook::share::widget::CreateAppGroupDialog&& x) {obj = std::move(x.obj); return *this;}
    
    static bool canShow();
    static void show(const ::android::app::Activity&, const ::com::facebook::share::model::AppGroupCreationContent&);
    static void show(const ::android::support::v4::app::Fragment&, const ::com::facebook::share::model::AppGroupCreationContent&);
    CreateAppGroupDialog(const ::android::app::Activity&);
    CreateAppGroupDialog(const ::android::support::v4::app::Fragment&);

};
}
}
}
}

#include "com.facebook.share.widget.CreateAppGroupDialog_Result.hpp"
#include "com.facebook.share.widget.CreateAppGroupDialog_WebHandler.hpp"

