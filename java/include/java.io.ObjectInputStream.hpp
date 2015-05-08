#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.ObjectInput.hpp"
#include "java.io.ObjectStreamConstants.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class ObjectInputStream_GetField; } }
namespace java { namespace io { class ObjectInputValidation; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class ObjectInputStream : public virtual ::java::lang::Object,
                          public virtual ::java::io::InputStream,
                          public virtual ::java::io::ObjectInput,
                          public virtual ::java::io::ObjectStreamConstants {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::DataInput(_obj), ::java::io::InputStream(_obj), ::java::io::ObjectInput(_obj), ::java::io::ObjectStreamConstants(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectInputStream(const ::java::io::ObjectInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataInput((jobject)0), ::java::io::InputStream((jobject)0), ::java::io::ObjectInput((jobject)0), ::java::io::ObjectStreamConstants((jobject)0) {obj = x.obj;}
    ObjectInputStream(::java::io::ObjectInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::DataInput((jobject)0), ::java::io::InputStream((jobject)0), ::java::io::ObjectInput((jobject)0), ::java::io::ObjectStreamConstants((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ObjectInputStream& operator=(const ::java::io::ObjectInputStream& x) {obj = x.obj; return *this;}
    ::java::io::ObjectInputStream& operator=(::java::io::ObjectInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    ObjectInputStream(const ::java::io::InputStream&);
    int32_t available() const ;
    void close() const ;
    void defaultReadObject() const ;
    int32_t read() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;
    bool readBoolean() const ;
    int8_t readByte() const ;
    uint16_t readChar() const ;
    double readDouble() const ;
    ::java::io::ObjectInputStream_GetField readFields() const ;
    float readFloat() const ;
    void readFully(const std::vector< int8_t>&) const ;
    void readFully(const std::vector< int8_t>&, int32_t, int32_t) const ;
    int32_t readInt() const ;
    ::java::lang::String readLine() const ;
    int64_t readLong() const ;
    ::java::lang::Object readObject() const ;
    ::java::lang::Object readUnshared() const ;
    int16_t readShort() const ;
    int32_t readUnsignedByte() const ;
    int32_t readUnsignedShort() const ;
    ::java::lang::String readUTF() const ;
    void registerValidation(const ::java::io::ObjectInputValidation&, int32_t) const ;
    int32_t skipBytes(int32_t) const ;

};
}
}

#include "java.io.ObjectInputStream_GetField.hpp"

