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
class SmallTest : public virtual ::java::lang::Object,
                  public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SmallTest(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SmallTest(const ::android::test::suitebuilder::annotation::SmallTest& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    SmallTest(::android::test::suitebuilder::annotation::SmallTest&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::suitebuilder::annotation::SmallTest& operator=(const ::android::test::suitebuilder::annotation::SmallTest& x) {obj = x.obj; return *this;}
    ::android::test::suitebuilder::annotation::SmallTest& operator=(::android::test::suitebuilder::annotation::SmallTest&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


