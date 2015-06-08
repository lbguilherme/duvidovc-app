#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Reader.hpp"

namespace java { namespace io { class Reader; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class BufferedReader : public virtual ::java::lang::Object,
                       public virtual ::java::io::Reader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BufferedReader(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Reader(_obj), ::java::lang::Readable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BufferedReader(const ::java::io::BufferedReader& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj;}
    BufferedReader(::java::io::BufferedReader&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::BufferedReader& operator=(const ::java::io::BufferedReader& x) {obj = x.obj; return *this;}
    ::java::io::BufferedReader& operator=(::java::io::BufferedReader&& x) {obj = std::move(x.obj); return *this;}
    
    BufferedReader(const ::java::io::Reader&);
    BufferedReader(const ::java::io::Reader&, int32_t);
    void close() const;
    void mark(int32_t) const;
    bool markSupported() const;
    int32_t read() const;
    int32_t read(const std::vector< uint16_t>&, int32_t, int32_t) const;
    ::java::lang::String readLine() const;
    bool ready() const;
    void reset() const;
    int64_t skip(int64_t) const;

};
}
}


