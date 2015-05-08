#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class StackTraceElement; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Thread; } }
namespace java { namespace lang { class Thread_State; } }
namespace java { namespace lang { class Thread_UncaughtExceptionHandler; } }
namespace java { namespace lang { class ThreadGroup; } }
namespace java { namespace lang { class Throwable; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace lang {
class Thread : public virtual ::java::lang::Object,
               public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Thread(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Thread(const ::java::lang::Thread& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    Thread(::java::lang::Thread&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Thread& operator=(const ::java::lang::Thread& x) {obj = x.obj; return *this;}
    ::java::lang::Thread& operator=(::java::lang::Thread&& x) {obj = std::move(x.obj); return *this;}
    
    Thread();
    Thread(const ::java::lang::Runnable&);
    Thread(const ::java::lang::Runnable&, const ::java::lang::String&);
    Thread(const ::java::lang::String&);
    Thread(const ::java::lang::ThreadGroup&, const ::java::lang::Runnable&);
    Thread(const ::java::lang::ThreadGroup&, const ::java::lang::Runnable&, const ::java::lang::String&);
    Thread(const ::java::lang::ThreadGroup&, const ::java::lang::String&);
    Thread(const ::java::lang::ThreadGroup&, const ::java::lang::Runnable&, const ::java::lang::String&, int64_t);
    static int32_t activeCount();
    void checkAccess() const ;
    int32_t countStackFrames() const ;
    static ::java::lang::Thread currentThread();
    void destroy() const ;
    static void dumpStack();
    static int32_t enumerate(const std::vector< ::java::lang::Thread>&);
    static ::java::util::Map getAllStackTraces();
    ::java::lang::ClassLoader getContextClassLoader() const ;
    static ::java::lang::Thread_UncaughtExceptionHandler getDefaultUncaughtExceptionHandler();
    int64_t getId() const ;
    ::java::lang::String getName() const ;
    int32_t getPriority() const ;
    std::vector< ::java::lang::StackTraceElement> getStackTrace() const ;
    ::java::lang::Thread_State getState() const ;
    ::java::lang::ThreadGroup getThreadGroup() const ;
    ::java::lang::Thread_UncaughtExceptionHandler getUncaughtExceptionHandler() const ;
    void interrupt() const ;
    static bool interrupted();
    bool isAlive() const ;
    bool isDaemon() const ;
    bool isInterrupted() const ;
    void join() const ;
    void join(int64_t) const ;
    void join(int64_t, int32_t) const ;
    void resume() const ;
    void run() const ;
    void setContextClassLoader(const ::java::lang::ClassLoader&) const ;
    void setDaemon(bool) const ;
    static void setDefaultUncaughtExceptionHandler(const ::java::lang::Thread_UncaughtExceptionHandler&);
    void setName(const ::java::lang::String&) const ;
    void setPriority(int32_t) const ;
    void setUncaughtExceptionHandler(const ::java::lang::Thread_UncaughtExceptionHandler&) const ;
    static void sleep(int64_t);
    static void sleep(int64_t, int32_t);
    void start() const ;
    void stop() const ;
    void stop(const ::java::lang::Throwable&) const ;
    void suspend() const ;
    ::java::lang::String toString() const ;
    static void yield();
    static bool holdsLock(const ::java::lang::Object&);

};
}
}

#include "java.lang.Thread_State.hpp"
#include "java.lang.Thread_UncaughtExceptionHandler.hpp"

