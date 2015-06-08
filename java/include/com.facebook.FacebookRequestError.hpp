#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class FacebookException; } }
namespace com { namespace facebook { class FacebookRequestError_Category; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class HttpURLConnection; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
class FacebookRequestError : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookRequestError(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookRequestError(const ::com::facebook::FacebookRequestError& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FacebookRequestError(::com::facebook::FacebookRequestError&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookRequestError& operator=(const ::com::facebook::FacebookRequestError& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookRequestError& operator=(::com::facebook::FacebookRequestError&& x) {obj = std::move(x.obj); return *this;}
    
    FacebookRequestError(int32_t, const ::java::lang::String&, const ::java::lang::String&);
    ::com::facebook::FacebookRequestError_Category getCategory() const;
    int32_t getRequestStatusCode() const;
    int32_t getErrorCode() const;
    int32_t getSubErrorCode() const;
    ::java::lang::String getErrorType() const;
    ::java::lang::String getErrorMessage() const;
    ::java::lang::String getErrorRecoveryMessage() const;
    ::java::lang::String getErrorUserMessage() const;
    ::java::lang::String getErrorUserTitle() const;
    ::org::json::JSONObject getRequestResultBody() const;
    ::org::json::JSONObject getRequestResult() const;
    ::java::lang::Object getBatchRequestResult() const;
    ::java::net::HttpURLConnection getConnection() const;
    ::com::facebook::FacebookException getException() const;
    ::java::lang::String toString() const;

};
}
}

#include "com.facebook.FacebookRequestError_Category.hpp"
#include "com.facebook.FacebookRequestError_Range.hpp"

