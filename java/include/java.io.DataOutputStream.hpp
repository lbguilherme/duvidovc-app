#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.DataOutput.hpp"
#include "java.io.FilterOutputStream.hpp"

namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class DataOutputStream : public virtual ::java::lang::Object,
                         public virtual ::java::io::DataOutput,
                         public virtual ::java::io::FilterOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DataOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::DataOutput(_obj), ::java::io::FilterOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DataOutputStream(const ::java::io::DataOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataOutput((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    DataOutputStream(::java::io::DataOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataOutput((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::DataOutputStream& operator=(const ::java::io::DataOutputStream& x) {obj = x.obj; return *this;}
    ::java::io::DataOutputStream& operator=(::java::io::DataOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    DataOutputStream(const ::java::io::OutputStream&);
    void flush() const;
    int32_t size() const;
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


