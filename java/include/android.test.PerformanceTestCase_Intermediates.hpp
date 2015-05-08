#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace test {
class PerformanceTestCase_Intermediates : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PerformanceTestCase_Intermediates(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PerformanceTestCase_Intermediates(const ::android::test::PerformanceTestCase_Intermediates& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PerformanceTestCase_Intermediates(::android::test::PerformanceTestCase_Intermediates&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::PerformanceTestCase_Intermediates& operator=(const ::android::test::PerformanceTestCase_Intermediates& x) {obj = x.obj; return *this;}
    ::android::test::PerformanceTestCase_Intermediates& operator=(::android::test::PerformanceTestCase_Intermediates&& x) {obj = std::move(x.obj); return *this;}
    
    void setInternalIterations(int32_t) const ;
    void startTiming(bool) const ;
    void addIntermediate(const ::java::lang::String&) const ;
    void addIntermediate(const ::java::lang::String&, int64_t) const ;
    void finishTiming(bool) const ;

};
}
}


