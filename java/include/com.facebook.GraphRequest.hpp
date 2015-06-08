#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace location { class Location; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Handler; } }
namespace com { namespace facebook { class AccessToken; } }
namespace com { namespace facebook { class GraphRequest; } }
namespace com { namespace facebook { class GraphRequest_Callback; } }
namespace com { namespace facebook { class GraphRequest_GraphJSONArrayCallback; } }
namespace com { namespace facebook { class GraphRequest_GraphJSONObjectCallback; } }
namespace com { namespace facebook { class GraphRequestAsyncTask; } }
namespace com { namespace facebook { class GraphRequestBatch; } }
namespace com { namespace facebook { class GraphResponse; } }
namespace com { namespace facebook { class HttpMethod; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class HttpURLConnection; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class List; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
class GraphRequest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequest(const ::com::facebook::GraphRequest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GraphRequest(::com::facebook::GraphRequest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequest& operator=(const ::com::facebook::GraphRequest& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequest& operator=(::com::facebook::GraphRequest&& x) {obj = std::move(x.obj); return *this;}
    
    GraphRequest();
    GraphRequest(const ::com::facebook::AccessToken&, const ::java::lang::String&);
    GraphRequest(const ::com::facebook::AccessToken&, const ::java::lang::String&, const ::android::os::Bundle&, const ::com::facebook::HttpMethod&);
    GraphRequest(const ::com::facebook::AccessToken&, const ::java::lang::String&, const ::android::os::Bundle&, const ::com::facebook::HttpMethod&, const ::com::facebook::GraphRequest_Callback&);
    GraphRequest(const ::com::facebook::AccessToken&, const ::java::lang::String&, const ::android::os::Bundle&, const ::com::facebook::HttpMethod&, const ::com::facebook::GraphRequest_Callback&, const ::java::lang::String&);
    static ::com::facebook::GraphRequest newDeleteObjectRequest(const ::com::facebook::AccessToken&, const ::java::lang::String&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newMeRequest(const ::com::facebook::AccessToken&, const ::com::facebook::GraphRequest_GraphJSONObjectCallback&);
    static ::com::facebook::GraphRequest newPostRequest(const ::com::facebook::AccessToken&, const ::java::lang::String&, const ::org::json::JSONObject&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newMyFriendsRequest(const ::com::facebook::AccessToken&, const ::com::facebook::GraphRequest_GraphJSONArrayCallback&);
    static ::com::facebook::GraphRequest newGraphPathRequest(const ::com::facebook::AccessToken&, const ::java::lang::String&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newPlacesSearchRequest(const ::com::facebook::AccessToken&, const ::android::location::Location&, int32_t, int32_t, const ::java::lang::String&, const ::com::facebook::GraphRequest_GraphJSONArrayCallback&);
    static ::com::facebook::GraphRequest newCustomAudienceThirdPartyIdRequest(const ::com::facebook::AccessToken&, const ::android::content::Context&, const ::java::lang::String&, const ::com::facebook::GraphRequest_Callback&);
    static ::com::facebook::GraphRequest newCustomAudienceThirdPartyIdRequest(const ::com::facebook::AccessToken&, const ::android::content::Context&, const ::com::facebook::GraphRequest_Callback&);
    ::org::json::JSONObject getGraphObject() const;
    void setGraphObject(const ::org::json::JSONObject&) const;
    ::java::lang::String getGraphPath() const;
    void setGraphPath(const ::java::lang::String&) const;
    ::com::facebook::HttpMethod getHttpMethod() const;
    void setHttpMethod(const ::com::facebook::HttpMethod&) const;
    ::java::lang::String getVersion() const;
    void setVersion(const ::java::lang::String&) const;
    void setSkipClientToken(bool) const;
    ::android::os::Bundle getParameters() const;
    void setParameters(const ::android::os::Bundle&) const;
    ::com::facebook::AccessToken getAccessToken() const;
    void setAccessToken(const ::com::facebook::AccessToken&) const;
    ::java::lang::String getBatchEntryName() const;
    void setBatchEntryName(const ::java::lang::String&) const;
    ::java::lang::String getBatchEntryDependsOn() const;
    void setBatchEntryDependsOn(const ::java::lang::String&) const;
    bool getBatchEntryOmitResultOnSuccess() const;
    void setBatchEntryOmitResultOnSuccess(bool) const;
    static ::java::lang::String getDefaultBatchApplicationId();
    static void setDefaultBatchApplicationId(const ::java::lang::String&);
    ::com::facebook::GraphRequest_Callback getCallback() const;
    void setCallback(const ::com::facebook::GraphRequest_Callback&) const;
    void setTag(const ::java::lang::Object&) const;
    ::java::lang::Object getTag() const;
    ::com::facebook::GraphResponse executeAndWait() const;
    ::com::facebook::GraphRequestAsyncTask executeAsync() const;
    static ::java::net::HttpURLConnection toHttpConnection(const std::vector< ::com::facebook::GraphRequest>&);
    static ::java::net::HttpURLConnection toHttpConnection(const ::java::util::Collection&);
    static ::java::net::HttpURLConnection toHttpConnection(const ::com::facebook::GraphRequestBatch&);
    static ::com::facebook::GraphResponse executeAndWait(const ::com::facebook::GraphRequest&);
    static ::java::util::List executeBatchAndWait(const std::vector< ::com::facebook::GraphRequest>&);
    static ::java::util::List executeBatchAndWait(const ::java::util::Collection&);
    static ::java::util::List executeBatchAndWait(const ::com::facebook::GraphRequestBatch&);
    static ::com::facebook::GraphRequestAsyncTask executeBatchAsync(const std::vector< ::com::facebook::GraphRequest>&);
    static ::com::facebook::GraphRequestAsyncTask executeBatchAsync(const ::java::util::Collection&);
    static ::com::facebook::GraphRequestAsyncTask executeBatchAsync(const ::com::facebook::GraphRequestBatch&);
    static ::java::util::List executeConnectionAndWait(const ::java::net::HttpURLConnection&, const ::java::util::Collection&);
    static ::java::util::List executeConnectionAndWait(const ::java::net::HttpURLConnection&, const ::com::facebook::GraphRequestBatch&);
    static ::com::facebook::GraphRequestAsyncTask executeConnectionAsync(const ::java::net::HttpURLConnection&, const ::com::facebook::GraphRequestBatch&);
    static ::com::facebook::GraphRequestAsyncTask executeConnectionAsync(const ::android::os::Handler&, const ::java::net::HttpURLConnection&, const ::com::facebook::GraphRequestBatch&);
    ::java::lang::String toString() const;

};
}
}

#include "com.facebook.GraphRequest_Attachment.hpp"
#include "com.facebook.GraphRequest_Callback.hpp"
#include "com.facebook.GraphRequest_GraphJSONArrayCallback.hpp"
#include "com.facebook.GraphRequest_GraphJSONObjectCallback.hpp"
#include "com.facebook.GraphRequest_KeyValueSerializer.hpp"
#include "com.facebook.GraphRequest_OnProgressCallback.hpp"
#include "com.facebook.GraphRequest_ParcelableResourceWithMimeType.hpp"
#include "com.facebook.GraphRequest_Serializer.hpp"

