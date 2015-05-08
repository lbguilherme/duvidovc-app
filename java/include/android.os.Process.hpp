#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class Process : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Process(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Process(const ::android::os::Process& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Process(::android::os::Process&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Process& operator=(const ::android::os::Process& x) {obj = x.obj; return *this;}
    ::android::os::Process& operator=(::android::os::Process&& x) {obj = std::move(x.obj); return *this;}
    
    Process();
    static int64_t getElapsedCpuTime();
    static int32_t myPid();
    static int32_t myTid();
    static int32_t myUid();
    static int32_t getUidForName(const ::java::lang::String&);
    static int32_t getGidForName(const ::java::lang::String&);
    static void setThreadPriority(int32_t, int32_t);
    static void setThreadPriority(int32_t);
    static int32_t getThreadPriority(int32_t);
    static bool supportsProcesses();
    static void killProcess(int32_t);
    static void sendSignal(int32_t, int32_t);

};
}
}


