#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.test.AssertionFailedError.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace test {
class ComparisonFailure : public virtual ::java::lang::Object,
                          public virtual ::android::test::AssertionFailedError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ComparisonFailure(jobject _obj) : ::java::lang::Object(_obj), ::android::test::AssertionFailedError(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ComparisonFailure(const ::android::test::ComparisonFailure& x) : ::java::lang::Object((jobject)0), ::android::test::AssertionFailedError((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ComparisonFailure(::android::test::ComparisonFailure&& x) : ::java::lang::Object((jobject)0), ::android::test::AssertionFailedError((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::ComparisonFailure& operator=(const ::android::test::ComparisonFailure& x) {obj = x.obj; return *this;}
    ::android::test::ComparisonFailure& operator=(::android::test::ComparisonFailure&& x) {obj = std::move(x.obj); return *this;}
    
    ComparisonFailure(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getMessage() const ;

};
}
}


