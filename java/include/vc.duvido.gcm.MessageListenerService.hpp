#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }

namespace vc {
namespace duvido {
namespace gcm {
class MessageListenerService : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MessageListenerService(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MessageListenerService(const ::vc::duvido::gcm::MessageListenerService& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MessageListenerService(::vc::duvido::gcm::MessageListenerService&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::gcm::MessageListenerService& operator=(const ::vc::duvido::gcm::MessageListenerService& x) {obj = x.obj; return *this;}
    ::vc::duvido::gcm::MessageListenerService& operator=(::vc::duvido::gcm::MessageListenerService&& x) {obj = std::move(x.obj); return *this;}
    
    static void jniInitializeNative();
    MessageListenerService();
    void onMessageReceived(const ::java::lang::String&, const ::android::os::Bundle&) const;

};
}
}
}


