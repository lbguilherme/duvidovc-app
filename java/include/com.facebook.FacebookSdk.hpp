#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class Context; } }
namespace com { namespace facebook { class LoggingBehavior; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Set; } }
namespace java { namespace util { namespace concurrent { class Executor; } } }

namespace com {
namespace facebook {
class FacebookSdk : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookSdk(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookSdk(const ::com::facebook::FacebookSdk& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FacebookSdk(::com::facebook::FacebookSdk&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookSdk& operator=(const ::com::facebook::FacebookSdk& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookSdk& operator=(::com::facebook::FacebookSdk&& x) {obj = std::move(x.obj); return *this;}
    
    FacebookSdk();
    static void sdkInitialize(const ::android::content::Context&, int32_t);
    static void sdkInitialize(const ::android::content::Context&);
    static bool isInitialized();
    static ::java::util::Set getLoggingBehaviors();
    static void addLoggingBehavior(const ::com::facebook::LoggingBehavior&);
    static void removeLoggingBehavior(const ::com::facebook::LoggingBehavior&);
    static void clearLoggingBehaviors();
    static bool isLoggingBehaviorEnabled(const ::com::facebook::LoggingBehavior&);
    static bool isDebugEnabled();
    static void setIsDebugEnabled(bool);
    static bool isLegacyTokenUpgradeSupported();
    static void setLegacyTokenUpgradeSupported(bool);
    static ::java::util::concurrent::Executor getExecutor();
    static void setExecutor(const ::java::util::concurrent::Executor&);
    static ::java::lang::String getFacebookDomain();
    static void setFacebookDomain(const ::java::lang::String&);
    static ::android::content::Context getApplicationContext();
    static void publishInstallAsync(const ::android::content::Context&, const ::java::lang::String&);
    static ::java::lang::String getAttributionId(const ::android::content::ContentResolver&);
    static ::java::lang::String getSdkVersion();
    static bool getLimitEventAndDataUsage(const ::android::content::Context&);
    static void setLimitEventAndDataUsage(const ::android::content::Context&, bool);
    static int64_t getOnProgressThreshold();
    static void setOnProgressThreshold(int64_t);
    static ::java::lang::String getApplicationSignature(const ::android::content::Context&);
    static ::java::lang::String getApplicationId();
    static void setApplicationId(const ::java::lang::String&);
    static ::java::lang::String getApplicationName();
    static void setApplicationName(const ::java::lang::String&);
    static ::java::lang::String getClientToken();
    static void setClientToken(const ::java::lang::String&);
    static ::java::io::File getCacheDir();
    static void setCacheDir(const ::java::io::File&);
    static int32_t getCallbackRequestCodeOffset();
    static bool isFacebookRequestCode(int32_t);

};
}
}


