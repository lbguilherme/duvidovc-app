#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.logging.StreamHandler.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace logging { class LogRecord; } } }

namespace java {
namespace util {
namespace logging {
class SocketHandler : public virtual ::java::lang::Object,
                      public virtual ::java::util::logging::StreamHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SocketHandler(jobject _obj) : ::java::lang::Object(_obj), ::java::util::logging::Handler(_obj), ::java::util::logging::StreamHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SocketHandler(const ::java::util::logging::SocketHandler& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {obj = x.obj;}
    SocketHandler(::java::util::logging::SocketHandler&& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::SocketHandler& operator=(const ::java::util::logging::SocketHandler& x) {obj = x.obj; return *this;}
    ::java::util::logging::SocketHandler& operator=(::java::util::logging::SocketHandler&& x) {obj = std::move(x.obj); return *this;}
    
    SocketHandler();
    SocketHandler(const ::java::lang::String&, int32_t);
    void close() const;
    void publish(const ::java::util::logging::LogRecord&) const;

};
}
}
}


