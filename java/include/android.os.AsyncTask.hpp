#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class AsyncTask; } }
namespace android { namespace os { class AsyncTask_Status; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace util { namespace concurrent { class Executor; } } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace android {
namespace os {
class AsyncTask : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AsyncTask(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AsyncTask(const ::android::os::AsyncTask& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AsyncTask(::android::os::AsyncTask&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::AsyncTask& operator=(const ::android::os::AsyncTask& x) {obj = x.obj; return *this;}
    ::android::os::AsyncTask& operator=(::android::os::AsyncTask&& x) {obj = std::move(x.obj); return *this;}
    
    AsyncTask();
    ::android::os::AsyncTask_Status getStatus() const ;
    bool isCancelled() const ;
    bool cancel(bool) const ;
    ::java::lang::Object get() const ;
    ::java::lang::Object get(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    ::android::os::AsyncTask execute(const std::vector< ::java::lang::Object>&) const ;
    ::android::os::AsyncTask executeOnExecutor(const ::java::util::concurrent::Executor&, const std::vector< ::java::lang::Object>&) const ;
    static void execute(const ::java::lang::Runnable&);

};
}
}

#include "android.os.AsyncTask_Status.hpp"

