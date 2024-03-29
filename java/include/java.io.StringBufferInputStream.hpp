#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InputStream.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class StringBufferInputStream : public virtual ::java::lang::Object,
                                public virtual ::java::io::InputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StringBufferInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StringBufferInputStream(const ::java::io::StringBufferInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    StringBufferInputStream(::java::io::StringBufferInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::StringBufferInputStream& operator=(const ::java::io::StringBufferInputStream& x) {obj = x.obj; return *this;}
    ::java::io::StringBufferInputStream& operator=(::java::io::StringBufferInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    StringBufferInputStream(const ::java::lang::String&);
    int32_t available() const;
    int32_t read() const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    void reset() const;
    int64_t skip(int64_t) const;

};
}
}


