#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.text.TextDirectionHeuristicsCompat_TextDirectionAlgorithm.hpp"

namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace support {
namespace v4 {
namespace text {
class TextDirectionHeuristicsCompat_FirstStrong : public virtual ::java::lang::Object,
                                                  public virtual ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextDirectionHeuristicsCompat_FirstStrong(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextDirectionHeuristicsCompat_FirstStrong(const ::android::support::v4::text::TextDirectionHeuristicsCompat_FirstStrong& x) : ::java::lang::Object((jobject)0), ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm((jobject)0) {obj = x.obj;}
    TextDirectionHeuristicsCompat_FirstStrong(::android::support::v4::text::TextDirectionHeuristicsCompat_FirstStrong&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::text::TextDirectionHeuristicsCompat_FirstStrong& operator=(const ::android::support::v4::text::TextDirectionHeuristicsCompat_FirstStrong& x) {obj = x.obj; return *this;}
    ::android::support::v4::text::TextDirectionHeuristicsCompat_FirstStrong& operator=(::android::support::v4::text::TextDirectionHeuristicsCompat_FirstStrong&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t checkRtl(const ::java::lang::CharSequence&, int32_t, int32_t) const;

};
}
}
}
}


