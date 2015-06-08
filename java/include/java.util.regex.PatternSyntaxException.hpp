#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.IllegalArgumentException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace regex {
class PatternSyntaxException : public virtual ::java::lang::Object,
                               public virtual ::java::lang::IllegalArgumentException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PatternSyntaxException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IllegalArgumentException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PatternSyntaxException(const ::java::util::regex::PatternSyntaxException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    PatternSyntaxException(::java::util::regex::PatternSyntaxException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::regex::PatternSyntaxException& operator=(const ::java::util::regex::PatternSyntaxException& x) {obj = x.obj; return *this;}
    ::java::util::regex::PatternSyntaxException& operator=(::java::util::regex::PatternSyntaxException&& x) {obj = std::move(x.obj); return *this;}
    
    PatternSyntaxException(const ::java::lang::String&, const ::java::lang::String&, int32_t);
    ::java::lang::String getPattern() const;
    ::java::lang::String getMessage() const;
    ::java::lang::String getDescription() const;
    int32_t getIndex() const;

};
}
}
}


