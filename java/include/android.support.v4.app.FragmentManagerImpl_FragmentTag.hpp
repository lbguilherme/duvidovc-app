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
class FragmentManagerImpl_FragmentTag : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentManagerImpl_FragmentTag(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentManagerImpl_FragmentTag(const ::android::support::v4::app::FragmentManagerImpl_FragmentTag& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FragmentManagerImpl_FragmentTag(::android::support::v4::app::FragmentManagerImpl_FragmentTag&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentManagerImpl_FragmentTag& operator=(const ::android::support::v4::app::FragmentManagerImpl_FragmentTag& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentManagerImpl_FragmentTag& operator=(::android::support::v4::app::FragmentManagerImpl_FragmentTag&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


