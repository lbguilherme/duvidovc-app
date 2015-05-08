#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace content {
class LocalBroadcastManager_BroadcastRecord : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocalBroadcastManager_BroadcastRecord(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocalBroadcastManager_BroadcastRecord(const ::android::support::v4::content::LocalBroadcastManager_BroadcastRecord& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LocalBroadcastManager_BroadcastRecord(::android::support::v4::content::LocalBroadcastManager_BroadcastRecord&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::LocalBroadcastManager_BroadcastRecord& operator=(const ::android::support::v4::content::LocalBroadcastManager_BroadcastRecord& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::LocalBroadcastManager_BroadcastRecord& operator=(::android::support::v4::content::LocalBroadcastManager_BroadcastRecord&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


