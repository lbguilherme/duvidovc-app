#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class SyncResult; } }
namespace android { namespace os { class IBinder; } }

namespace android {
namespace content {
class SyncContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SyncContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SyncContext(const ::android::content::SyncContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SyncContext(::android::content::SyncContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::SyncContext& operator=(const ::android::content::SyncContext& x) {obj = x.obj; return *this;}
    ::android::content::SyncContext& operator=(::android::content::SyncContext&& x) {obj = std::move(x.obj); return *this;}
    
    void onFinished(const ::android::content::SyncResult&) const ;
    ::android::os::IBinder getSyncContextBinder() const ;

};
}
}


