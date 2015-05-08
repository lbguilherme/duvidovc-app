#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class GraphResponse; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
class GraphRequest_GraphJSONObjectCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequest_GraphJSONObjectCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequest_GraphJSONObjectCallback(const ::com::facebook::GraphRequest_GraphJSONObjectCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GraphRequest_GraphJSONObjectCallback(::com::facebook::GraphRequest_GraphJSONObjectCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequest_GraphJSONObjectCallback& operator=(const ::com::facebook::GraphRequest_GraphJSONObjectCallback& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequest_GraphJSONObjectCallback& operator=(::com::facebook::GraphRequest_GraphJSONObjectCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onCompleted(const ::org::json::JSONObject&, const ::com::facebook::GraphResponse&) const ;

};
}
}


