#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class UrlQuerySanitizer; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class UrlQuerySanitizer_ParameterValuePair : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UrlQuerySanitizer_ParameterValuePair(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UrlQuerySanitizer_ParameterValuePair(const ::android::net::UrlQuerySanitizer_ParameterValuePair& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UrlQuerySanitizer_ParameterValuePair(::android::net::UrlQuerySanitizer_ParameterValuePair&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::UrlQuerySanitizer_ParameterValuePair& operator=(const ::android::net::UrlQuerySanitizer_ParameterValuePair& x) {obj = x.obj; return *this;}
    ::android::net::UrlQuerySanitizer_ParameterValuePair& operator=(::android::net::UrlQuerySanitizer_ParameterValuePair&& x) {obj = std::move(x.obj); return *this;}
    
    UrlQuerySanitizer_ParameterValuePair(const ::android::net::UrlQuerySanitizer&, const ::java::lang::String&, const ::java::lang::String&);

};
}
}


