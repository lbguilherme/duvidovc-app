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
namespace suitebuilder {
namespace annotation {
class LargeTest : public virtual ::java::lang::Object,
                  public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LargeTest(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LargeTest(const ::android::test::suitebuilder::annotation::LargeTest& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    LargeTest(::android::test::suitebuilder::annotation::LargeTest&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::suitebuilder::annotation::LargeTest& operator=(const ::android::test::suitebuilder::annotation::LargeTest& x) {obj = x.obj; return *this;}
    ::android::test::suitebuilder::annotation::LargeTest& operator=(::android::test::suitebuilder::annotation::LargeTest&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


