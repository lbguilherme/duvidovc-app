#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Notification; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class NotificationManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationManager(const ::android::app::NotificationManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationManager(::android::app::NotificationManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::NotificationManager& operator=(const ::android::app::NotificationManager& x) {obj = x.obj; return *this;}
    ::android::app::NotificationManager& operator=(::android::app::NotificationManager&& x) {obj = std::move(x.obj); return *this;}
    
    void notify(int32_t, const ::android::app::Notification&) const;
    void notify(const ::java::lang::String&, int32_t, const ::android::app::Notification&) const;
    void cancel(int32_t) const;
    void cancel(const ::java::lang::String&, int32_t) const;
    void cancelAll() const;

};
}
}


