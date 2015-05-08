#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { namespace logging { class LogRecord; } } }

namespace java {
namespace util {
namespace logging {
class Filter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Filter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Filter(const ::java::util::logging::Filter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Filter(::java::util::logging::Filter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::Filter& operator=(const ::java::util::logging::Filter& x) {obj = x.obj; return *this;}
    ::java::util::logging::Filter& operator=(::java::util::logging::Filter&& x) {obj = std::move(x.obj); return *this;}
    
    bool isLoggable(const ::java::util::logging::LogRecord&) const ;

};
}
}
}


