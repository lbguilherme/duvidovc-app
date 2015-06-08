#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.content.ModernAsyncTask.hpp"
#include "java.lang.Runnable.hpp"


namespace android {
namespace support {
namespace v4 {
namespace content {
class AsyncTaskLoader_LoadTask : public virtual ::java::lang::Object,
                                 public virtual ::android::support::v4::content::ModernAsyncTask,
                                 public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AsyncTaskLoader_LoadTask(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::content::ModernAsyncTask(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AsyncTaskLoader_LoadTask(const ::android::support::v4::content::AsyncTaskLoader_LoadTask& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::ModernAsyncTask((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    AsyncTaskLoader_LoadTask(::android::support::v4::content::AsyncTaskLoader_LoadTask&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::ModernAsyncTask((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::AsyncTaskLoader_LoadTask& operator=(const ::android::support::v4::content::AsyncTaskLoader_LoadTask& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::AsyncTaskLoader_LoadTask& operator=(::android::support::v4::content::AsyncTaskLoader_LoadTask&& x) {obj = std::move(x.obj); return *this;}
    
    void run() const;

};
}
}
}
}


