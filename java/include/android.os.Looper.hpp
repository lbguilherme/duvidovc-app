#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Looper; } }
namespace android { namespace os { class MessageQueue; } }
namespace android { namespace util { class Printer; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Thread; } }

namespace android {
namespace os {
class Looper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Looper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Looper(const ::android::os::Looper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Looper(::android::os::Looper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Looper& operator=(const ::android::os::Looper& x) {obj = x.obj; return *this;}
    ::android::os::Looper& operator=(::android::os::Looper&& x) {obj = std::move(x.obj); return *this;}
    
    static void prepare();
    static void prepareMainLooper();
    static ::android::os::Looper getMainLooper();
    static void loop();
    static ::android::os::Looper myLooper();
    void setMessageLogging(const ::android::util::Printer&) const;
    static ::android::os::MessageQueue myQueue();
    void quit() const;
    ::java::lang::Thread getThread() const;
    void dump(const ::android::util::Printer&, const ::java::lang::String&) const;
    ::java::lang::String toString() const;

};
}
}


