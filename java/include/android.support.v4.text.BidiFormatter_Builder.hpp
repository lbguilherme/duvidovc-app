#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace text { class BidiFormatter; } } } }
namespace android { namespace support { namespace v4 { namespace text { class BidiFormatter_Builder; } } } }
namespace android { namespace support { namespace v4 { namespace text { class TextDirectionHeuristicCompat; } } } }
namespace java { namespace util { class Locale; } }

namespace android {
namespace support {
namespace v4 {
namespace text {
class BidiFormatter_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BidiFormatter_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BidiFormatter_Builder(const ::android::support::v4::text::BidiFormatter_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BidiFormatter_Builder(::android::support::v4::text::BidiFormatter_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::text::BidiFormatter_Builder& operator=(const ::android::support::v4::text::BidiFormatter_Builder& x) {obj = x.obj; return *this;}
    ::android::support::v4::text::BidiFormatter_Builder& operator=(::android::support::v4::text::BidiFormatter_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    BidiFormatter_Builder();
    BidiFormatter_Builder(bool);
    BidiFormatter_Builder(const ::java::util::Locale&);
    ::android::support::v4::text::BidiFormatter_Builder stereoReset(bool) const;
    ::android::support::v4::text::BidiFormatter_Builder setTextDirectionHeuristic(const ::android::support::v4::text::TextDirectionHeuristicCompat&) const;
    ::android::support::v4::text::BidiFormatter build() const;

};
}
}
}
}


