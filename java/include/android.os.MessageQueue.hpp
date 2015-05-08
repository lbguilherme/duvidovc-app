#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class MessageQueue_IdleHandler; } }

namespace android {
namespace os {
class MessageQueue : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MessageQueue(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MessageQueue(const ::android::os::MessageQueue& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MessageQueue(::android::os::MessageQueue&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::MessageQueue& operator=(const ::android::os::MessageQueue& x) {obj = x.obj; return *this;}
    ::android::os::MessageQueue& operator=(::android::os::MessageQueue&& x) {obj = std::move(x.obj); return *this;}
    
    void addIdleHandler(const ::android::os::MessageQueue_IdleHandler&) const ;
    void removeIdleHandler(const ::android::os::MessageQueue_IdleHandler&) const ;

};
}
}

#include "android.os.MessageQueue_IdleHandler.hpp"

