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
class TextDirectionHeuristicCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextDirectionHeuristicCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextDirectionHeuristicCompat(const ::android::support::v4::text::TextDirectionHeuristicCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextDirectionHeuristicCompat(::android::support::v4::text::TextDirectionHeuristicCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::text::TextDirectionHeuristicCompat& operator=(const ::android::support::v4::text::TextDirectionHeuristicCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::text::TextDirectionHeuristicCompat& operator=(::android::support::v4::text::TextDirectionHeuristicCompat&& x) {obj = std::move(x.obj); return *this;}
    
    bool isRtl(const std::vector< uint16_t>&, int32_t, int32_t) const;
    bool isRtl(const ::java::lang::CharSequence&, int32_t, int32_t) const;

};
}
}
}
}


