#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterOutputStream.hpp"

namespace java { namespace io { class OutputStream; } }

namespace java {
namespace io {
class BufferedOutputStream : public virtual ::java::lang::Object,
                             public virtual ::java::io::FilterOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BufferedOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BufferedOutputStream(const ::java::io::BufferedOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    BufferedOutputStream(::java::io::BufferedOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::BufferedOutputStream& operator=(const ::java::io::BufferedOutputStream& x) {obj = x.obj; return *this;}
    ::java::io::BufferedOutputStream& operator=(::java::io::BufferedOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    BufferedOutputStream(const ::java::io::OutputStream&);
    BufferedOutputStream(const ::java::io::OutputStream&, int32_t);
    void flush() const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void close() const ;
    void write(int32_t) const ;

};
}
}


