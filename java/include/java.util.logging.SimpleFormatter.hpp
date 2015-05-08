#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.logging.Formatter.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace logging { class LogRecord; } } }

namespace java {
namespace util {
namespace logging {
class SimpleFormatter : public virtual ::java::lang::Object,
                        public virtual ::java::util::logging::Formatter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SimpleFormatter(jobject _obj) : ::java::lang::Object(_obj), ::java::util::logging::Formatter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SimpleFormatter(const ::java::util::logging::SimpleFormatter& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Formatter((jobject)0) {obj = x.obj;}
    SimpleFormatter(::java::util::logging::SimpleFormatter&& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Formatter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::SimpleFormatter& operator=(const ::java::util::logging::SimpleFormatter& x) {obj = x.obj; return *this;}
    ::java::util::logging::SimpleFormatter& operator=(::java::util::logging::SimpleFormatter&& x) {obj = std::move(x.obj); return *this;}
    
    SimpleFormatter();
    ::java::lang::String format(const ::java::util::logging::LogRecord&) const ;

};
}
}
}


