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
class FragmentTabHost_TabInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentTabHost_TabInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentTabHost_TabInfo(const ::android::support::v4::app::FragmentTabHost_TabInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FragmentTabHost_TabInfo(::android::support::v4::app::FragmentTabHost_TabInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentTabHost_TabInfo& operator=(const ::android::support::v4::app::FragmentTabHost_TabInfo& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentTabHost_TabInfo& operator=(::android::support::v4::app::FragmentTabHost_TabInfo&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


