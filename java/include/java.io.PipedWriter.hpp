#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Writer.hpp"

namespace java { namespace io { class PipedReader; } }

namespace java {
namespace io {
class PipedWriter : public virtual ::java::lang::Object,
                    public virtual ::java::io::Writer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PipedWriter(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::Writer(_obj), ::java::lang::Appendable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PipedWriter(const ::java::io::PipedWriter& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj;}
    PipedWriter(::java::io::PipedWriter&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::PipedWriter& operator=(const ::java::io::PipedWriter& x) {obj = x.obj; return *this;}
    ::java::io::PipedWriter& operator=(::java::io::PipedWriter&& x) {obj = std::move(x.obj); return *this;}
    
    PipedWriter();
    PipedWriter(const ::java::io::PipedReader&);
    void close() const ;
    void connect(const ::java::io::PipedReader&) const ;
    void flush() const ;
    void write(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void write(int32_t) const ;

};
}
}


