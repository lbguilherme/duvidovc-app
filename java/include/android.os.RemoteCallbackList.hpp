#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class IInterface; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace os {
class RemoteCallbackList : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteCallbackList(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteCallbackList(const ::android::os::RemoteCallbackList& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RemoteCallbackList(::android::os::RemoteCallbackList&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::RemoteCallbackList& operator=(const ::android::os::RemoteCallbackList& x) {obj = x.obj; return *this;}
    ::android::os::RemoteCallbackList& operator=(::android::os::RemoteCallbackList&& x) {obj = std::move(x.obj); return *this;}
    
    RemoteCallbackList();
    bool register_(const ::android::os::IInterface&) const;
    bool register_(const ::android::os::IInterface&, const ::java::lang::Object&) const;
    bool unregister(const ::android::os::IInterface&) const;
    void kill() const;
    void onCallbackDied(const ::android::os::IInterface&) const;
    void onCallbackDied(const ::android::os::IInterface&, const ::java::lang::Object&) const;
    int32_t beginBroadcast() const;
    ::android::os::IInterface getBroadcastItem(int32_t) const;
    ::java::lang::Object getBroadcastCookie(int32_t) const;
    void finishBroadcast() const;

};
}
}


