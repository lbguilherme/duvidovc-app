#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace test { class PerformanceTestCase_Intermediates; } }

namespace android {
namespace test {
class PerformanceTestCase : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PerformanceTestCase(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PerformanceTestCase(const ::android::test::PerformanceTestCase& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PerformanceTestCase(::android::test::PerformanceTestCase&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::PerformanceTestCase& operator=(const ::android::test::PerformanceTestCase& x) {obj = x.obj; return *this;}
    ::android::test::PerformanceTestCase& operator=(::android::test::PerformanceTestCase&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t startPerformance(const ::android::test::PerformanceTestCase_Intermediates&) const;
    bool isPerformanceOnly() const;

};
}
}

#include "android.test.PerformanceTestCase_Intermediates.hpp"

