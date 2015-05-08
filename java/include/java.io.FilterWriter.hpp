#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Writer.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class FilterWriter : public virtual ::java::lang::Object,
                     public virtual ::java::io::Writer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FilterWriter(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::Writer(_obj), ::java::lang::Appendable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FilterWriter(const ::java::io::FilterWriter& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj;}
    FilterWriter(::java::io::FilterWriter&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::FilterWriter& operator=(const ::java::io::FilterWriter& x) {obj = x.obj; return *this;}
    ::java::io::FilterWriter& operator=(::java::io::FilterWriter&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const ;
    void flush() const ;
    void write(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void write(int32_t) const ;
    void write(const ::java::lang::String&, int32_t, int32_t) const ;

};
}
}


