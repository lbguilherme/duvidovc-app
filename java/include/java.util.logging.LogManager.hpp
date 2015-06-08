#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace beans { class PropertyChangeListener; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Enumeration; } }
namespace java { namespace util { namespace logging { class LogManager; } } }
namespace java { namespace util { namespace logging { class Logger; } } }
namespace java { namespace util { namespace logging { class LoggingMXBean; } } }

namespace java {
namespace util {
namespace logging {
class LogManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LogManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LogManager(const ::java::util::logging::LogManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LogManager(::java::util::logging::LogManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::LogManager& operator=(const ::java::util::logging::LogManager& x) {obj = x.obj; return *this;}
    ::java::util::logging::LogManager& operator=(::java::util::logging::LogManager&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::logging::LoggingMXBean getLoggingMXBean();
    void checkAccess() const;
    bool addLogger(const ::java::util::logging::Logger&) const;
    ::java::util::logging::Logger getLogger(const ::java::lang::String&) const;
    ::java::util::Enumeration getLoggerNames() const;
    static ::java::util::logging::LogManager getLogManager();
    ::java::lang::String getProperty(const ::java::lang::String&) const;
    void readConfiguration() const;
    void readConfiguration(const ::java::io::InputStream&) const;
    void reset() const;
    void addPropertyChangeListener(const ::java::beans::PropertyChangeListener&) const;
    void removePropertyChangeListener(const ::java::beans::PropertyChangeListener&) const;

};
}
}
}


