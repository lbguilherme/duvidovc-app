#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterOutputStream.hpp"

namespace java { namespace io { class OutputStream; } }
namespace java { namespace util { namespace zip { class Inflater; } } }

namespace java {
namespace util {
namespace zip {
class InflaterOutputStream : public virtual ::java::lang::Object,
                             public virtual ::java::io::FilterOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InflaterOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InflaterOutputStream(const ::java::util::zip::InflaterOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    InflaterOutputStream(::java::util::zip::InflaterOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::InflaterOutputStream& operator=(const ::java::util::zip::InflaterOutputStream& x) {obj = x.obj; return *this;}
    ::java::util::zip::InflaterOutputStream& operator=(::java::util::zip::InflaterOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    InflaterOutputStream(const ::java::io::OutputStream&);
    InflaterOutputStream(const ::java::io::OutputStream&, const ::java::util::zip::Inflater&);
    InflaterOutputStream(const ::java::io::OutputStream&, const ::java::util::zip::Inflater&, int32_t);
    void close() const ;
    void flush() const ;
    void finish() const ;
    void write(int32_t) const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;

};
}
}
}


