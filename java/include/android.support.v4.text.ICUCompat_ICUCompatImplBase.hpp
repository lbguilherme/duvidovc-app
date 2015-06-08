#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.text.ICUCompat_ICUCompatImpl.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace text {
class ICUCompat_ICUCompatImplBase : public virtual ::java::lang::Object,
                                    public virtual ::android::support::v4::text::ICUCompat_ICUCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ICUCompat_ICUCompatImplBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::text::ICUCompat_ICUCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ICUCompat_ICUCompatImplBase(const ::android::support::v4::text::ICUCompat_ICUCompatImplBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::text::ICUCompat_ICUCompatImpl((jobject)0) {obj = x.obj;}
    ICUCompat_ICUCompatImplBase(::android::support::v4::text::ICUCompat_ICUCompatImplBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::text::ICUCompat_ICUCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::text::ICUCompat_ICUCompatImplBase& operator=(const ::android::support::v4::text::ICUCompat_ICUCompatImplBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::text::ICUCompat_ICUCompatImplBase& operator=(::android::support::v4::text::ICUCompat_ICUCompatImplBase&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getScript(const ::java::lang::String&) const;
    ::java::lang::String addLikelySubtags(const ::java::lang::String&) const;

};
}
}
}
}


