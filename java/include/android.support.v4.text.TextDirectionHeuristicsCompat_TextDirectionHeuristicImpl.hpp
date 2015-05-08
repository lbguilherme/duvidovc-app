#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.text.TextDirectionHeuristicCompat.hpp"

namespace android { namespace support { namespace v4 { namespace text { class TextDirectionHeuristicsCompat_TextDirectionAlgorithm; } } } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace support {
namespace v4 {
namespace text {
class TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl : public virtual ::java::lang::Object,
                                                                 public virtual ::android::support::v4::text::TextDirectionHeuristicCompat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::text::TextDirectionHeuristicCompat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl(const ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::text::TextDirectionHeuristicCompat((jobject)0) {obj = x.obj;}
    TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl(::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::text::TextDirectionHeuristicCompat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl& operator=(const ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl& operator=(::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl&& x) {obj = std::move(x.obj); return *this;}
    
    TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl(const ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm&);
    bool isRtl(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    bool isRtl(const ::java::lang::CharSequence&, int32_t, int32_t) const ;

};
}
}
}
}


