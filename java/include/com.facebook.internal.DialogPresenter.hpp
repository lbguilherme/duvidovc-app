#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Context; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace com { namespace facebook { class FacebookException; } }
namespace com { namespace facebook { namespace internal { class AppCall; } } }
namespace com { namespace facebook { namespace internal { class DialogFeature; } } }
namespace com { namespace facebook { namespace internal { class DialogPresenter_ParameterProvider; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class DialogPresenter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialogPresenter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialogPresenter(const ::com::facebook::internal::DialogPresenter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DialogPresenter(::com::facebook::internal::DialogPresenter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::DialogPresenter& operator=(const ::com::facebook::internal::DialogPresenter& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::DialogPresenter& operator=(::com::facebook::internal::DialogPresenter&& x) {obj = std::move(x.obj); return *this;}
    
    DialogPresenter();
    static void setupAppCallForCannotShowError(const ::com::facebook::internal::AppCall&);
    static void setupAppCallForValidationError(const ::com::facebook::internal::AppCall&, const ::com::facebook::FacebookException&);
    static void present(const ::com::facebook::internal::AppCall&, const ::android::app::Activity&);
    static void present(const ::com::facebook::internal::AppCall&, const ::android::support::v4::app::Fragment&);
    static bool canPresentNativeDialogWithFeature(const ::com::facebook::internal::DialogFeature&);
    static bool canPresentWebFallbackDialogWithFeature(const ::com::facebook::internal::DialogFeature&);
    static void setupAppCallForErrorResult(const ::com::facebook::internal::AppCall&, const ::com::facebook::FacebookException&);
    static void setupAppCallForWebDialog(const ::com::facebook::internal::AppCall&, const ::java::lang::String&, const ::android::os::Bundle&);
    static void setupAppCallForWebFallbackDialog(const ::com::facebook::internal::AppCall&, const ::android::os::Bundle&, const ::com::facebook::internal::DialogFeature&);
    static void setupAppCallForNativeDialog(const ::com::facebook::internal::AppCall&, const ::com::facebook::internal::DialogPresenter_ParameterProvider&, const ::com::facebook::internal::DialogFeature&);
    static int32_t getProtocolVersionForNativeDialog(const ::com::facebook::internal::DialogFeature&);
    static void logDialogActivity(const ::android::content::Context&, const ::java::lang::String&, const ::java::lang::String&);

};
}
}
}

#include "com.facebook.internal.DialogPresenter_ParameterProvider.hpp"

