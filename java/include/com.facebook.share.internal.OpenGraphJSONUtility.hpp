#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace share { namespace internal { class OpenGraphJSONUtility_PhotoJSONProcessor; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphAction; } } } }
namespace java { namespace lang { class Object; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class OpenGraphJSONUtility : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OpenGraphJSONUtility(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OpenGraphJSONUtility(const ::com::facebook::share::internal::OpenGraphJSONUtility& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    OpenGraphJSONUtility(::com::facebook::share::internal::OpenGraphJSONUtility&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::OpenGraphJSONUtility& operator=(const ::com::facebook::share::internal::OpenGraphJSONUtility& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::OpenGraphJSONUtility& operator=(::com::facebook::share::internal::OpenGraphJSONUtility&& x) {obj = std::move(x.obj); return *this;}
    
    static ::org::json::JSONObject toJSONObject(const ::com::facebook::share::model::ShareOpenGraphAction&, const ::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor&);
    static ::java::lang::Object toJSONValue(const ::java::lang::Object&, const ::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor&);

};
}
}
}
}

#include "com.facebook.share.internal.OpenGraphJSONUtility_PhotoJSONProcessor.hpp"

