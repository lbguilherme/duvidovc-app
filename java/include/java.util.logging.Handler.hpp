#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace logging { class ErrorManager; } } }
namespace java { namespace util { namespace logging { class Filter; } } }
namespace java { namespace util { namespace logging { class Formatter; } } }
namespace java { namespace util { namespace logging { class Level; } } }
namespace java { namespace util { namespace logging { class LogRecord; } } }

namespace java {
namespace util {
namespace logging {
class Handler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Handler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Handler(const ::java::util::logging::Handler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Handler(::java::util::logging::Handler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::Handler& operator=(const ::java::util::logging::Handler& x) {obj = x.obj; return *this;}
    ::java::util::logging::Handler& operator=(::java::util::logging::Handler&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const ;
    void flush() const ;
    void publish(const ::java::util::logging::LogRecord&) const ;
    ::java::lang::String getEncoding() const ;
    ::java::util::logging::ErrorManager getErrorManager() const ;
    ::java::util::logging::Filter getFilter() const ;
    ::java::util::logging::Formatter getFormatter() const ;
    ::java::util::logging::Level getLevel() const ;
    bool isLoggable(const ::java::util::logging::LogRecord&) const ;
    void setEncoding(const ::java::lang::String&) const ;
    void setErrorManager(const ::java::util::logging::ErrorManager&) const ;
    void setFilter(const ::java::util::logging::Filter&) const ;
    void setFormatter(const ::java::util::logging::Formatter&) const ;
    void setLevel(const ::java::util::logging::Level&) const ;

};
}
}
}


