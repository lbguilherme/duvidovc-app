#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace util {
class MonthDisplayHelper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MonthDisplayHelper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MonthDisplayHelper(const ::android::util::MonthDisplayHelper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MonthDisplayHelper(::android::util::MonthDisplayHelper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::MonthDisplayHelper& operator=(const ::android::util::MonthDisplayHelper& x) {obj = x.obj; return *this;}
    ::android::util::MonthDisplayHelper& operator=(::android::util::MonthDisplayHelper&& x) {obj = std::move(x.obj); return *this;}
    
    MonthDisplayHelper(int32_t, int32_t, int32_t);
    MonthDisplayHelper(int32_t, int32_t);
    int32_t getYear() const ;
    int32_t getMonth() const ;
    int32_t getWeekStartDay() const ;
    int32_t getFirstDayOfMonth() const ;
    int32_t getNumberOfDaysInMonth() const ;
    int32_t getOffset() const ;
    std::vector< int32_t> getDigitsForRow(int32_t) const ;
    int32_t getDayAt(int32_t, int32_t) const ;
    int32_t getRowOf(int32_t) const ;
    int32_t getColumnOf(int32_t) const ;
    void previousMonth() const ;
    void nextMonth() const ;
    bool isWithinCurrentMonth(int32_t, int32_t) const ;

};
}
}


