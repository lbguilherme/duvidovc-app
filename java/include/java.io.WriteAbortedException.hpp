#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.ObjectStreamException.hpp"

namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace io {
class WriteAbortedException : public virtual ::java::lang::Object,
                              public virtual ::java::io::ObjectStreamException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WriteAbortedException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::ObjectStreamException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WriteAbortedException(const ::java::io::WriteAbortedException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    WriteAbortedException(::java::io::WriteAbortedException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::ObjectStreamException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::WriteAbortedException& operator=(const ::java::io::WriteAbortedException& x) {obj = x.obj; return *this;}
    ::java::io::WriteAbortedException& operator=(::java::io::WriteAbortedException&& x) {obj = std::move(x.obj); return *this;}
    
    WriteAbortedException(const ::java::lang::String&, const ::java::lang::Exception&);
    ::java::lang::String getMessage() const;
    ::java::lang::Throwable getCause() const;

};
}
}


