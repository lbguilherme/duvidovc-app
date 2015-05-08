#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace support {
namespace v4 {
namespace text {
class TextDirectionHeuristicsCompat_TextDirectionAlgorithm : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextDirectionHeuristicsCompat_TextDirectionAlgorithm(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextDirectionHeuristicsCompat_TextDirectionAlgorithm(const ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextDirectionHeuristicsCompat_TextDirectionAlgorithm(::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm& operator=(const ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm& x) {obj = x.obj; return *this;}
    ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm& operator=(::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t checkRtl(const ::java::lang::CharSequence&, int32_t, int32_t) const ;

};
}
}
}
}


