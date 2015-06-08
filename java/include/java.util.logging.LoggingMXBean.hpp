#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace java {
namespace util {
namespace logging {
class LoggingMXBean : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoggingMXBean(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoggingMXBean(const ::java::util::logging::LoggingMXBean& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LoggingMXBean(::java::util::logging::LoggingMXBean&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::LoggingMXBean& operator=(const ::java::util::logging::LoggingMXBean& x) {obj = x.obj; return *this;}
    ::java::util::logging::LoggingMXBean& operator=(::java::util::logging::LoggingMXBean&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getLoggerLevel(const ::java::lang::String&) const;
    ::java::util::List getLoggerNames() const;
    ::java::lang::String getParentLoggerName(const ::java::lang::String&) const;
    void setLoggerLevel(const ::java::lang::String&, const ::java::lang::String&) const;

};
}
}
}


