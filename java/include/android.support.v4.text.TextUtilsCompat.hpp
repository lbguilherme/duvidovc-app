#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }

namespace android {
namespace support {
namespace v4 {
namespace text {
class TextUtilsCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextUtilsCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextUtilsCompat(const ::android::support::v4::text::TextUtilsCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextUtilsCompat(::android::support::v4::text::TextUtilsCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::text::TextUtilsCompat& operator=(const ::android::support::v4::text::TextUtilsCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::text::TextUtilsCompat& operator=(::android::support::v4::text::TextUtilsCompat&& x) {obj = std::move(x.obj); return *this;}
    
    TextUtilsCompat();
    static ::java::lang::String htmlEncode(const ::java::lang::String&);
    static int32_t getLayoutDirectionFromLocale(const ::java::util::Locale&);

};
}
}
}
}


