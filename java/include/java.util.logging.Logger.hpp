#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }
namespace java { namespace util { class ResourceBundle; } }
namespace java { namespace util { namespace logging { class Filter; } } }
namespace java { namespace util { namespace logging { class Handler; } } }
namespace java { namespace util { namespace logging { class Level; } } }
namespace java { namespace util { namespace logging { class LogRecord; } } }
namespace java { namespace util { namespace logging { class Logger; } } }

namespace java {
namespace util {
namespace logging {
class Logger : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Logger(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Logger(const ::java::util::logging::Logger& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Logger(::java::util::logging::Logger&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::Logger& operator=(const ::java::util::logging::Logger& x) {obj = x.obj; return *this;}
    ::java::util::logging::Logger& operator=(::java::util::logging::Logger&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::logging::Logger getAnonymousLogger();
    static ::java::util::logging::Logger getAnonymousLogger(const ::java::lang::String&);
    static ::java::util::logging::Logger getLogger(const ::java::lang::String&);
    static ::java::util::logging::Logger getLogger(const ::java::lang::String&, const ::java::lang::String&);
    void addHandler(const ::java::util::logging::Handler&) const ;
    std::vector< ::java::util::logging::Handler> getHandlers() const ;
    void removeHandler(const ::java::util::logging::Handler&) const ;
    ::java::util::logging::Filter getFilter() const ;
    void setFilter(const ::java::util::logging::Filter&) const ;
    ::java::util::logging::Level getLevel() const ;
    void setLevel(const ::java::util::logging::Level&) const ;
    bool getUseParentHandlers() const ;
    void setUseParentHandlers(bool) const ;
    ::java::util::logging::Logger getParent() const ;
    void setParent(const ::java::util::logging::Logger&) const ;
    ::java::lang::String getName() const ;
    ::java::util::ResourceBundle getResourceBundle() const ;
    ::java::lang::String getResourceBundleName() const ;
    bool isLoggable(const ::java::util::logging::Level&) const ;
    void entering(const ::java::lang::String&, const ::java::lang::String&) const ;
    void entering(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Object&) const ;
    void entering(const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    void exiting(const ::java::lang::String&, const ::java::lang::String&) const ;
    void exiting(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Object&) const ;
    void throwing(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&) const ;
    void severe(const ::java::lang::String&) const ;
    void warning(const ::java::lang::String&) const ;
    void info(const ::java::lang::String&) const ;
    void config(const ::java::lang::String&) const ;
    void fine(const ::java::lang::String&) const ;
    void finer(const ::java::lang::String&) const ;
    void finest(const ::java::lang::String&) const ;
    void log(const ::java::util::logging::Level&, const ::java::lang::String&) const ;
    void log(const ::java::util::logging::Level&, const ::java::lang::String&, const ::java::lang::Object&) const ;
    void log(const ::java::util::logging::Level&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    void log(const ::java::util::logging::Level&, const ::java::lang::String&, const ::java::lang::Throwable&) const ;
    void log(const ::java::util::logging::LogRecord&) const ;
    void logp(const ::java::util::logging::Level&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void logp(const ::java::util::logging::Level&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Object&) const ;
    void logp(const ::java::util::logging::Level&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    void logp(const ::java::util::logging::Level&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&) const ;
    void logrb(const ::java::util::logging::Level&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void logrb(const ::java::util::logging::Level&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Object&) const ;
    void logrb(const ::java::util::logging::Level&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    void logrb(const ::java::util::logging::Level&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&) const ;

};
}
}
}


