#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace text { class DateFormat; } }
namespace java { namespace util { class Calendar; } }
namespace java { namespace util { class Date; } }

namespace android {
namespace text {
namespace format {
class DateFormat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DateFormat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DateFormat(const ::android::text::format::DateFormat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DateFormat(::android::text::format::DateFormat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::format::DateFormat& operator=(const ::android::text::format::DateFormat& x) {obj = x.obj; return *this;}
    ::android::text::format::DateFormat& operator=(::android::text::format::DateFormat&& x) {obj = std::move(x.obj); return *this;}
    
    DateFormat();
    static bool is24HourFormat(const ::android::content::Context&);
    static ::java::text::DateFormat getTimeFormat(const ::android::content::Context&);
    static ::java::text::DateFormat getDateFormat(const ::android::content::Context&);
    static ::java::text::DateFormat getLongDateFormat(const ::android::content::Context&);
    static ::java::text::DateFormat getMediumDateFormat(const ::android::content::Context&);
    static std::vector< uint16_t> getDateFormatOrder(const ::android::content::Context&);
    static ::java::lang::CharSequence format(const ::java::lang::CharSequence&, int64_t);
    static ::java::lang::CharSequence format(const ::java::lang::CharSequence&, const ::java::util::Date&);
    static ::java::lang::CharSequence format(const ::java::lang::CharSequence&, const ::java::util::Calendar&);

};
}
}
}


