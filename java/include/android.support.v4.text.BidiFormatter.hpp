#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace text { class BidiFormatter; } } } }
namespace android { namespace support { namespace v4 { namespace text { class TextDirectionHeuristicCompat; } } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }

namespace android {
namespace support {
namespace v4 {
namespace text {
class BidiFormatter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BidiFormatter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BidiFormatter(const ::android::support::v4::text::BidiFormatter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BidiFormatter(::android::support::v4::text::BidiFormatter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::text::BidiFormatter& operator=(const ::android::support::v4::text::BidiFormatter& x) {obj = x.obj; return *this;}
    ::android::support::v4::text::BidiFormatter& operator=(::android::support::v4::text::BidiFormatter&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::text::BidiFormatter getInstance();
    static ::android::support::v4::text::BidiFormatter getInstance(bool);
    static ::android::support::v4::text::BidiFormatter getInstance(const ::java::util::Locale&);
    bool isRtlContext() const ;
    bool getStereoReset() const ;
    bool isRtl(const ::java::lang::String&) const ;
    ::java::lang::String unicodeWrap(const ::java::lang::String&, const ::android::support::v4::text::TextDirectionHeuristicCompat&, bool) const ;
    ::java::lang::String unicodeWrap(const ::java::lang::String&, const ::android::support::v4::text::TextDirectionHeuristicCompat&) const ;
    ::java::lang::String unicodeWrap(const ::java::lang::String&, bool) const ;
    ::java::lang::String unicodeWrap(const ::java::lang::String&) const ;

};
}
}
}
}

#include "android.support.v4.text.BidiFormatter_Builder.hpp"
#include "android.support.v4.text.BidiFormatter_DirectionalityEstimator.hpp"

