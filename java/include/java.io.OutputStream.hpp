#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"
#include "java.io.Flushable.hpp"


namespace java {
namespace io {
class OutputStream : public virtual ::java::lang::Object,
                     public virtual ::java::io::Closeable,
                     public virtual ::java::io::Flushable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OutputStream(const ::java::io::OutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {obj = x.obj;}
    OutputStream(::java::io::OutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::OutputStream& operator=(const ::java::io::OutputStream& x) {obj = x.obj; return *this;}
    ::java::io::OutputStream& operator=(::java::io::OutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    OutputStream();
    void close() const ;
    void flush() const ;
    void write(const std::vector< int8_t>&) const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void write(int32_t) const ;

};
}
}


