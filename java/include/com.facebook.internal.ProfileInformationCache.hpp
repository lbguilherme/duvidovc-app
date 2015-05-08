#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
namespace internal {
class ProfileInformationCache : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProfileInformationCache(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProfileInformationCache(const ::com::facebook::internal::ProfileInformationCache& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProfileInformationCache(::com::facebook::internal::ProfileInformationCache&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ProfileInformationCache& operator=(const ::com::facebook::internal::ProfileInformationCache& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ProfileInformationCache& operator=(::com::facebook::internal::ProfileInformationCache&& x) {obj = std::move(x.obj); return *this;}
    
    static ::org::json::JSONObject getProfileInformation(const ::java::lang::String&);
    static void putProfileInformation(const ::java::lang::String&, const ::org::json::JSONObject&);

};
}
}
}


