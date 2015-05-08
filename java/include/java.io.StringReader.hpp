#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Reader.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class StringReader : public virtual ::java::lang::Object,
                     public virtual ::java::io::Reader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StringReader(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Reader(_obj), ::java::lang::Readable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StringReader(const ::java::io::StringReader& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj;}
    StringReader(::java::io::StringReader&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::StringReader& operator=(const ::java::io::StringReader& x) {obj = x.obj; return *this;}
    ::java::io::StringReader& operator=(::java::io::StringReader&& x) {obj = std::move(x.obj); return *this;}
    
    StringReader(const ::java::lang::String&);
    void close() const ;
    void mark(int32_t) const ;
    bool markSupported() const ;
    int32_t read() const ;
    int32_t read(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    bool ready() const ;
    void reset() const ;
    int64_t skip(int64_t) const ;

};
}
}


