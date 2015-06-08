#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Throwable; } }

namespace org {
namespace apache {
namespace commons {
namespace logging {
class Log : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Log(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Log(const ::org::apache::commons::logging::Log& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Log(::org::apache::commons::logging::Log&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::commons::logging::Log& operator=(const ::org::apache::commons::logging::Log& x) {obj = x.obj; return *this;}
    ::org::apache::commons::logging::Log& operator=(::org::apache::commons::logging::Log&& x) {obj = std::move(x.obj); return *this;}
    
    bool isDebugEnabled() const;
    bool isErrorEnabled() const;
    bool isFatalEnabled() const;
    bool isInfoEnabled() const;
    bool isTraceEnabled() const;
    bool isWarnEnabled() const;
    void trace(const ::java::lang::Object&) const;
    void trace(const ::java::lang::Object&, const ::java::lang::Throwable&) const;
    void debug(const ::java::lang::Object&) const;
    void debug(const ::java::lang::Object&, const ::java::lang::Throwable&) const;
    void info(const ::java::lang::Object&) const;
    void info(const ::java::lang::Object&, const ::java::lang::Throwable&) const;
    void warn(const ::java::lang::Object&) const;
    void warn(const ::java::lang::Object&, const ::java::lang::Throwable&) const;
    void error(const ::java::lang::Object&) const;
    void error(const ::java::lang::Object&, const ::java::lang::Throwable&) const;
    void fatal(const ::java::lang::Object&) const;
    void fatal(const ::java::lang::Object&, const ::java::lang::Throwable&) const;

};
}
}
}
}


