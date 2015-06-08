#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class IBinder_DeathRecipient; } }
namespace android { namespace os { class IInterface; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class IBinder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IBinder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IBinder(const ::android::os::IBinder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    IBinder(::android::os::IBinder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::IBinder& operator=(const ::android::os::IBinder& x) {obj = x.obj; return *this;}
    ::android::os::IBinder& operator=(::android::os::IBinder&& x) {obj = std::move(x.obj); return *this;}
    
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

#include "android.os.IBinder_DeathRecipient.hpp"

