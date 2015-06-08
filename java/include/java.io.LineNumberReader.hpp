#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.BufferedReader.hpp"

namespace java { namespace io { class Reader; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class LineNumberReader : public virtual ::java::lang::Object,
                         public virtual ::java::io::BufferedReader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LineNumberReader(jobject _obj) : ::java::lang::Object(_obj), ::java::io::BufferedReader(_obj), ::java::io::Closeable(_obj), ::java::io::Reader(_obj), ::java::lang::Readable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LineNumberReader(const ::java::io::LineNumberReader& x) : ::java::lang::Object((jobject)0), ::java::io::BufferedReader((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj;}
    LineNumberReader(::java::io::LineNumberReader&& x) : ::java::lang::Object((jobject)0), ::java::io::BufferedReader((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::LineNumberReader& operator=(const ::java::io::LineNumberReader& x) {obj = x.obj; return *this;}
    ::java::io::LineNumberReader& operator=(::java::io::LineNumberReader&& x) {obj = std::move(x.obj); return *this;}
    
    LineNumberReader(const ::java::io::Reader&);
    LineNumberReader(const ::java::io::Reader&, int32_t);
    int32_t getLineNumber() const;
    void mark(int32_t) const;
    int32_t read() const;
    int32_t read(const std::vector< uint16_t>&, int32_t, int32_t) const;
    ::java::lang::String readLine() const;
    void reset() const;
    void setLineNumber(int32_t) const;
    int64_t skip(int64_t) const;

};
}
}


