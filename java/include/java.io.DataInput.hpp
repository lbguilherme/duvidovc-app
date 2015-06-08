#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class DataInput : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DataInput(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DataInput(const ::java::io::DataInput& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DataInput(::java::io::DataInput&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::DataInput& operator=(const ::java::io::DataInput& x) {obj = x.obj; return *this;}
    ::java::io::DataInput& operator=(::java::io::DataInput&& x) {obj = std::move(x.obj); return *this;}
    
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
    int32_t skipBytes(int32_t) const;

};
}
}


