#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace app {
class FragmentActivity_NonConfigurationInstances : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentActivity_NonConfigurationInstances(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentActivity_NonConfigurationInstances(const ::android::support::v4::app::FragmentActivity_NonConfigurationInstances& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FragmentActivity_NonConfigurationInstances(::android::support::v4::app::FragmentActivity_NonConfigurationInstances&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentActivity_NonConfigurationInstances& operator=(const ::android::support::v4::app::FragmentActivity_NonConfigurationInstances& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentActivity_NonConfigurationInstances& operator=(::android::support::v4::app::FragmentActivity_NonConfigurationInstances&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


