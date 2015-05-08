#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class IBinder; } }

namespace android {
namespace os {
class IInterface : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IInterface(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IInterface(const ::android::os::IInterface& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    IInterface(::android::os::IInterface&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::IInterface& operator=(const ::android::os::IInterface& x) {obj = x.obj; return *this;}
    ::android::os::IInterface& operator=(::android::os::IInterface&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::os::IBinder asBinder() const ;

};
}
}


