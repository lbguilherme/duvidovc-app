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
class ModernAsyncTask_AsyncTaskResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ModernAsyncTask_AsyncTaskResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ModernAsyncTask_AsyncTaskResult(const ::android::support::v4::content::ModernAsyncTask_AsyncTaskResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ModernAsyncTask_AsyncTaskResult(::android::support::v4::content::ModernAsyncTask_AsyncTaskResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::ModernAsyncTask_AsyncTaskResult& operator=(const ::android::support::v4::content::ModernAsyncTask_AsyncTaskResult& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::ModernAsyncTask_AsyncTaskResult& operator=(::android::support::v4::content::ModernAsyncTask_AsyncTaskResult&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


