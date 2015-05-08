#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class DateParseException : public virtual ::java::lang::Object,
                           public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DateParseException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DateParseException(const ::org::apache::http::impl::cookie::DateParseException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    DateParseException(::org::apache::http::impl::cookie::DateParseException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::DateParseException& operator=(const ::org::apache::http::impl::cookie::DateParseException& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::DateParseException& operator=(::org::apache::http::impl::cookie::DateParseException&& x) {obj = std::move(x.obj); return *this;}
    
    DateParseException();
    DateParseException(const ::java::lang::String&);

};
}
}
}
}
}


