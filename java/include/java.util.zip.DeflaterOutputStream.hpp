#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterOutputStream.hpp"

namespace java { namespace io { class OutputStream; } }
namespace java { namespace util { namespace zip { class Deflater; } } }

namespace java {
namespace util {
namespace zip {
class DeflaterOutputStream : public virtual ::java::lang::Object,
                             public virtual ::java::io::FilterOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DeflaterOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DeflaterOutputStream(const ::java::util::zip::DeflaterOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    DeflaterOutputStream(::java::util::zip::DeflaterOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::DeflaterOutputStream& operator=(const ::java::util::zip::DeflaterOutputStream& x) {obj = x.obj; return *this;}
    ::java::util::zip::DeflaterOutputStream& operator=(::java::util::zip::DeflaterOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    DeflaterOutputStream(const ::java::io::OutputStream&, const ::java::util::zip::Deflater&);
    DeflaterOutputStream(const ::java::io::OutputStream&);
    DeflaterOutputStream(const ::java::io::OutputStream&, const ::java::util::zip::Deflater&, int32_t);
    void close() const ;
    void finish() const ;
    void write(int32_t) const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void flush() const ;

};
}
}
}


