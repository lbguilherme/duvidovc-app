#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Debug_MemoryInfo; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class Debug : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Debug(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Debug(const ::android::os::Debug& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Debug(::android::os::Debug&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Debug& operator=(const ::android::os::Debug& x) {obj = x.obj; return *this;}
    ::android::os::Debug& operator=(::android::os::Debug&& x) {obj = std::move(x.obj); return *this;}
    
    static void waitForDebugger();
    static bool waitingForDebugger();
    static bool isDebuggerConnected();
    static void changeDebugPort(int32_t);
    static void startNativeTracing();
    static void stopNativeTracing();
    static void enableEmulatorTraceOutput();
    static void startMethodTracing();
    static void startMethodTracing(const ::java::lang::String&);
    static void startMethodTracing(const ::java::lang::String&, int32_t);
    static void startMethodTracing(const ::java::lang::String&, int32_t, int32_t);
    static void stopMethodTracing();
    static int64_t threadCpuTimeNanos();
    static void startAllocCounting();
    static void stopAllocCounting();
    static int32_t getGlobalAllocCount();
    static int32_t getGlobalAllocSize();
    static int32_t getGlobalFreedCount();
    static int32_t getGlobalFreedSize();
    static int32_t getGlobalClassInitCount();
    static int32_t getGlobalClassInitTime();
    static int32_t getGlobalExternalAllocCount();
    static int32_t getGlobalExternalAllocSize();
    static int32_t getGlobalExternalFreedCount();
    static int32_t getGlobalExternalFreedSize();
    static int32_t getGlobalGcInvocationCount();
    static int32_t getThreadAllocCount();
    static int32_t getThreadAllocSize();
    static int32_t getThreadExternalAllocCount();
    static int32_t getThreadExternalAllocSize();
    static int32_t getThreadGcInvocationCount();
    static void resetGlobalAllocCount();
    static void resetGlobalAllocSize();
    static void resetGlobalFreedCount();
    static void resetGlobalFreedSize();
    static void resetGlobalClassInitCount();
    static void resetGlobalClassInitTime();
    static void resetGlobalExternalAllocCount();
    static void resetGlobalExternalAllocSize();
    static void resetGlobalExternalFreedCount();
    static void resetGlobalExternalFreedSize();
    static void resetGlobalGcInvocationCount();
    static void resetThreadAllocCount();
    static void resetThreadAllocSize();
    static void resetThreadExternalAllocCount();
    static void resetThreadExternalAllocSize();
    static void resetThreadGcInvocationCount();
    static void resetAllCounts();
    static int64_t getNativeHeapSize();
    static int64_t getNativeHeapAllocatedSize();
    static int64_t getNativeHeapFreeSize();
    static void getMemoryInfo(const ::android::os::Debug_MemoryInfo&);
    static int64_t getPss();
    static int32_t setAllocationLimit(int32_t);
    static int32_t setGlobalAllocationLimit(int32_t);
    static void printLoadedClasses(int32_t);
    static int32_t getLoadedClassCount();
    static void dumpHprofData(const ::java::lang::String&);
    static int32_t getBinderSentTransactions();
    static int32_t getBinderReceivedTransactions();
    static int32_t getBinderLocalObjectCount();
    static int32_t getBinderProxyObjectCount();
    static int32_t getBinderDeathObjectCount();
    static bool dumpService(const ::java::lang::String&, const ::java::io::FileDescriptor&, const std::vector< ::java::lang::String>&);

};
}
}

#include "android.os.Debug_InstructionCount.hpp"
#include "android.os.Debug_MemoryInfo.hpp"

