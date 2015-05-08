#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }
namespace java { namespace util { class ResourceBundle; } }
namespace java { namespace util { namespace logging { class Level; } } }

namespace java {
namespace util {
namespace logging {
class LogRecord : public virtual ::java::lang::Object,
                  public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LogRecord(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LogRecord(const ::java::util::logging::LogRecord& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    LogRecord(::java::util::logging::LogRecord&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::LogRecord& operator=(const ::java::util::logging::LogRecord& x) {obj = x.obj; return *this;}
    ::java::util::logging::LogRecord& operator=(::java::util::logging::LogRecord&& x) {obj = std::move(x.obj); return *this;}
    
    LogRecord(const ::java::util::logging::Level&, const ::java::lang::String&);
    ::java::util::logging::Level getLevel() const ;
    void setLevel(const ::java::util::logging::Level&) const ;
    ::java::lang::String getLoggerName() const ;
    void setLoggerName(const ::java::lang::String&) const ;
    ::java::lang::String getMessage() const ;
    void setMessage(const ::java::lang::String&) const ;
    int64_t getMillis() const ;
    void setMillis(int64_t) const ;
    std::vector< ::java::lang::Object> getParameters() const ;
    void setParameters(const std::vector< ::java::lang::Object>&) const ;
    ::java::util::ResourceBundle getResourceBundle() const ;
    void setResourceBundle(const ::java::util::ResourceBundle&) const ;
    ::java::lang::String getResourceBundleName() const ;
    void setResourceBundleName(const ::java::lang::String&) const ;
    int64_t getSequenceNumber() const ;
    void setSequenceNumber(int64_t) const ;
    ::java::lang::String getSourceClassName() const ;
    void setSourceClassName(const ::java::lang::String&) const ;
    ::java::lang::String getSourceMethodName() const ;
    void setSourceMethodName(const ::java::lang::String&) const ;
    int32_t getThreadID() const ;
    void setThreadID(int32_t) const ;
    ::java::lang::Throwable getThrown() const ;
    void setThrown(const ::java::lang::Throwable&) const ;

};
}
}
}


