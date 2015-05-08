#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace logging { class Handler; } } }
namespace java { namespace util { namespace logging { class LogRecord; } } }

namespace java {
namespace util {
namespace logging {
class Formatter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Formatter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Formatter(const ::java::util::logging::Formatter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Formatter(::java::util::logging::Formatter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::Formatter& operator=(const ::java::util::logging::Formatter& x) {obj = x.obj; return *this;}
    ::java::util::logging::Formatter& operator=(::java::util::logging::Formatter&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String format(const ::java::util::logging::LogRecord&) const ;
    ::java::lang::String formatMessage(const ::java::util::logging::LogRecord&) const ;
    ::java::lang::String getHead(const ::java::util::logging::Handler&) const ;
    ::java::lang::String getTail(const ::java::util::logging::Handler&) const ;

};
}
}
}


