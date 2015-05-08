#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }

namespace java {
namespace lang {
class Process : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Process(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Process(const ::java::lang::Process& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Process(::java::lang::Process&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Process& operator=(const ::java::lang::Process& x) {obj = x.obj; return *this;}
    ::java::lang::Process& operator=(::java::lang::Process&& x) {obj = std::move(x.obj); return *this;}
    
    Process();
    void destroy() const ;
    int32_t exitValue() const ;
    ::java::io::InputStream getErrorStream() const ;
    ::java::io::InputStream getInputStream() const ;
    ::java::io::OutputStream getOutputStream() const ;
    int32_t waitFor() const ;

};
}
}


