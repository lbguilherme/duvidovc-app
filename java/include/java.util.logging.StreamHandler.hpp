#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.logging.Handler.hpp"

namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace logging { class Formatter; } } }
namespace java { namespace util { namespace logging { class LogRecord; } } }

namespace java {
namespace util {
namespace logging {
class StreamHandler : public virtual ::java::lang::Object,
                      public virtual ::java::util::logging::Handler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StreamHandler(jobject _obj) : ::java::lang::Object(_obj), ::java::util::logging::Handler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StreamHandler(const ::java::util::logging::StreamHandler& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0) {obj = x.obj;}
    StreamHandler(::java::util::logging::StreamHandler&& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::StreamHandler& operator=(const ::java::util::logging::StreamHandler& x) {obj = x.obj; return *this;}
    ::java::util::logging::StreamHandler& operator=(::java::util::logging::StreamHandler&& x) {obj = std::move(x.obj); return *this;}
    
    StreamHandler();
    StreamHandler(const ::java::io::OutputStream&, const ::java::util::logging::Formatter&);
    void setEncoding(const ::java::lang::String&) const;
    void close() const;
    void flush() const;
    void publish(const ::java::util::logging::LogRecord&) const;
    bool isLoggable(const ::java::util::logging::LogRecord&) const;

};
}
}
}


