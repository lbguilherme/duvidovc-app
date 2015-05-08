#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"


namespace android {
namespace test {
class UiThreadTest : public virtual ::java::lang::Object,
                     public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UiThreadTest(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UiThreadTest(const ::android::test::UiThreadTest& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    UiThreadTest(::android::test::UiThreadTest&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::UiThreadTest& operator=(const ::android::test::UiThreadTest& x) {obj = x.obj; return *this;}
    ::android::test::UiThreadTest& operator=(::android::test::UiThreadTest&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


