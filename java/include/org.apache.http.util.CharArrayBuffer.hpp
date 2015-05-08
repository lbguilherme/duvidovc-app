#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace util { class ByteArrayBuffer; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace util {
class CharArrayBuffer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharArrayBuffer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharArrayBuffer(const ::org::apache::http::util::CharArrayBuffer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CharArrayBuffer(::org::apache::http::util::CharArrayBuffer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::util::CharArrayBuffer& operator=(const ::org::apache::http::util::CharArrayBuffer& x) {obj = x.obj; return *this;}
    ::org::apache::http::util::CharArrayBuffer& operator=(::org::apache::http::util::CharArrayBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    CharArrayBuffer(int32_t);
    void append(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void append(const ::java::lang::String&) const ;
    void append(const ::org::apache::http::util::CharArrayBuffer&, int32_t, int32_t) const ;
    void append(const ::org::apache::http::util::CharArrayBuffer&) const ;
    void append(uint16_t) const ;
    void append(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void append(const ::org::apache::http::util::ByteArrayBuffer&, int32_t, int32_t) const ;
    void append(const ::java::lang::Object&) const ;
    void clear() const ;
    std::vector< uint16_t> toCharArray() const ;
    uint16_t charAt(int32_t) const ;
    std::vector< uint16_t> buffer() const ;
    int32_t capacity() const ;
    int32_t length() const ;
    void ensureCapacity(int32_t) const ;
    void setLength(int32_t) const ;
    bool isEmpty() const ;
    bool isFull() const ;
    int32_t indexOf(int32_t, int32_t, int32_t) const ;
    int32_t indexOf(int32_t) const ;
    ::java::lang::String substring(int32_t, int32_t) const ;
    ::java::lang::String substringTrimmed(int32_t, int32_t) const ;
    ::java::lang::String toString() const ;

};
}
}
}
}


