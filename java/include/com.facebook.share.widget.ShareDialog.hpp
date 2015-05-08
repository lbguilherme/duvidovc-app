#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.internal.FacebookDialogBase.hpp"
#include "com.facebook.share.Sharer.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareContent; } } } }
namespace com { namespace facebook { namespace share { namespace widget { class ShareDialog_Mode; } } } }
namespace java { namespace lang { class Class; } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class ShareDialog : public virtual ::java::lang::Object,
                    public virtual ::com::facebook::internal::FacebookDialogBase,
                    public virtual ::com::facebook::share::Sharer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareDialog(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::FacebookDialog(_obj), ::com::facebook::internal::FacebookDialogBase(_obj), ::com::facebook::share::Sharer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareDialog(const ::com::facebook::share::widget::ShareDialog& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0), ::com::facebook::share::Sharer((jobject)0) {obj = x.obj;}
    ShareDialog(::com::facebook::share::widget::ShareDialog&& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0), ::com::facebook::share::Sharer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::ShareDialog& operator=(const ::com::facebook::share::widget::ShareDialog& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::ShareDialog& operator=(::com::facebook::share::widget::ShareDialog&& x) {obj = std::move(x.obj); return *this;}
    
    static void show(const ::android::app::Activity&, const ::com::facebook::share::model::ShareContent&);
    static void show(const ::android::support::v4::app::Fragment&, const ::com::facebook::share::model::ShareContent&);
    static bool canShow(const ::java::lang::Class&);
    ShareDialog(const ::android::app::Activity&);
    ShareDialog(const ::android::support::v4::app::Fragment&);
    bool getShouldFailOnDataError() const ;
    void setShouldFailOnDataError(bool) const ;
    bool canShow(const ::com::facebook::share::model::ShareContent&, const ::com::facebook::share::widget::ShareDialog_Mode&) const ;
    void show(const ::com::facebook::share::model::ShareContent&, const ::com::facebook::share::widget::ShareDialog_Mode&) const ;

};
}
}
}
}

#include "com.facebook.share.widget.ShareDialog_FeedHandler.hpp"
#include "com.facebook.share.widget.ShareDialog_Mode.hpp"
#include "com.facebook.share.widget.ShareDialog_NativeHandler.hpp"
#include "com.facebook.share.widget.ShareDialog_WebShareHandler.hpp"

