#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { namespace format { class Time; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
namespace format {
class Time : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Time(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Time(const ::android::text::format::Time& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Time(::android::text::format::Time&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::format::Time& operator=(const ::android::text::format::Time& x) {obj = x.obj; return *this;}
    ::android::text::format::Time& operator=(::android::text::format::Time&& x) {obj = std::move(x.obj); return *this;}
    
    Time(const ::java::lang::String&);
    Time();
    int64_t normalize(bool) const;
    void switchTimezone(const ::java::lang::String&) const;
    int32_t getActualMaximum(int32_t) const;
    void clear(const ::java::lang::String&) const;
    static int32_t compare(const ::android::text::format::Time&, const ::android::text::format::Time&);
    ::java::lang::String format(const ::java::lang::String&) const;
    ::java::lang::String toString() const;
    bool parse(const ::java::lang::String&) const;
    bool parse3339(const ::java::lang::String&) const;
    static ::java::lang::String getCurrentTimezone();
    void setToNow() const;
    int64_t toMillis(bool) const;
    void set(int64_t) const;
    ::java::lang::String format2445() const;
    void set(const ::android::text::format::Time&) const;
    void set(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void set(int32_t, int32_t, int32_t) const;
    bool before(const ::android::text::format::Time&) const;
    bool after(const ::android::text::format::Time&) const;
    int32_t getWeekNumber() const;
    ::java::lang::String format3339(bool) const;
    static bool isEpoch(const ::android::text::format::Time&);
    static int32_t getJulianDay(int64_t, int64_t);
    int64_t setJulianDay(int32_t) const;
    static int32_t getWeeksSinceEpochFromJulianDay(int32_t, int32_t);
    static int32_t getJulianMondayFromWeeksSinceEpoch(int32_t);

};
}
}
}


