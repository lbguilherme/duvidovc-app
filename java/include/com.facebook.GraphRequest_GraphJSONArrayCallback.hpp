#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class GraphResponse; } }
namespace org { namespace json { class JSONArray; } }

namespace com {
namespace facebook {
class GraphRequest_GraphJSONArrayCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequest_GraphJSONArrayCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequest_GraphJSONArrayCallback(const ::com::facebook::GraphRequest_GraphJSONArrayCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GraphRequest_GraphJSONArrayCallback(::com::facebook::GraphRequest_GraphJSONArrayCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequest_GraphJSONArrayCallback& operator=(const ::com::facebook::GraphRequest_GraphJSONArrayCallback& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequest_GraphJSONArrayCallback& operator=(::com::facebook::GraphRequest_GraphJSONArrayCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onCompleted(const ::org::json::JSONArray&, const ::com::facebook::GraphResponse&) const ;

};
}
}


