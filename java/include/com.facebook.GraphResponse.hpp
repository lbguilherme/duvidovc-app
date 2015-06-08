#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class FacebookRequestError; } }
namespace com { namespace facebook { class GraphRequest; } }
namespace com { namespace facebook { class GraphResponse_PagingDirection; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class HttpURLConnection; } }
namespace org { namespace json { class JSONArray; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
class GraphResponse : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphResponse(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphResponse(const ::com::facebook::GraphResponse& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GraphResponse(::com::facebook::GraphResponse&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphResponse& operator=(const ::com::facebook::GraphResponse& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphResponse& operator=(::com::facebook::GraphResponse&& x) {obj = std::move(x.obj); return *this;}
    
    ::com::facebook::FacebookRequestError getError() const;
    ::org::json::JSONObject getJSONObject() const;
    ::org::json::JSONArray getJSONArray() const;
    ::java::net::HttpURLConnection getConnection() const;
    ::com::facebook::GraphRequest getRequest() const;
    ::java::lang::String getRawResponse() const;
    ::com::facebook::GraphRequest getRequestForPagedResults(const ::com::facebook::GraphResponse_PagingDirection&) const;
    ::java::lang::String toString() const;

};
}
}

#include "com.facebook.GraphResponse_PagingDirection.hpp"

