#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterReader.hpp"

namespace java { namespace io { class Reader; } }

namespace java {
namespace io {
class PushbackReader : public virtual ::java::lang::Object,
                       public virtual ::java::io::FilterReader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PushbackReader(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterReader(_obj), ::java::io::Reader(_obj), ::java::lang::Readable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PushbackReader(const ::java::io::PushbackReader& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterReader((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj;}
    PushbackReader(::java::io::PushbackReader&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterReader((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::PushbackReader& operator=(const ::java::io::PushbackReader& x) {obj = x.obj; return *this;}
    ::java::io::PushbackReader& operator=(::java::io::PushbackReader&& x) {obj = std::move(x.obj); return *this;}
    
    PushbackReader(const ::java::io::Reader&);
    PushbackReader(const ::java::io::Reader&, int32_t);
    void close() const ;
    void mark(int32_t) const ;
    bool markSupported() const ;
    int32_t read() const ;
    int32_t read(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    bool ready() const ;
    void reset() const ;
    void unread(const std::vector< uint16_t>&) const ;
    void unread(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void unread(int32_t) const ;
    int64_t skip(int64_t) const ;

};
}
}


