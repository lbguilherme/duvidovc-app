#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { class AccessToken; } }
namespace com { namespace facebook { namespace internal { class AttributionIdentifiers; } } }
namespace com { namespace facebook { namespace internal { class Utility_DialogFeatureConfig; } } }
namespace com { namespace facebook { namespace internal { class Utility_FetchedAppSettings; } } }
namespace com { namespace facebook { namespace internal { class Utility_GraphMeRequestWithCacheCallback; } } }
namespace com { namespace facebook { namespace internal { class Utility_Mapper; } } }
namespace com { namespace facebook { namespace internal { class Utility_Predicate; } } }
namespace java { namespace io { class Closeable; } }
namespace java { namespace io { class File; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }
namespace java { namespace lang { namespace reflect { class Method; } } }
namespace java { namespace net { class URLConnection; } }
namespace java { namespace util { class ArrayList; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class HashSet; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Map; } }
namespace org { namespace json { class JSONArray; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
namespace internal {
class Utility : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Utility(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Utility(const ::com::facebook::internal::Utility& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Utility(::com::facebook::internal::Utility&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::Utility& operator=(const ::com::facebook::internal::Utility& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::Utility& operator=(::com::facebook::internal::Utility&& x) {obj = std::move(x.obj); return *this;}
    
    Utility();
    static std::vector< int32_t> intersectRanges(const std::vector< int32_t>&, const std::vector< int32_t>&);
    static bool isSubset(const ::java::util::Collection&, const ::java::util::Collection&);
    static bool isNullOrEmpty(const ::java::util::Collection&);
    static bool isNullOrEmpty(const ::java::lang::String&);
    static ::java::lang::String coerceValueIfNullOrEmpty(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::util::Collection unmodifiableCollection(const std::vector< ::java::lang::Object>&);
    static ::java::util::ArrayList arrayList(const std::vector< ::java::lang::Object>&);
    static ::java::util::HashSet hashSet(const std::vector< ::java::lang::Object>&);
    static ::java::lang::String md5hash(const ::java::lang::String&);
    static ::java::lang::String sha1hash(const ::java::lang::String&);
    static ::java::lang::String sha1hash(const std::vector< int8_t>&);
    static ::android::net::Uri buildUri(const ::java::lang::String&, const ::java::lang::String&, const ::android::os::Bundle&);
    static ::android::os::Bundle parseUrlQueryString(const ::java::lang::String&);
    static void putNonEmptyString(const ::android::os::Bundle&, const ::java::lang::String&, const ::java::lang::String&);
    static void putCommaSeparatedStringList(const ::android::os::Bundle&, const ::java::lang::String&, const ::java::util::ArrayList&);
    static void putUri(const ::android::os::Bundle&, const ::java::lang::String&, const ::android::net::Uri&);
    static bool putJSONValueInBundle(const ::android::os::Bundle&, const ::java::lang::String&, const ::java::lang::Object&);
    static void closeQuietly(const ::java::io::Closeable&);
    static void disconnectQuietly(const ::java::net::URLConnection&);
    static ::java::lang::String getMetadataApplicationId(const ::android::content::Context&);
    static ::java::lang::Object getStringPropertyAsJSON(const ::org::json::JSONObject&, const ::java::lang::String&, const ::java::lang::String&);
    static ::java::lang::String readStreamToString(const ::java::io::InputStream&);
    static int32_t copyAndCloseInputStream(const ::java::io::InputStream&, const ::java::io::OutputStream&);
    static bool stringsEqualOrEmpty(const ::java::lang::String&, const ::java::lang::String&);
    static void clearFacebookCookies(const ::android::content::Context&);
    static void logd(const ::java::lang::String&, const ::java::lang::Exception&);
    static void logd(const ::java::lang::String&, const ::java::lang::String&);
    static void logd(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    static bool areObjectsEqual(const ::java::lang::Object&, const ::java::lang::Object&);
    static bool hasSameId(const ::org::json::JSONObject&, const ::org::json::JSONObject&);
    static void loadAppSettingsAsync(const ::android::content::Context&, const ::java::lang::String&);
    static ::com::facebook::internal::Utility_FetchedAppSettings getAppSettingsWithoutQuery(const ::java::lang::String&);
    static ::com::facebook::internal::Utility_FetchedAppSettings queryAppSettings(const ::java::lang::String&, bool);
    static ::com::facebook::internal::Utility_DialogFeatureConfig getDialogFeatureConfig(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static ::java::lang::String safeGetStringFromResponse(const ::org::json::JSONObject&, const ::java::lang::String&);
    static ::org::json::JSONObject tryGetJSONObjectFromResponse(const ::org::json::JSONObject&, const ::java::lang::String&);
    static ::org::json::JSONArray tryGetJSONArrayFromResponse(const ::org::json::JSONObject&, const ::java::lang::String&);
    static void clearCaches(const ::android::content::Context&);
    static void deleteDirectory(const ::java::io::File&);
    static ::java::util::List asListNoNulls(const std::vector< ::java::lang::Object>&);
    static ::java::util::List jsonArrayToStringList(const ::org::json::JSONArray&);
    static void setAppEventAttributionParameters(const ::org::json::JSONObject&, const ::com::facebook::internal::AttributionIdentifiers&, const ::java::lang::String&, bool);
    static void setAppEventExtendedDeviceInfoParameters(const ::org::json::JSONObject&, const ::android::content::Context&);
    static ::java::lang::reflect::Method getMethodQuietly(const ::java::lang::Class&, const ::java::lang::String&, const std::vector< ::java::lang::Class>&);
    static ::java::lang::reflect::Method getMethodQuietly(const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::Class>&);
    static ::java::lang::Object invokeMethodQuietly(const ::java::lang::Object&, const ::java::lang::reflect::Method&, const std::vector< ::java::lang::Object>&);
    static ::java::lang::String getActivityName(const ::android::content::Context&);
    static ::java::util::List filter(const ::java::util::List&, const ::com::facebook::internal::Utility_Predicate&);
    static ::java::util::List map(const ::java::util::List&, const ::com::facebook::internal::Utility_Mapper&);
    static ::java::lang::String getUriString(const ::android::net::Uri&);
    static bool isWebUri(const ::android::net::Uri&);
    static bool isContentUri(const ::android::net::Uri&);
    static bool isFileUri(const ::android::net::Uri&);
    static ::java::util::Date getBundleLongAsDate(const ::android::os::Bundle&, const ::java::lang::String&, const ::java::util::Date&);
    static void writeStringMapToParcel(const ::android::os::Parcel&, const ::java::util::Map&);
    static ::java::util::Map readStringMapFromParcel(const ::android::os::Parcel&);
    static bool isCurrentAccessToken(const ::com::facebook::AccessToken&);
    static void getGraphMeRequestWithCacheAsync(const ::java::lang::String&, const ::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback&);
    static ::org::json::JSONObject awaitGetGraphMeRequestWithCache(const ::java::lang::String&);

};
}
}
}

#include "com.facebook.internal.Utility_DialogFeatureConfig.hpp"
#include "com.facebook.internal.Utility_FetchedAppSettings.hpp"
#include "com.facebook.internal.Utility_GraphMeRequestWithCacheCallback.hpp"
#include "com.facebook.internal.Utility_Mapper.hpp"
#include "com.facebook.internal.Utility_Predicate.hpp"

