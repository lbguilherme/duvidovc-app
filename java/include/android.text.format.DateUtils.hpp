#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuilder; } }
namespace java { namespace util { class Formatter; } }

namespace android {
namespace text {
namespace format {
class DateUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DateUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DateUtils(const ::android::text::format::DateUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DateUtils(::android::text::format::DateUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::format::DateUtils& operator=(const ::android::text::format::DateUtils& x) {obj = x.obj; return *this;}
    ::android::text::format::DateUtils& operator=(::android::text::format::DateUtils&& x) {obj = std::move(x.obj); return *this;}
    
    DateUtils();
    static ::java::lang::String getDayOfWeekString(int32_t, int32_t);
    static ::java::lang::String getAMPMString(int32_t);
    static ::java::lang::String getMonthString(int32_t, int32_t);
    static ::java::lang::CharSequence getRelativeTimeSpanString(int64_t);
    static ::java::lang::CharSequence getRelativeTimeSpanString(int64_t, int64_t, int64_t);
    static ::java::lang::CharSequence getRelativeTimeSpanString(int64_t, int64_t, int64_t, int32_t);
    static ::java::lang::CharSequence getRelativeDateTimeString(const ::android::content::Context&, int64_t, int64_t, int64_t, int32_t);
    static ::java::lang::String formatElapsedTime(int64_t);
    static ::java::lang::String formatElapsedTime(const ::java::lang::StringBuilder&, int64_t);
    static ::java::lang::CharSequence formatSameDayTime(int64_t, int64_t, int32_t, int32_t);
    static bool isToday(int64_t);
    static ::java::lang::String formatDateRange(const ::android::content::Context&, int64_t, int64_t, int32_t);
    static ::java::util::Formatter formatDateRange(const ::android::content::Context&, const ::java::util::Formatter&, int64_t, int64_t, int32_t);
    static ::java::util::Formatter formatDateRange(const ::android::content::Context&, const ::java::util::Formatter&, int64_t, int64_t, int32_t, const ::java::lang::String&);
    static ::java::lang::String formatDateTime(const ::android::content::Context&, int64_t, int32_t);
    static ::java::lang::CharSequence getRelativeTimeSpanString(const ::android::content::Context&, int64_t, bool);
    static ::java::lang::CharSequence getRelativeTimeSpanString(const ::android::content::Context&, int64_t);

};
}
}
}


