#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.webkit.WebSyncManager.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace webkit { class CookieSyncManager; } }

namespace android {
namespace webkit {
class CookieSyncManager : public virtual ::java::lang::Object,
                          public virtual ::android::webkit::WebSyncManager {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieSyncManager(jobject _obj) : ::java::lang::Object(_obj), ::android::webkit::WebSyncManager(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieSyncManager(const ::android::webkit::CookieSyncManager& x) : ::java::lang::Object((jobject)0), ::android::webkit::WebSyncManager((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    CookieSyncManager(::android::webkit::CookieSyncManager&& x) : ::java::lang::Object((jobject)0), ::android::webkit::WebSyncManager((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::CookieSyncManager& operator=(const ::android::webkit::CookieSyncManager& x) {obj = x.obj; return *this;}
    ::android::webkit::CookieSyncManager& operator=(::android::webkit::CookieSyncManager&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::webkit::CookieSyncManager getInstance();
    static ::android::webkit::CookieSyncManager createInstance(const ::android::content::Context&);
    void stopSync() const ;
    void startSync() const ;
    void resetSync() const ;
    void sync() const ;
    void run() const ;

};
}
}


