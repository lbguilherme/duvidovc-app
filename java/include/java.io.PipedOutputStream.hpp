#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.OutputStream.hpp"

namespace java { namespace io { class PipedInputStream; } }

namespace java {
namespace io {
class PipedOutputStream : public virtual ::java::lang::Object,
                          public virtual ::java::io::OutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PipedOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PipedOutputStream(const ::java::io::PipedOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    PipedOutputStream(::java::io::PipedOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::PipedOutputStream& operator=(const ::java::io::PipedOutputStream& x) {obj = x.obj; return *this;}
    ::java::io::PipedOutputStream& operator=(::java::io::PipedOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    PipedOutputStream();
    PipedOutputStream(const ::java::io::PipedInputStream&);
    void close() const ;
    void connect(const ::java::io::PipedInputStream&) const ;
    void flush() const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void write(int32_t) const ;

};
}
}


