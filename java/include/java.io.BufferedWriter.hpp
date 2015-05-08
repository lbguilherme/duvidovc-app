#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Writer.hpp"

namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class BufferedWriter : public virtual ::java::lang::Object,
                       public virtual ::java::io::Writer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BufferedWriter(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::Writer(_obj), ::java::lang::Appendable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BufferedWriter(const ::java::io::BufferedWriter& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj;}
    BufferedWriter(::java::io::BufferedWriter&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::BufferedWriter& operator=(const ::java::io::BufferedWriter& x) {obj = x.obj; return *this;}
    ::java::io::BufferedWriter& operator=(::java::io::BufferedWriter&& x) {obj = std::move(x.obj); return *this;}
    
    BufferedWriter(const ::java::io::Writer&);
    BufferedWriter(const ::java::io::Writer&, int32_t);
    void close() const ;
    void flush() const ;
    void newLine() const ;
    void write(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void write(int32_t) const ;
    void write(const ::java::lang::String&, int32_t, int32_t) const ;

};
}
}


