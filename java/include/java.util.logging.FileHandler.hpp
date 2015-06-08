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
class FileHandler : public virtual ::java::lang::Object,
                    public virtual ::java::util::logging::StreamHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileHandler(jobject _obj) : ::java::lang::Object(_obj), ::java::util::logging::Handler(_obj), ::java::util::logging::StreamHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileHandler(const ::java::util::logging::FileHandler& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {obj = x.obj;}
    FileHandler(::java::util::logging::FileHandler&& x) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::logging::FileHandler& operator=(const ::java::util::logging::FileHandler& x) {obj = x.obj; return *this;}
    ::java::util::logging::FileHandler& operator=(::java::util::logging::FileHandler&& x) {obj = std::move(x.obj); return *this;}
    
    FileHandler();
    FileHandler(const ::java::lang::String&);
    FileHandler(const ::java::lang::String&, bool);
    FileHandler(const ::java::lang::String&, int32_t, int32_t);
    FileHandler(const ::java::lang::String&, int32_t, int32_t, bool);
    void close() const;
    void publish(const ::java::util::logging::LogRecord&) const;

};
}
}
}


