#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.DataInput.hpp"
#include "java.io.FilterInputStream.hpp"

namespace java { namespace io { class DataInput; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class DataInputStream : public virtual ::java::lang::Object,
                        public virtual ::java::io::DataInput,
                        public virtual ::java::io::FilterInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DataInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::DataInput(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DataInputStream(const ::java::io::DataInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataInput((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    DataInputStream(::java::io::DataInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataInput((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::DataInputStream& operator=(const ::java::io::DataInputStream& x) {obj = x.obj; return *this;}
    ::java::io::DataInputStream& operator=(::java::io::DataInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    DataInputStream(const ::java::io::InputStream&);
    int32_t read(const std::vector< int8_t>&) const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    bool readBoolean() const;
    int8_t readByte() const;
    uint16_t readChar() const;
    double readDouble() const;
    float readFloat() const;
    void readFully(const std::vector< int8_t>&) const;
    void readFully(const std::vector< int8_t>&, int32_t, int32_t) const;
    int32_t readInt() const;
    ::java::lang::String readLine() const;
    int64_t readLong() const;
    int16_t readShort() const;
    int32_t readUnsignedByte() const;
    int32_t readUnsignedShort() const;
    ::java::lang::String readUTF() const;
    static ::java::lang::String readUTF(const ::java::io::DataInput&);
    int32_t skipBytes(int32_t) const;

};
}
}


