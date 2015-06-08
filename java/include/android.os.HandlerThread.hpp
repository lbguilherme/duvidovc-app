#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Thread.hpp"

namespace android { namespace os { class Looper; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class HandlerThread : public virtual ::java::lang::Object,
                      public virtual ::java::lang::Thread {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HandlerThread(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj), ::java::lang::Thread(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HandlerThread(const ::android::os::HandlerThread& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0), ::java::lang::Thread((jobject)0) {obj = x.obj;}
    HandlerThread(::android::os::HandlerThread&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0), ::java::lang::Thread((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::HandlerThread& operator=(const ::android::os::HandlerThread& x) {obj = x.obj; return *this;}
    ::android::os::HandlerThread& operator=(::android::os::HandlerThread&& x) {obj = std::move(x.obj); return *this;}
    
    HandlerThread(const ::java::lang::String&);
    HandlerThread(const ::java::lang::String&, int32_t);
    void run() const;
    ::android::os::Looper getLooper() const;
    bool quit() const;
    int32_t getThreadId() const;

};
}
}


