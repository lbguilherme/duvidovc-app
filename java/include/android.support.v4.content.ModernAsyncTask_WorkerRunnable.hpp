#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.Callable.hpp"


namespace android {
namespace support {
namespace v4 {
namespace content {
class ModernAsyncTask_WorkerRunnable : public virtual ::java::lang::Object,
                                       public virtual ::java::util::concurrent::Callable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ModernAsyncTask_WorkerRunnable(jobject _obj) : ::java::lang::Object(_obj), ::java::util::concurrent::Callable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ModernAsyncTask_WorkerRunnable(const ::android::support::v4::content::ModernAsyncTask_WorkerRunnable& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Callable((jobject)0) {obj = x.obj;}
    ModernAsyncTask_WorkerRunnable(::android::support::v4::content::ModernAsyncTask_WorkerRunnable&& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Callable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::ModernAsyncTask_WorkerRunnable& operator=(const ::android::support::v4::content::ModernAsyncTask_WorkerRunnable& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::ModernAsyncTask_WorkerRunnable& operator=(::android::support::v4::content::ModernAsyncTask_WorkerRunnable&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


