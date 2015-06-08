#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace os {
class MessageQueue_IdleHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MessageQueue_IdleHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MessageQueue_IdleHandler(const ::android::os::MessageQueue_IdleHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MessageQueue_IdleHandler(::android::os::MessageQueue_IdleHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::MessageQueue_IdleHandler& operator=(const ::android::os::MessageQueue_IdleHandler& x) {obj = x.obj; return *this;}
    ::android::os::MessageQueue_IdleHandler& operator=(::android::os::MessageQueue_IdleHandler&& x) {obj = std::move(x.obj); return *this;}
    
    bool queueIdle() const;

};
}
}


