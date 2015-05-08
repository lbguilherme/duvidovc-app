#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class UrlQuerySanitizer_ValueSanitizer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UrlQuerySanitizer_ValueSanitizer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UrlQuerySanitizer_ValueSanitizer(const ::android::net::UrlQuerySanitizer_ValueSanitizer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UrlQuerySanitizer_ValueSanitizer(::android::net::UrlQuerySanitizer_ValueSanitizer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::UrlQuerySanitizer_ValueSanitizer& operator=(const ::android::net::UrlQuerySanitizer_ValueSanitizer& x) {obj = x.obj; return *this;}
    ::android::net::UrlQuerySanitizer_ValueSanitizer& operator=(::android::net::UrlQuerySanitizer_ValueSanitizer&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String sanitize(const ::java::lang::String&) const ;

};
}
}


