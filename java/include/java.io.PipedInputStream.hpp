#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InputStream.hpp"

namespace java { namespace io { class PipedOutputStream; } }

namespace java {
namespace io {
class PipedInputStream : public virtual ::java::lang::Object,
                         public virtual ::java::io::InputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PipedInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PipedInputStream(const ::java::io::PipedInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    PipedInputStream(::java::io::PipedInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::PipedInputStream& operator=(const ::java::io::PipedInputStream& x) {obj = x.obj; return *this;}
    ::java::io::PipedInputStream& operator=(::java::io::PipedInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    PipedInputStream();
    PipedInputStream(const ::java::io::PipedOutputStream&);
    PipedInputStream(int32_t);
    PipedInputStream(const ::java::io::PipedOutputStream&, int32_t);
    int32_t available() const ;
    void close() const ;
    void connect(const ::java::io::PipedOutputStream&) const ;
    int32_t read() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;

};
}
}


