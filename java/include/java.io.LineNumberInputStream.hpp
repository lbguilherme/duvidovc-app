#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterInputStream.hpp"

namespace java { namespace io { class InputStream; } }

namespace java {
namespace io {
class LineNumberInputStream : public virtual ::java::lang::Object,
                              public virtual ::java::io::FilterInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LineNumberInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LineNumberInputStream(const ::java::io::LineNumberInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    LineNumberInputStream(::java::io::LineNumberInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::LineNumberInputStream& operator=(const ::java::io::LineNumberInputStream& x) {obj = x.obj; return *this;}
    ::java::io::LineNumberInputStream& operator=(::java::io::LineNumberInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    LineNumberInputStream(const ::java::io::InputStream&);
    int32_t available() const ;
    int32_t getLineNumber() const ;
    void mark(int32_t) const ;
    int32_t read() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void reset() const ;
    void setLineNumber(int32_t) const ;
    int64_t skip(int64_t) const ;

};
}
}


