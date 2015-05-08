#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"


namespace android {
namespace support {
namespace v4 {
namespace app {
class FragmentTransaction_Transit : public virtual ::java::lang::Object,
                                    public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentTransaction_Transit(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentTransaction_Transit(const ::android::support::v4::app::FragmentTransaction_Transit& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    FragmentTransaction_Transit(::android::support::v4::app::FragmentTransaction_Transit&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentTransaction_Transit& operator=(const ::android::support::v4::app::FragmentTransaction_Transit& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentTransaction_Transit& operator=(::android::support::v4::app::FragmentTransaction_Transit&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


