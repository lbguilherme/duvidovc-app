#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class Bundle; } }
namespace com { namespace facebook { class AccessToken; } }
namespace com { namespace facebook { namespace appevents { class AppEventsLogger; } } }
namespace com { namespace facebook { namespace appevents { class AppEventsLogger_FlushBehavior; } } }
namespace java { namespace lang { class Double; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigDecimal; } }
namespace java { namespace util { class Currency; } }

namespace com {
namespace facebook {
namespace appevents {
class AppEventsLogger : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppEventsLogger(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppEventsLogger(const ::com::facebook::appevents::AppEventsLogger& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppEventsLogger(::com::facebook::appevents::AppEventsLogger&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::appevents::AppEventsLogger& operator=(const ::com::facebook::appevents::AppEventsLogger& x) {obj = x.obj; return *this;}
    ::com::facebook::appevents::AppEventsLogger& operator=(::com::facebook::appevents::AppEventsLogger&& x) {obj = std::move(x.obj); return *this;}
    
    static void activateApp(const ::android::content::Context&);
    static void activateApp(const ::android::content::Context&, const ::java::lang::String&);
    static void deactivateApp(const ::android::content::Context&);
    static void deactivateApp(const ::android::content::Context&, const ::java::lang::String&);
    static ::com::facebook::appevents::AppEventsLogger newLogger(const ::android::content::Context&);
    static ::com::facebook::appevents::AppEventsLogger newLogger(const ::android::content::Context&, const ::com::facebook::AccessToken&);
    static ::com::facebook::appevents::AppEventsLogger newLogger(const ::android::content::Context&, const ::java::lang::String&, const ::com::facebook::AccessToken&);
    static ::com::facebook::appevents::AppEventsLogger newLogger(const ::android::content::Context&, const ::java::lang::String&);
    static ::com::facebook::appevents::AppEventsLogger_FlushBehavior getFlushBehavior();
    static void setFlushBehavior(const ::com::facebook::appevents::AppEventsLogger_FlushBehavior&);
    void logEvent(const ::java::lang::String&) const;
    void logEvent(const ::java::lang::String&, double) const;
    void logEvent(const ::java::lang::String&, const ::android::os::Bundle&) const;
    void logEvent(const ::java::lang::String&, double, const ::android::os::Bundle&) const;
    void logPurchase(const ::java::math::BigDecimal&, const ::java::util::Currency&) const;
    void logPurchase(const ::java::math::BigDecimal&, const ::java::util::Currency&, const ::android::os::Bundle&) const;
    void flush() const;
    static void onContextStop();
    bool isValidForAccessToken(const ::com::facebook::AccessToken&) const;
    void logSdkEvent(const ::java::lang::String&, const ::java::lang::Double&, const ::android::os::Bundle&) const;
    ::java::lang::String getApplicationId() const;
    static ::java::lang::String getAnonymousAppDeviceGUID(const ::android::content::Context&);

};
}
}
}

#include "com.facebook.appevents.AppEventsLogger_AccessTokenAppIdPair.hpp"
#include "com.facebook.appevents.AppEventsLogger_AppEvent.hpp"
#include "com.facebook.appevents.AppEventsLogger_FlushBehavior.hpp"
#include "com.facebook.appevents.AppEventsLogger_FlushReason.hpp"
#include "com.facebook.appevents.AppEventsLogger_FlushResult.hpp"
#include "com.facebook.appevents.AppEventsLogger_FlushStatistics.hpp"
#include "com.facebook.appevents.AppEventsLogger_PersistedAppSessionInfo.hpp"
#include "com.facebook.appevents.AppEventsLogger_PersistedEvents.hpp"
#include "com.facebook.appevents.AppEventsLogger_SessionEventsState.hpp"
#include "com.facebook.appevents.AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1.hpp"
#include "com.facebook.appevents.AppEventsLogger_AppEvent_SerializationProxyV1.hpp"

