#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.logging.Formatter.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace logging { class Handler; } } }
namespace java { namespace util { namespace logging { class LogRecord; } } }

namespace java {
namespace util {
namespace logging {
class XMLFormatter : public virtual ::java::lang::Object,
                     public virtual ::java::util::logging::Formatter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XMLFormatter(jobject _obj) : ::java::lang::Object(_obj), ::java::util::logging::Formatter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XMLFormatter(const ::java::util::logging::XMLFormatter& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Formatter((jobject)0) {obj = x.obj;}
    XMLFormatter(::java::util::logging::XMLFormatter&& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Formatter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::XMLFormatter& operator=(const ::java::util::logging::XMLFormatter& x) {obj = x.obj; return *this;}
    ::java::util::logging::XMLFormatter& operator=(::java::util::logging::XMLFormatter&& x) {obj = std::move(x.obj); return *this;}
    
    XMLFormatter();
    ::java::lang::String format(const ::java::util::logging::LogRecord&) const;
    ::java::lang::String getHead(const ::java::util::logging::Handler&) const;
    ::java::lang::String getTail(const ::java::util::logging::Handler&) const;

};
}
}
}


