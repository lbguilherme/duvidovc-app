#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace content {
class AsyncQueryHandler_WorkerArgs : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AsyncQueryHandler_WorkerArgs(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AsyncQueryHandler_WorkerArgs(const ::android::content::AsyncQueryHandler_WorkerArgs& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AsyncQueryHandler_WorkerArgs(::android::content::AsyncQueryHandler_WorkerArgs&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::AsyncQueryHandler_WorkerArgs& operator=(const ::android::content::AsyncQueryHandler_WorkerArgs& x) {obj = x.obj; return *this;}
    ::android::content::AsyncQueryHandler_WorkerArgs& operator=(::android::content::AsyncQueryHandler_WorkerArgs&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


