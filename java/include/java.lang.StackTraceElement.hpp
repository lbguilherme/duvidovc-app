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

namespace java {
namespace lang {
class StackTraceElement : public virtual ::java::lang::Object,
                          public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StackTraceElement(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StackTraceElement(const ::java::lang::StackTraceElement& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    StackTraceElement(::java::lang::StackTraceElement&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::StackTraceElement& operator=(const ::java::lang::StackTraceElement& x) {obj = x.obj; return *this;}
    ::java::lang::StackTraceElement& operator=(::java::lang::StackTraceElement&& x) {obj = std::move(x.obj); return *this;}
    
    StackTraceElement(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, int32_t);
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String getClassName() const;
    ::java::lang::String getFileName() const;
    int32_t getLineNumber() const;
    ::java::lang::String getMethodName() const;
    int32_t hashCode() const;
    bool isNativeMethod() const;
    ::java::lang::String toString() const;

};
}
}


