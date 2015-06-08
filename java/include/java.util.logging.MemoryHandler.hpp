#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.logging.Handler.hpp"

namespace java { namespace util { namespace logging { class Handler; } } }
namespace java { namespace util { namespace logging { class Level; } } }
namespace java { namespace util { namespace logging { class LogRecord; } } }

namespace java {
namespace util {
namespace logging {
class MemoryHandler : public virtual ::java::lang::Object,
                      public virtual ::java::util::logging::Handler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MemoryHandler(jobject _obj) : ::java::lang::Object(_obj), ::java::util::logging::Handler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MemoryHandler(const ::java::util::logging::MemoryHandler& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0) {obj = x.obj;}
    MemoryHandler(::java::util::logging::MemoryHandler&& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::MemoryHandler& operator=(const ::java::util::logging::MemoryHandler& x) {obj = x.obj; return *this;}
    ::java::util::logging::MemoryHandler& operator=(::java::util::logging::MemoryHandler&& x) {obj = std::move(x.obj); return *this;}
    
    MemoryHandler();
    MemoryHandler(const ::java::util::logging::Handler&, int32_t, const ::java::util::logging::Level&);
    void close() const;
    void flush() const;
    void publish(const ::java::util::logging::LogRecord&) const;
    ::java::util::logging::Level getPushLevel() const;
    bool isLoggable(const ::java::util::logging::LogRecord&) const;
    void push() const;
    void setPushLevel(const ::java::util::logging::Level&) const;

};
}
}
}


