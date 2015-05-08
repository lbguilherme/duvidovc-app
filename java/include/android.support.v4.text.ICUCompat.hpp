#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace text {
class ICUCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ICUCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ICUCompat(const ::android::support::v4::text::ICUCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ICUCompat(::android::support::v4::text::ICUCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::text::ICUCompat& operator=(const ::android::support::v4::text::ICUCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::text::ICUCompat& operator=(::android::support::v4::text::ICUCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ICUCompat();
    static ::java::lang::String getScript(const ::java::lang::String&);
    static ::java::lang::String addLikelySubtags(const ::java::lang::String&);

};
}
}
}
}

#include "android.support.v4.text.ICUCompat_ICUCompatImpl.hpp"
#include "android.support.v4.text.ICUCompat_ICUCompatImplBase.hpp"
#include "android.support.v4.text.ICUCompat_ICUCompatImplIcs.hpp"

