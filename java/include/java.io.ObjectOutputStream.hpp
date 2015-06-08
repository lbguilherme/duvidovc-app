#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.ObjectOutput.hpp"
#include "java.io.ObjectStreamConstants.hpp"
#include "java.io.OutputStream.hpp"

namespace java { namespace io { class ObjectOutputStream_PutField; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class ObjectOutputStream : public virtual ::java::lang::Object,
                           public virtual ::java::io::ObjectOutput,
                           public virtual ::java::io::ObjectStreamConstants,
                           public virtual ::java::io::OutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::DataOutput(_obj), ::java::io::Flushable(_obj), ::java::io::ObjectOutput(_obj), ::java::io::ObjectStreamConstants(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectOutputStream(const ::java::io::ObjectOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataOutput((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::ObjectOutput((jobject)0), ::java::io::ObjectStreamConstants((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    ObjectOutputStream(::java::io::ObjectOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataOutput((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::ObjectOutput((jobject)0), ::java::io::ObjectStreamConstants((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ObjectOutputStream& operator=(const ::java::io::ObjectOutputStream& x) {obj = x.obj; return *this;}
    ::java::io::ObjectOutputStream& operator=(::java::io::ObjectOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    ObjectOutputStream(const ::java::io::OutputStream&);
    void close() const;
    void defaultWriteObject() const;
    void flush() const;
    ::java::io::ObjectOutputStream_PutField putFields() const;
    void reset() const;
    void useProtocolVersion(int32_t) const;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void write(int32_t) const;
    void writeBoolean(bool) const;
    void writeByte(int32_t) const;
    void writeBytes(const ::java::lang::String&) const;
    void writeChar(int32_t) const;
    void writeChars(const ::java::lang::String&) const;
    void writeDouble(double) const;
    void writeFields() const;
    void writeFloat(float) const;
    void writeInt(int32_t) const;
    void writeLong(int64_t) const;
    void writeObject(const ::java::lang::Object&) const;
    void writeUnshared(const ::java::lang::Object&) const;
    void writeShort(int32_t) const;
    void writeUTF(const ::java::lang::String&) const;

};
}
}

#include "java.io.ObjectOutputStream_PutField.hpp"

