#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Handler.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class ContentValues; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Message; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class AsyncQueryHandler : public virtual ::java::lang::Object,
                          public virtual ::android::os::Handler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AsyncQueryHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Handler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AsyncQueryHandler(const ::android::content::AsyncQueryHandler& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj;}
    AsyncQueryHandler(::android::content::AsyncQueryHandler&& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::AsyncQueryHandler& operator=(const ::android::content::AsyncQueryHandler& x) {obj = x.obj; return *this;}
    ::android::content::AsyncQueryHandler& operator=(::android::content::AsyncQueryHandler&& x) {obj = std::move(x.obj); return *this;}
    
    AsyncQueryHandler(const ::android::content::ContentResolver&);
    void startQuery(int32_t, const ::java::lang::Object&, const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&) const ;
    void cancelOperation(int32_t) const ;
    void startInsert(int32_t, const ::java::lang::Object&, const ::android::net::Uri&, const ::android::content::ContentValues&) const ;
    void startUpdate(int32_t, const ::java::lang::Object&, const ::android::net::Uri&, const ::android::content::ContentValues&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    void startDelete(int32_t, const ::java::lang::Object&, const ::android::net::Uri&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    void handleMessage(const ::android::os::Message&) const ;

};
}
}

#include "android.content.AsyncQueryHandler_WorkerArgs.hpp"
#include "android.content.AsyncQueryHandler_WorkerHandler.hpp"

