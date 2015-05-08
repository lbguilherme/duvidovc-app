#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.text.TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl.hpp"


namespace android {
namespace support {
namespace v4 {
namespace text {
class TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal : public virtual ::java::lang::Object,
                                                                     public virtual ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::text::TextDirectionHeuristicCompat(_obj), ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal(const ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal& x) : ::java::lang::Object((jobject)0), ::android::support::v4::text::TextDirectionHeuristicCompat((jobject)0), ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl((jobject)0) {obj = x.obj;}
    TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal(::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::text::TextDirectionHeuristicCompat((jobject)0), ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal& operator=(const ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal& x) {obj = x.obj; return *this;}
    ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal& operator=(::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


