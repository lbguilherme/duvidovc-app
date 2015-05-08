#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace io { class PrintStream; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class StackTraceElement; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace lang {
class Throwable : public virtual ::java::lang::Object,
                  public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Throwable(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Throwable(const ::java::lang::Throwable& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Throwable(::java::lang::Throwable&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Throwable& operator=(const ::java::lang::Throwable& x) {obj = x.obj; return *this;}
    ::java::lang::Throwable& operator=(::java::lang::Throwable&& x) {obj = std::move(x.obj); return *this;}
    
    Throwable();
    Throwable(const ::java::lang::String&);
    Throwable(const ::java::lang::String&, const ::java::lang::Throwable&);
    ::java::lang::Throwable fillInStackTrace() const ;
    ::java::lang::String getMessage() const ;
    ::java::lang::String getLocalizedMessage() const ;
    std::vector< ::java::lang::StackTraceElement> getStackTrace() const ;
    void setStackTrace(const std::vector< ::java::lang::StackTraceElement>&) const ;
    void printStackTrace() const ;
    void printStackTrace(const ::java::io::PrintStream&) const ;
    void printStackTrace(const ::java::io::PrintWriter&) const ;
    ::java::lang::String toString() const ;
    ::java::lang::Throwable initCause(const ::java::lang::Throwable&) const ;
    ::java::lang::Throwable getCause() const ;

};
}
}


