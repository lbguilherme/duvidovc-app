#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Handler.hpp"

namespace android { namespace content { class AsyncQueryHandler; } }
namespace android { namespace os { class Looper; } }
namespace android { namespace os { class Message; } }

namespace android {
namespace content {
class AsyncQueryHandler_WorkerHandler : public virtual ::java::lang::Object,
                                        public virtual ::android::os::Handler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AsyncQueryHandler_WorkerHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Handler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AsyncQueryHandler_WorkerHandler(const ::android::content::AsyncQueryHandler_WorkerHandler& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj;}
    AsyncQueryHandler_WorkerHandler(::android::content::AsyncQueryHandler_WorkerHandler&& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::AsyncQueryHandler_WorkerHandler& operator=(const ::android::content::AsyncQueryHandler_WorkerHandler& x) {obj = x.obj; return *this;}
    ::android::content::AsyncQueryHandler_WorkerHandler& operator=(::android::content::AsyncQueryHandler_WorkerHandler&& x) {obj = std::move(x.obj); return *this;}
    
    AsyncQueryHandler_WorkerHandler(const ::android::content::AsyncQueryHandler&, const ::android::os::Looper&);
    void handleMessage(const ::android::os::Message&) const;

};
}
}


