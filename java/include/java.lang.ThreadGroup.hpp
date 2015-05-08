#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Thread_UncaughtExceptionHandler.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Thread; } }
namespace java { namespace lang { class ThreadGroup; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace lang {
class ThreadGroup : public virtual ::java::lang::Object,
                    public virtual ::java::lang::Thread_UncaughtExceptionHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ThreadGroup(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Thread_UncaughtExceptionHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ThreadGroup(const ::java::lang::ThreadGroup& x) : ::java::lang::Object((jobject)0), ::java::lang::Thread_UncaughtExceptionHandler((jobject)0) {obj = x.obj;}
    ThreadGroup(::java::lang::ThreadGroup&& x) : ::java::lang::Object((jobject)0), ::java::lang::Thread_UncaughtExceptionHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ThreadGroup& operator=(const ::java::lang::ThreadGroup& x) {obj = x.obj; return *this;}
    ::java::lang::ThreadGroup& operator=(::java::lang::ThreadGroup&& x) {obj = std::move(x.obj); return *this;}
    
    ThreadGroup(const ::java::lang::String&);
    ThreadGroup(const ::java::lang::ThreadGroup&, const ::java::lang::String&);
    int32_t activeCount() const ;
    int32_t activeGroupCount() const ;
    bool allowThreadSuspension(bool) const ;
    void checkAccess() const ;
    void destroy() const ;
    int32_t enumerate(const std::vector< ::java::lang::Thread>&) const ;
    int32_t enumerate(const std::vector< ::java::lang::Thread>&, bool) const ;
    int32_t enumerate(const std::vector< ::java::lang::ThreadGroup>&) const ;
    int32_t enumerate(const std::vector< ::java::lang::ThreadGroup>&, bool) const ;
    int32_t getMaxPriority() const ;
    ::java::lang::String getName() const ;
    ::java::lang::ThreadGroup getParent() const ;
    void interrupt() const ;
    bool isDaemon() const ;
    bool isDestroyed() const ;
    void list() const ;
    bool parentOf(const ::java::lang::ThreadGroup&) const ;
    void resume() const ;
    void setDaemon(bool) const ;
    void setMaxPriority(int32_t) const ;
    void stop() const ;
    void suspend() const ;
    ::java::lang::String toString() const ;
    void uncaughtException(const ::java::lang::Thread&, const ::java::lang::Throwable&) const ;

};
}
}


