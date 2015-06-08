#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.net.UrlQuerySanitizer_ValueSanitizer.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class UrlQuerySanitizer_IllegalCharacterValueSanitizer : public virtual ::java::lang::Object,
                                                         public virtual ::android::net::UrlQuerySanitizer_ValueSanitizer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UrlQuerySanitizer_IllegalCharacterValueSanitizer(jobject _obj) : ::java::lang::Object(_obj), ::android::net::UrlQuerySanitizer_ValueSanitizer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UrlQuerySanitizer_IllegalCharacterValueSanitizer(const ::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer& x) : ::java::lang::Object((jobject)0), ::android::net::UrlQuerySanitizer_ValueSanitizer((jobject)0) {obj = x.obj;}
    UrlQuerySanitizer_IllegalCharacterValueSanitizer(::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer&& x) : ::java::lang::Object((jobject)0), ::android::net::UrlQuerySanitizer_ValueSanitizer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer& operator=(const ::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer& x) {obj = x.obj; return *this;}
    ::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer& operator=(::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer&& x) {obj = std::move(x.obj); return *this;}
    
    UrlQuerySanitizer_IllegalCharacterValueSanitizer(int32_t);
    ::java::lang::String sanitize(const ::java::lang::String&) const;

};
}
}


