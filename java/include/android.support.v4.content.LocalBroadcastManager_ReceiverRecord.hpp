#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class LocalBroadcastManager_ReceiverRecord : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocalBroadcastManager_ReceiverRecord(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocalBroadcastManager_ReceiverRecord(const ::android::support::v4::content::LocalBroadcastManager_ReceiverRecord& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LocalBroadcastManager_ReceiverRecord(::android::support::v4::content::LocalBroadcastManager_ReceiverRecord&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::LocalBroadcastManager_ReceiverRecord& operator=(const ::android::support::v4::content::LocalBroadcastManager_ReceiverRecord& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::LocalBroadcastManager_ReceiverRecord& operator=(::android::support::v4::content::LocalBroadcastManager_ReceiverRecord&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String toString() const;

};
}
}
}
}


