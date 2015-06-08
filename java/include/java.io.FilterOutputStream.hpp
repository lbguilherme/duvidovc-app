#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.OutputStream.hpp"

namespace java { namespace io { class OutputStream; } }

namespace java {
namespace io {
class FilterOutputStream : public virtual ::java::lang::Object,
                           public virtual ::java::io::OutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FilterOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FilterOutputStream(const ::java::io::FilterOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    FilterOutputStream(::java::io::FilterOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::FilterOutputStream& operator=(const ::java::io::FilterOutputStream& x) {obj = x.obj; return *this;}
    ::java::io::FilterOutputStream& operator=(::java::io::FilterOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    FilterOutputStream(const ::java::io::OutputStream&);
    void close() const;
    void flush() const;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void write(int32_t) const;

};
}
}


