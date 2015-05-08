#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace util { class Pair; } }
namespace com { namespace facebook { class AccessToken; } }
namespace com { namespace facebook { class CallbackManager; } }
namespace com { namespace facebook { class FacebookCallback; } }
namespace com { namespace facebook { class GraphRequest; } }
namespace com { namespace facebook { class GraphRequest_Callback; } }
namespace com { namespace facebook { class GraphResponse; } }
namespace com { namespace facebook { namespace share { namespace internal { class ResultProcessor; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphAction; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhotoContent; } } } }
namespace com { namespace facebook { namespace share { namespace widget { class LikeView_ObjectType; } } } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class UUID; } }
namespace org { namespace json { class JSONArray; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class ShareInternalUtility : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareInternalUtility(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareInternalUtility(const ::com::facebook::share::internal::ShareInternalUtility& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareInternalUtility(::com::facebook::share::internal::ShareInternalUtility&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::ShareInternalUtility& operator=(const ::com::facebook::share::internal::ShareInternalUtility& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::ShareInternalUtility& operator=(::com::facebook::share::internal::ShareInternalUtility&& x) {obj = std::move(x.obj); return *this;}
    
    static void invokeCallbackWithException(const ::com::facebook::FacebookCallback&, const ::java::lang::Exception&);
    static void invokeCallbackWithError(const ::com::facebook::FacebookCallback&, const ::java::lang::String&);
    static void invokeCallbackWithResults(const ::com::facebook::FacebookCallback&, const ::java::lang::String&, const ::com::facebook::GraphResponse&);
    static bool getNativeDialogDidComplete(const ::android::os::Bundle&);
    static ::java::lang::String getNativeDialogCompletionGesture(const ::android::os::Bundle&);
    static ::java::lang::String getShareDialogPostId(const ::android::os::Bundle&);
    static bool handleActivityResult(int32_t, int32_t, const ::android::content::Intent&, const ::com::facebook::share::internal::ResultProcessor&);
    static ::com::facebook::share::internal::ResultProcessor getShareResultProcessor(const ::com::facebook::FacebookCallback&);
    static void registerStaticShareCallback(int32_t);
    static void registerSharerCallback(int32_t, const ::com::facebook::CallbackManager&, const ::com::facebook::FacebookCallback&);
    static ::java::util::List getPhotoUrls(const ::com::facebook::share::model::SharePhotoContent&, const ::java::util::UUID&);
    static ::org::json::JSONObject toJSONObjectForCall(const ::java::util::UUID&, const ::com::facebook::share::model::ShareOpenGraphAction&);
    static ::org::json::JSONObject toJSONObjectForWeb(const ::com::facebook::share::model::ShareOpenGraphContent&);
    static ::org::json::JSONArray removeNamespacesFromOGJsonArray(const ::org::json::JSONArray&, bool);
    static ::org::json::JSONObject removeNamespacesFromOGJsonObject(const ::org::json::JSONObject&, bool);
    static ::android::util::Pair getFieldNameAndNamespaceFromFullName(const ::java::lang::String&);
    static ::com::facebook::GraphRequest newPostOpenGraphObjectRequest(const ::com::facebook::AccessToken&, const ::org::json::JSONObject&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newPostOpenGraphObjectRequest(const ::com::facebook::AccessToken&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::org::json::JSONObject&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newPostOpenGraphActionRequest(const ::com::facebook::AccessToken&, const ::org::json::JSONObject&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newUpdateOpenGraphObjectRequest(const ::com::facebook::AccessToken&, const ::org::json::JSONObject&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newUpdateOpenGraphObjectRequest(const ::com::facebook::AccessToken&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::org::json::JSONObject&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newUploadPhotoRequest(const ::com::facebook::AccessToken&, const ::android::graphics::Bitmap&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newUploadPhotoRequest(const ::com::facebook::AccessToken&, const ::java::io::File&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newUploadPhotoRequest(const ::com::facebook::AccessToken&, const ::android::net::Uri&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newUploadVideoRequest(const ::com::facebook::AccessToken&, const ::java::io::File&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newUploadVideoRequest(const ::com::facebook::AccessToken&, const ::android::net::Uri&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newStatusUpdateRequest(const ::com::facebook::AccessToken&, const ::java::lang::String&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newStatusUpdateRequest(const ::com::facebook::AccessToken&, const ::java::lang::String&, const ::org::json::JSONObject&, const ::java::util::List&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newUploadStagingResourceWithImageRequest(const ::com::facebook::AccessToken&, const ::android::graphics::Bitmap&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newUploadStagingResourceWithImageRequest(const ::com::facebook::AccessToken&, const ::java::io::File&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newUploadStagingResourceWithImageRequest(const ::com::facebook::AccessToken&, const ::android::net::Uri&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::share::widget::LikeView_ObjectType getMostSpecificObjectType(const ::com::facebook::share::widget::LikeView_ObjectType&, const ::com::facebook::share::widget::LikeView_ObjectType&);

};
}
}
}
}


