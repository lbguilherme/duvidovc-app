#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace share { namespace model { class SharePhoto; } } } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class OpenGraphJSONUtility_PhotoJSONProcessor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OpenGraphJSONUtility_PhotoJSONProcessor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OpenGraphJSONUtility_PhotoJSONProcessor(const ::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    OpenGraphJSONUtility_PhotoJSONProcessor(::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor& operator=(const ::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor& operator=(::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::json::JSONObject toJSONObject(const ::com::facebook::share::model::SharePhoto&) const;

};
}
}
}
}


