#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InputStream.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace io {
class SequenceInputStream : public virtual ::java::lang::Object,
                            public virtual ::java::io::InputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SequenceInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SequenceInputStream(const ::java::io::SequenceInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    SequenceInputStream(::java::io::SequenceInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::SequenceInputStream& operator=(const ::java::io::SequenceInputStream& x) {obj = x.obj; return *this;}
    ::java::io::SequenceInputStream& operator=(::java::io::SequenceInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    SequenceInputStream(const ::java::io::InputStream&, const ::java::io::InputStream&);
    SequenceInputStream(const ::java::util::Enumeration&);
    int32_t available() const ;
    void close() const ;
    int32_t read() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;

};
}
}


