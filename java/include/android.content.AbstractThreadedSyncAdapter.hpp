#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace accounts { class Account; } }
namespace android { namespace content { class ContentProviderClient; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class SyncResult; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class IBinder; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Thread; } }

namespace android {
namespace content {
class AbstractThreadedSyncAdapter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractThreadedSyncAdapter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractThreadedSyncAdapter(const ::android::content::AbstractThreadedSyncAdapter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AbstractThreadedSyncAdapter(::android::content::AbstractThreadedSyncAdapter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::AbstractThreadedSyncAdapter& operator=(const ::android::content::AbstractThreadedSyncAdapter& x) {obj = x.obj; return *this;}
    ::android::content::AbstractThreadedSyncAdapter& operator=(::android::content::AbstractThreadedSyncAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractThreadedSyncAdapter(const ::android::content::Context&, bool);
    AbstractThreadedSyncAdapter(const ::android::content::Context&, bool, bool);
    ::android::content::Context getContext() const;
    ::android::os::IBinder getSyncAdapterBinder() const;
    void onPerformSync(const ::android::accounts::Account&, const ::android::os::Bundle&, const ::java::lang::String&, const ::android::content::ContentProviderClient&, const ::android::content::SyncResult&) const;
    void onSyncCanceled() const;
    void onSyncCanceled(const ::java::lang::Thread&) const;

};
}
}


