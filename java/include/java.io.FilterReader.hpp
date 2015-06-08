#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Reader.hpp"


namespace java {
namespace io {
class FilterReader : public virtual ::java::lang::Object,
                     public virtual ::java::io::Reader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FilterReader(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Reader(_obj), ::java::lang::Readable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FilterReader(const ::java::io::FilterReader& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj;}
    FilterReader(::java::io::FilterReader&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::FilterReader& operator=(const ::java::io::FilterReader& x) {obj = x.obj; return *this;}
    ::java::io::FilterReader& operator=(::java::io::FilterReader&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const;
    void mark(int32_t) const;
    bool markSupported() const;
    int32_t read() const;
    int32_t read(const std::vector< uint16_t>&, int32_t, int32_t) const;
    bool ready() const;
    void reset() const;
    int64_t skip(int64_t) const;

};
}
}


