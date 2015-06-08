#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"
#include "java.io.DataInput.hpp"
#include "java.io.DataOutput.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { namespace channels { class FileChannel; } } }

namespace java {
namespace io {
class RandomAccessFile : public virtual ::java::lang::Object,
                         public virtual ::java::io::Closeable,
                         public virtual ::java::io::DataInput,
                         public virtual ::java::io::DataOutput {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RandomAccessFile(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::DataInput(_obj), ::java::io::DataOutput(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RandomAccessFile(const ::java::io::RandomAccessFile& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataInput((jobject)0), ::java::io::DataOutput((jobject)0) {obj = x.obj;}
    RandomAccessFile(::java::io::RandomAccessFile&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataInput((jobject)0), ::java::io::DataOutput((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::RandomAccessFile& operator=(const ::java::io::RandomAccessFile& x) {obj = x.obj; return *this;}
    ::java::io::RandomAccessFile& operator=(::java::io::RandomAccessFile&& x) {obj = std::move(x.obj); return *this;}
    
    RandomAccessFile(const ::java::io::File&, const ::java::lang::String&);
    RandomAccessFile(const ::java::lang::String&, const ::java::lang::String&);
    void close() const;
    ::java::nio::channels::FileChannel getChannel() const;
    ::java::io::FileDescriptor getFD() const;
    int64_t getFilePointer() const;
    int64_t length() const;
    int32_t read() const;
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
    void seek(int64_t) const;
    void setLength(int64_t) const;
    int32_t skipBytes(int32_t) const;
    void write(const std::vector< int8_t>&) const;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void write(int32_t) const;
    void writeBoolean(bool) const;
    void writeByte(int32_t) const;
    void writeBytes(const ::java::lang::String&) const;
    void writeChar(int32_t) const;
    void writeChars(const ::java::lang::String&) const;
    void writeDouble(double) const;
    void writeFloat(float) const;
    void writeInt(int32_t) const;
    void writeLong(int64_t) const;
    void writeShort(int32_t) const;
    void writeUTF(const ::java::lang::String&) const;

};
}
}


