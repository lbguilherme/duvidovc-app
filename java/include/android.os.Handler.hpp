#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Handler_Callback; } }
namespace android { namespace os { class Looper; } }
namespace android { namespace os { class Message; } }
namespace android { namespace util { class Printer; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class Handler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Handler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Handler(const ::android::os::Handler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Handler(::android::os::Handler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Handler& operator=(const ::android::os::Handler& x) {obj = x.obj; return *this;}
    ::android::os::Handler& operator=(::android::os::Handler&& x) {obj = std::move(x.obj); return *this;}
    
    Handler();
    Handler(const ::android::os::Handler_Callback&);
    Handler(const ::android::os::Looper&);
    Handler(const ::android::os::Looper&, const ::android::os::Handler_Callback&);
    void handleMessage(const ::android::os::Message&) const;
    void dispatchMessage(const ::android::os::Message&) const;
    ::java::lang::String getMessageName(const ::android::os::Message&) const;
    ::android::os::Message obtainMessage() const;
    ::android::os::Message obtainMessage(int32_t) const;
    ::android::os::Message obtainMessage(int32_t, const ::java::lang::Object&) const;
    ::android::os::Message obtainMessage(int32_t, int32_t, int32_t) const;
    ::android::os::Message obtainMessage(int32_t, int32_t, int32_t, const ::java::lang::Object&) const;
    bool post(const ::java::lang::Runnable&) const;
    bool postAtTime(const ::java::lang::Runnable&, int64_t) const;
    bool postAtTime(const ::java::lang::Runnable&, const ::java::lang::Object&, int64_t) const;
    bool postDelayed(const ::java::lang::Runnable&, int64_t) const;
    bool postAtFrontOfQueue(const ::java::lang::Runnable&) const;
    void removeCallbacks(const ::java::lang::Runnable&) const;
    void removeCallbacks(const ::java::lang::Runnable&, const ::java::lang::Object&) const;
    bool sendMessage(const ::android::os::Message&) const;
    bool sendEmptyMessage(int32_t) const;
    bool sendEmptyMessageDelayed(int32_t, int64_t) const;
    bool sendEmptyMessageAtTime(int32_t, int64_t) const;
    bool sendMessageDelayed(const ::android::os::Message&, int64_t) const;
    bool sendMessageAtTime(const ::android::os::Message&, int64_t) const;
    bool sendMessageAtFrontOfQueue(const ::android::os::Message&) const;
    void removeMessages(int32_t) const;
    void removeMessages(int32_t, const ::java::lang::Object&) const;
    void removeCallbacksAndMessages(const ::java::lang::Object&) const;
    bool hasMessages(int32_t) const;
    bool hasMessages(int32_t, const ::java::lang::Object&) const;
    ::android::os::Looper getLooper() const;
    void dump(const ::android::util::Printer&, const ::java::lang::String&) const;
    ::java::lang::String toString() const;

};
}
}

#include "android.os.Handler_Callback.hpp"

