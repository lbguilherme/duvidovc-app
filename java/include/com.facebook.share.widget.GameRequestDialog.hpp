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
namespace com { namespace facebook { namespace share { namespace model { class GameRequestContent; } } } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class GameRequestDialog : public virtual ::java::lang::Object,
                          public virtual ::com::facebook::internal::FacebookDialogBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GameRequestDialog(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::FacebookDialog(_obj), ::com::facebook::internal::FacebookDialogBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GameRequestDialog(const ::com::facebook::share::widget::GameRequestDialog& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {obj = x.obj;}
    GameRequestDialog(::com::facebook::share::widget::GameRequestDialog&& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::GameRequestDialog& operator=(const ::com::facebook::share::widget::GameRequestDialog& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::GameRequestDialog& operator=(::com::facebook::share::widget::GameRequestDialog&& x) {obj = std::move(x.obj); return *this;}
    
    static bool canShow();
    static void show(const ::android::app::Activity&, const ::com::facebook::share::model::GameRequestContent&);
    static void show(const ::android::support::v4::app::Fragment&, const ::com::facebook::share::model::GameRequestContent&);
    GameRequestDialog(const ::android::app::Activity&);
    GameRequestDialog(const ::android::support::v4::app::Fragment&);

};
}
}
}
}

#include "com.facebook.share.widget.GameRequestDialog_Result.hpp"
#include "com.facebook.share.widget.GameRequestDialog_WebHandler.hpp"

