#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace os {
class IBinder_DeathRecipient : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IBinder_DeathRecipient(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IBinder_DeathRecipient(const ::android::os::IBinder_DeathRecipient& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    IBinder_DeathRecipient(::android::os::IBinder_DeathRecipient&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::IBinder_DeathRecipient& operator=(const ::android::os::IBinder_DeathRecipient& x) {obj = x.obj; return *this;}
    ::android::os::IBinder_DeathRecipient& operator=(::android::os::IBinder_DeathRecipient&& x) {obj = std::move(x.obj); return *this;}
    
    void binderDied() const ;

};
}
}


