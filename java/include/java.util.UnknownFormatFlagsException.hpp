#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.IllegalFormatException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
class UnknownFormatFlagsException : public virtual ::java::lang::Object,
                                    public virtual ::java::util::IllegalFormatException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnknownFormatFlagsException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IllegalArgumentException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj), ::java::util::IllegalFormatException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnknownFormatFlagsException(const ::java::util::UnknownFormatFlagsException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {obj = x.obj;}
    UnknownFormatFlagsException(::java::util::UnknownFormatFlagsException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::UnknownFormatFlagsException& operator=(const ::java::util::UnknownFormatFlagsException& x) {obj = x.obj; return *this;}
    ::java::util::UnknownFormatFlagsException& operator=(::java::util::UnknownFormatFlagsException&& x) {obj = std::move(x.obj); return *this;}
    
    UnknownFormatFlagsException(const ::java::lang::String&);
    ::java::lang::String getFlags() const;
    ::java::lang::String getMessage() const;

};
}
}


