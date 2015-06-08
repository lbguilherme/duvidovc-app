#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
namespace internal {
class BundleJSONConverter_Setter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BundleJSONConverter_Setter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BundleJSONConverter_Setter(const ::com::facebook::internal::BundleJSONConverter_Setter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BundleJSONConverter_Setter(::com::facebook::internal::BundleJSONConverter_Setter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::BundleJSONConverter_Setter& operator=(const ::com::facebook::internal::BundleJSONConverter_Setter& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::BundleJSONConverter_Setter& operator=(::com::facebook::internal::BundleJSONConverter_Setter&& x) {obj = std::move(x.obj); return *this;}
    
    void setOnBundle(const ::android::os::Bundle&, const ::java::lang::String&, const ::java::lang::Object&) const;
    void setOnJSON(const ::org::json::JSONObject&, const ::java::lang::String&, const ::java::lang::Object&) const;

};
}
}
}


