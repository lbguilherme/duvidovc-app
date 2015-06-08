#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.zip.DeflaterOutputStream.hpp"

namespace java { namespace io { class OutputStream; } }

namespace java {
namespace util {
namespace zip {
class GZIPOutputStream : public virtual ::java::lang::Object,
                         public virtual ::java::util::zip::DeflaterOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GZIPOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj), ::java::util::zip::DeflaterOutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GZIPOutputStream(const ::java::util::zip::GZIPOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::util::zip::DeflaterOutputStream((jobject)0) {obj = x.obj;}
    GZIPOutputStream(::java::util::zip::GZIPOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::util::zip::DeflaterOutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::GZIPOutputStream& operator=(const ::java::util::zip::GZIPOutputStream& x) {obj = x.obj; return *this;}
    ::java::util::zip::GZIPOutputStream& operator=(::java::util::zip::GZIPOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    GZIPOutputStream(const ::java::io::OutputStream&);
    GZIPOutputStream(const ::java::io::OutputStream&, int32_t);
    void finish() const;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;

};
}
}
}


