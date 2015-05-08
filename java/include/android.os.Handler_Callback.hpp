#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Message; } }

namespace android {
namespace os {
class Handler_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Handler_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Handler_Callback(const ::android::os::Handler_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Handler_Callback(::android::os::Handler_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Handler_Callback& operator=(const ::android::os::Handler_Callback& x) {obj = x.obj; return *this;}
    ::android::os::Handler_Callback& operator=(::android::os::Handler_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    bool handleMessage(const ::android::os::Message&) const ;

};
}
}


