#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Error.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace test {
class AssertionFailedError : public virtual ::java::lang::Object,
                             public virtual ::java::lang::Error {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AssertionFailedError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AssertionFailedError(const ::android::test::AssertionFailedError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    AssertionFailedError(::android::test::AssertionFailedError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::AssertionFailedError& operator=(const ::android::test::AssertionFailedError& x) {obj = x.obj; return *this;}
    ::android::test::AssertionFailedError& operator=(::android::test::AssertionFailedError&& x) {obj = std::move(x.obj); return *this;}
    
    AssertionFailedError();
    AssertionFailedError(const ::java::lang::String&);

};
}
}


