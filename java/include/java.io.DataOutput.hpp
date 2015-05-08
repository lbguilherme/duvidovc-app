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
class DataOutput : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DataOutput(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DataOutput(const ::java::io::DataOutput& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DataOutput(::java::io::DataOutput&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::DataOutput& operator=(const ::java::io::DataOutput& x) {obj = x.obj; return *this;}
    ::java::io::DataOutput& operator=(::java::io::DataOutput&& x) {obj = std::move(x.obj); return *this;}
    
    void write(const std::vector< int8_t>&) const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void write(int32_t) const ;
    void writeBoolean(bool) const ;
    void writeByte(int32_t) const ;
    void writeBytes(const ::java::lang::String&) const ;
    void writeChar(int32_t) const ;
    void writeChars(const ::java::lang::String&) const ;
    void writeDouble(double) const ;
    void writeFloat(float) const ;
    void writeInt(int32_t) const ;
    void writeLong(int64_t) const ;
    void writeShort(int32_t) const ;
    void writeUTF(const ::java::lang::String&) const ;

};
}
}


