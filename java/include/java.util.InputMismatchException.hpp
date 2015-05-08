#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.NoSuchElementException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
class InputMismatchException : public virtual ::java::lang::Object,
                               public virtual ::java::io::Serializable,
                               public virtual ::java::util::NoSuchElementException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputMismatchException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj), ::java::util::NoSuchElementException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputMismatchException(const ::java::util::InputMismatchException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::NoSuchElementException((jobject)0) {obj = x.obj;}
    InputMismatchException(::java::util::InputMismatchException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::NoSuchElementException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::InputMismatchException& operator=(const ::java::util::InputMismatchException& x) {obj = x.obj; return *this;}
    ::java::util::InputMismatchException& operator=(::java::util::InputMismatchException&& x) {obj = std::move(x.obj); return *this;}
    
    InputMismatchException();
    InputMismatchException(const ::java::lang::String&);

};
}
}


