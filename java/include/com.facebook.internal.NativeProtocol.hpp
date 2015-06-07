#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace com { namespace facebook { class FacebookException; } }
namespace com { namespace facebook { namespace login { class DefaultAudience; } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class TreeSet; } }
namespace java { namespace util { class UUID; } }

namespace com {
namespace facebook {
namespace internal {
class NativeProtocol : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NativeProtocol(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NativeProtocol(const ::com::facebook::internal::NativeProtocol& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NativeProtocol(::com::facebook::internal::NativeProtocol&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::NativeProtocol& operator=(const ::com::facebook::internal::NativeProtocol& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::NativeProtocol& operator=(::com::facebook::internal::NativeProtocol&& x) {obj = std::move(x.obj); return *this;}
    
    NativeProtocol();
    static ::android::content::Intent createProxyAuthIntent(const ::android::content::Context&, const ::java::lang::String&, const ::java::util::Collection&, const ::java::lang::String&, bool, bool, const ::com::facebook::login::DefaultAudience&);
    static ::android::content::Intent createTokenRefreshIntent(const ::android::content::Context&);
    static int32_t getLatestKnownVersion();
    static bool isVersionCompatibleWithBucketedIntent(int32_t);
    static ::android::content::Intent createPlatformActivityIntent(const ::android::content::Context&, const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::android::os::Bundle&);
    static void setupProtocolRequestIntent(const ::android::content::Intent&, const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::android::os::Bundle&);
    static ::android::content::Intent createProtocolResultIntent(const ::android::content::Intent&, const ::android::os::Bundle&, const ::com::facebook::FacebookException&);
    static ::android::content::Intent createPlatformServiceIntent(const ::android::content::Context&);
    static int32_t getProtocolVersionFromIntent(const ::android::content::Intent&);
    static ::java::util::UUID getCallIdFromIntent(const ::android::content::Intent&);
    static ::android::os::Bundle getBridgeArgumentsFromIntent(const ::android::content::Intent&);
    static ::android::os::Bundle getMethodArgumentsFromIntent(const ::android::content::Intent&);
    static ::android::os::Bundle getSuccessResultsFromIntent(const ::android::content::Intent&);
    static bool isErrorResult(const ::android::content::Intent&);
    static ::android::os::Bundle getErrorDataFromResultIntent(const ::android::content::Intent&);
    static ::com::facebook::FacebookException getExceptionFromErrorData(const ::android::os::Bundle&);
    static ::android::os::Bundle createBundleForException(const ::com::facebook::FacebookException&);
    static int32_t getLatestAvailableProtocolVersionForService(int32_t);
    static int32_t getLatestAvailableProtocolVersionForAction(const ::java::lang::String&, const std::vector< int32_t>&);
    static void updateAllAvailableProtocolVersionsAsync();
    static int32_t computeLatestAvailableVersionFromVersionSpec(const ::java::util::TreeSet&, int32_t, const std::vector< int32_t>&);

};
}
}
}

#include "com.facebook.internal.NativeProtocol_KatanaAppInfo.hpp"
#include "com.facebook.internal.NativeProtocol_MessengerAppInfo.hpp"
#include "com.facebook.internal.NativeProtocol_NativeAppInfo.hpp"
#include "com.facebook.internal.NativeProtocol_WakizashiAppInfo.hpp"

