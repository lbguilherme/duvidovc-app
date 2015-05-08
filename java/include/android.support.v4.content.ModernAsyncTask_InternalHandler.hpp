#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Handler.hpp"

namespace android { namespace os { class Message; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class ModernAsyncTask_InternalHandler : public virtual ::java::lang::Object,
                                        public virtual ::android::os::Handler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ModernAsyncTask_InternalHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Handler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ModernAsyncTask_InternalHandler(const ::android::support::v4::content::ModernAsyncTask_InternalHandler& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj;}
    ModernAsyncTask_InternalHandler(::android::support::v4::content::ModernAsyncTask_InternalHandler&& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::ModernAsyncTask_InternalHandler& operator=(const ::android::support::v4::content::ModernAsyncTask_InternalHandler& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::ModernAsyncTask_InternalHandler& operator=(::android::support::v4::content::ModernAsyncTask_InternalHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void handleMessage(const ::android::os::Message&) const ;

};
}
}
}
}


