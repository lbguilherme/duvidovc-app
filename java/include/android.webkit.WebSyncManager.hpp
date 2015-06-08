#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"


namespace android {
namespace webkit {
class WebSyncManager : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebSyncManager(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebSyncManager(const ::android::webkit::WebSyncManager& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    WebSyncManager(::android::webkit::WebSyncManager&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebSyncManager& operator=(const ::android::webkit::WebSyncManager& x) {obj = x.obj; return *this;}
    ::android::webkit::WebSyncManager& operator=(::android::webkit::WebSyncManager&& x) {obj = std::move(x.obj); return *this;}
    
    void run() const;
    void sync() const;
    void resetSync() const;
    void startSync() const;
    void stopSync() const;

};
}
}


