#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.logging.StreamHandler.hpp"

namespace java { namespace util { namespace logging { class LogRecord; } } }

namespace java {
namespace util {
namespace logging {
class ConsoleHandler : public virtual ::java::lang::Object,
                       public virtual ::java::util::logging::StreamHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConsoleHandler(jobject _obj) : ::java::lang::Object(_obj), ::java::util::logging::Handler(_obj), ::java::util::logging::StreamHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConsoleHandler(const ::java::util::logging::ConsoleHandler& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {obj = x.obj;}
    ConsoleHandler(::java::util::logging::ConsoleHandler&& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::ConsoleHandler& operator=(const ::java::util::logging::ConsoleHandler& x) {obj = x.obj; return *this;}
    ::java::util::logging::ConsoleHandler& operator=(::java::util::logging::ConsoleHandler&& x) {obj = std::move(x.obj); return *this;}
    
    ConsoleHandler();
    void close() const ;
    void publish(const ::java::util::logging::LogRecord&) const ;

};
}
}
}


