#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "junit.framework.AssertionFailedError.hpp"

namespace java { namespace lang { class String; } }

namespace junit {
namespace framework {
class ComparisonFailure : public virtual ::java::lang::Object,
                          public virtual ::junit::framework::AssertionFailedError {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ComparisonFailure(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::Throwable(_obj), ::junit::framework::AssertionFailedError(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ComparisonFailure(const ::junit::framework::ComparisonFailure& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::junit::framework::AssertionFailedError((jobject)0) {obj = x.obj;}
    ComparisonFailure(::junit::framework::ComparisonFailure&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::junit::framework::AssertionFailedError((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::framework::ComparisonFailure& operator=(const ::junit::framework::ComparisonFailure& x) {obj = x.obj; return *this;}
    ::junit::framework::ComparisonFailure& operator=(::junit::framework::ComparisonFailure&& x) {obj = std::move(x.obj); return *this;}
    
    ComparisonFailure(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getMessage() const;

};
}
}


