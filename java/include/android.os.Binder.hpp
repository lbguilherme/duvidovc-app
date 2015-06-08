#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.IBinder.hpp"

namespace android { namespace os { class IBinder_DeathRecipient; } }
namespace android { namespace os { class IInterface; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class Binder : public virtual ::java::lang::Object,
               public virtual ::android::os::IBinder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Binder(jobject _obj) : ::java::lang::Object(_obj), ::android::os::IBinder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Binder(const ::android::os::Binder& x) : ::java::lang::Object((jobject)0), ::android::os::IBinder((jobject)0) {obj = x.obj;}
    Binder(::android::os::Binder&& x) : ::java::lang::Object((jobject)0), ::android::os::IBinder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Binder& operator=(const ::android::os::Binder& x) {obj = x.obj; return *this;}
    ::android::os::Binder& operator=(::android::os::Binder&& x) {obj = std::move(x.obj); return *this;}
    
    Binder();
    static int32_t getCallingPid();
    static int32_t getCallingUid();
    static int64_t clearCallingIdentity();
    static void restoreCallingIdentity(int64_t);
    static void flushPendingCommands();
    static void joinThreadPool();
    void attachInterface(const ::android::os::IInterface&, const ::java::lang::String&) const;
    ::java::lang::String getInterfaceDescriptor() const;
    bool pingBinder() const;
    bool isBinderAlive() const;
    ::android::os::IInterface queryLocalInterface(const ::java::lang::String&) const;
    void dump(const ::java::io::FileDescriptor&, const std::vector< ::java::lang::String>&) const;
    void dumpAsync(const ::java::io::FileDescriptor&, const std::vector< ::java::lang::String>&) const;
    bool transact(int32_t, const ::android::os::Parcel&, const ::android::os::Parcel&, int32_t) const;
    void linkToDeath(const ::android::os::IBinder_DeathRecipient&, int32_t) const;
    bool unlinkToDeath(const ::android::os::IBinder_DeathRecipient&, int32_t) const;

};
}
}


