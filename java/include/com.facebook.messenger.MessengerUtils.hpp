#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace com { namespace facebook { namespace messenger { class MessengerThreadParams; } } }
namespace com { namespace facebook { namespace messenger { class ShareToMessengerParams; } } }

namespace com {
namespace facebook {
namespace messenger {
class MessengerUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MessengerUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MessengerUtils(const ::com::facebook::messenger::MessengerUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MessengerUtils(::com::facebook::messenger::MessengerUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::messenger::MessengerUtils& operator=(const ::com::facebook::messenger::MessengerUtils& x) {obj = x.obj; return *this;}
    ::com::facebook::messenger::MessengerUtils& operator=(::com::facebook::messenger::MessengerUtils&& x) {obj = std::move(x.obj); return *this;}
    
    MessengerUtils();
    static void shareToMessenger(const ::android::app::Activity&, int32_t, const ::com::facebook::messenger::ShareToMessengerParams&);
    static ::com::facebook::messenger::MessengerThreadParams getMessengerThreadParamsForIntent(const ::android::content::Intent&);
    static void finishShareToMessenger(const ::android::app::Activity&, const ::com::facebook::messenger::ShareToMessengerParams&);
    static bool hasMessengerInstalled(const ::android::content::Context&);
    static void openMessengerInPlayStore(const ::android::content::Context&);

};
}
}
}


