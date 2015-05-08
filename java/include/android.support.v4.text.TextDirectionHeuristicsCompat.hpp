#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace text {
class TextDirectionHeuristicsCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextDirectionHeuristicsCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextDirectionHeuristicsCompat(const ::android::support::v4::text::TextDirectionHeuristicsCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextDirectionHeuristicsCompat(::android::support::v4::text::TextDirectionHeuristicsCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::text::TextDirectionHeuristicsCompat& operator=(const ::android::support::v4::text::TextDirectionHeuristicsCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::text::TextDirectionHeuristicsCompat& operator=(::android::support::v4::text::TextDirectionHeuristicsCompat&& x) {obj = std::move(x.obj); return *this;}
    
    TextDirectionHeuristicsCompat();

};
}
}
}
}

#include "android.support.v4.text.TextDirectionHeuristicsCompat_AnyStrong.hpp"
#include "android.support.v4.text.TextDirectionHeuristicsCompat_FirstStrong.hpp"
#include "android.support.v4.text.TextDirectionHeuristicsCompat_TextDirectionAlgorithm.hpp"
#include "android.support.v4.text.TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl.hpp"
#include "android.support.v4.text.TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal.hpp"
#include "android.support.v4.text.TextDirectionHeuristicsCompat_TextDirectionHeuristicLocale.hpp"

