#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace util {
namespace concurrent {
class ExecutionException : public virtual ::java::lang::Object,
                           public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExecutionException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExecutionException(const ::java::util::concurrent::ExecutionException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ExecutionException(::java::util::concurrent::ExecutionException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ExecutionException& operator=(const ::java::util::concurrent::ExecutionException& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ExecutionException& operator=(::java::util::concurrent::ExecutionException&& x) {obj = std::move(x.obj); return *this;}
    
    ExecutionException(const ::java::lang::String&, const ::java::lang::Throwable&);
    ExecutionException(const ::java::lang::Throwable&);

};
}
}
}


