#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class Process; } }
namespace java { namespace lang { class Runtime; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Thread; } }

namespace java {
namespace lang {
class Runtime : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Runtime(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Runtime(const ::java::lang::Runtime& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Runtime(::java::lang::Runtime&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Runtime& operator=(const ::java::lang::Runtime& x) {obj = x.obj; return *this;}
    ::java::lang::Runtime& operator=(::java::lang::Runtime&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Process exec(const std::vector< ::java::lang::String>&) const;
    ::java::lang::Process exec(const std::vector< ::java::lang::String>&, const std::vector< ::java::lang::String>&) const;
    ::java::lang::Process exec(const std::vector< ::java::lang::String>&, const std::vector< ::java::lang::String>&, const ::java::io::File&) const;
    ::java::lang::Process exec(const ::java::lang::String&) const;
    ::java::lang::Process exec(const ::java::lang::String&, const std::vector< ::java::lang::String>&) const;
    ::java::lang::Process exec(const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::io::File&) const;
    void exit(int32_t) const;
    int64_t freeMemory() const;
    void gc() const;
    static ::java::lang::Runtime getRuntime();
    void load(const ::java::lang::String&) const;
    void loadLibrary(const ::java::lang::String&) const;
    void runFinalization() const;
    static void runFinalizersOnExit(bool);
    int64_t totalMemory() const;
    void traceInstructions(bool) const;
    void traceMethodCalls(bool) const;
    ::java::io::InputStream getLocalizedInputStream(const ::java::io::InputStream&) const;
    ::java::io::OutputStream getLocalizedOutputStream(const ::java::io::OutputStream&) const;
    void addShutdownHook(const ::java::lang::Thread&) const;
    bool removeShutdownHook(const ::java::lang::Thread&) const;
    void halt(int32_t) const;
    int32_t availableProcessors() const;
    int64_t maxMemory() const;

};
}
}


