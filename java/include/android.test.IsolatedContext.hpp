#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ContextWrapper.hpp"

namespace android { namespace content { class BroadcastReceiver; } }
namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { class IntentFilter; } }
namespace android { namespace content { class ServiceConnection; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace test {
class IsolatedContext : public virtual ::java::lang::Object,
                        public virtual ::android::content::ContextWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IsolatedContext(jobject _obj) : ::java::lang::Object(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IsolatedContext(const ::android::test::IsolatedContext& x) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    IsolatedContext(::android::test::IsolatedContext&& x) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::IsolatedContext& operator=(const ::android::test::IsolatedContext& x) {obj = x.obj; return *this;}
    ::android::test::IsolatedContext& operator=(::android::test::IsolatedContext&& x) {obj = std::move(x.obj); return *this;}
    
    IsolatedContext(const ::android::content::ContentResolver&, const ::android::content::Context&);
    ::java::util::List getAndClearBroadcastIntents() const;
    ::android::content::ContentResolver getContentResolver() const;
    bool bindService(const ::android::content::Intent&, const ::android::content::ServiceConnection&, int32_t) const;
    ::android::content::Intent registerReceiver(const ::android::content::BroadcastReceiver&, const ::android::content::IntentFilter&) const;
    void unregisterReceiver(const ::android::content::BroadcastReceiver&) const;
    void sendBroadcast(const ::android::content::Intent&) const;
    void sendOrderedBroadcast(const ::android::content::Intent&, const ::java::lang::String&) const;
    int32_t checkUriPermission(const ::android::net::Uri&, const ::java::lang::String&, const ::java::lang::String&, int32_t, int32_t, int32_t) const;
    int32_t checkUriPermission(const ::android::net::Uri&, int32_t, int32_t, int32_t) const;
    ::java::lang::Object getSystemService(const ::java::lang::String&) const;
    ::java::io::File getFilesDir() const;

};
}
}


