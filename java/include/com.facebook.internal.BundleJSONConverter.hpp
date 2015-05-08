#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
namespace internal {
class BundleJSONConverter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BundleJSONConverter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BundleJSONConverter(const ::com::facebook::internal::BundleJSONConverter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BundleJSONConverter(::com::facebook::internal::BundleJSONConverter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::BundleJSONConverter& operator=(const ::com::facebook::internal::BundleJSONConverter& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::BundleJSONConverter& operator=(::com::facebook::internal::BundleJSONConverter&& x) {obj = std::move(x.obj); return *this;}
    
    BundleJSONConverter();
    static ::org::json::JSONObject convertToJSON(const ::android::os::Bundle&);
    static ::android::os::Bundle convertToBundle(const ::org::json::JSONObject&);

};
}
}
}

#include "com.facebook.internal.BundleJSONConverter_Setter.hpp"

