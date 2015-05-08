#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace content { class ModernAsyncTask; } } } }
namespace android { namespace support { namespace v4 { namespace content { class ModernAsyncTask_Status; } } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { namespace concurrent { class Executor; } } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class ModernAsyncTask : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ModernAsyncTask(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ModernAsyncTask(const ::android::support::v4::content::ModernAsyncTask& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ModernAsyncTask(::android::support::v4::content::ModernAsyncTask&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::ModernAsyncTask& operator=(const ::android::support::v4::content::ModernAsyncTask& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::ModernAsyncTask& operator=(::android::support::v4::content::ModernAsyncTask&& x) {obj = std::move(x.obj); return *this;}
    
    static void init();
    static void setDefaultExecutor(const ::java::util::concurrent::Executor&);
    ModernAsyncTask();
    ::android::support::v4::content::ModernAsyncTask_Status getStatus() const ;
    bool isCancelled() const ;
    bool cancel(bool) const ;
    ::java::lang::Object get() const ;
    ::java::lang::Object get(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    ::android::support::v4::content::ModernAsyncTask execute(const std::vector< ::java::lang::Object>&) const ;
    ::android::support::v4::content::ModernAsyncTask executeOnExecutor(const ::java::util::concurrent::Executor&, const std::vector< ::java::lang::Object>&) const ;
    static void execute(const ::java::lang::Runnable&);

};
}
}
}
}

#include "android.support.v4.content.ModernAsyncTask_AsyncTaskResult.hpp"
#include "android.support.v4.content.ModernAsyncTask_InternalHandler.hpp"
#include "android.support.v4.content.ModernAsyncTask_Status.hpp"
#include "android.support.v4.content.ModernAsyncTask_WorkerRunnable.hpp"

