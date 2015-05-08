#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace content {
class SyncStatusObserver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SyncStatusObserver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SyncStatusObserver(const ::android::content::SyncStatusObserver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SyncStatusObserver(::android::content::SyncStatusObserver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::SyncStatusObserver& operator=(const ::android::content::SyncStatusObserver& x) {obj = x.obj; return *this;}
    ::android::content::SyncStatusObserver& operator=(::android::content::SyncStatusObserver&& x) {obj = std::move(x.obj); return *this;}
    
    void onStatusChanged(int32_t) const ;

};
}
}


