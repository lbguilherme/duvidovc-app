#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace util {
class ByteArrayBuffer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ByteArrayBuffer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ByteArrayBuffer(const ::org::apache::http::util::ByteArrayBuffer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ByteArrayBuffer(::org::apache::http::util::ByteArrayBuffer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::util::ByteArrayBuffer& operator=(const ::org::apache::http::util::ByteArrayBuffer& x) {obj = x.obj; return *this;}
    ::org::apache::http::util::ByteArrayBuffer& operator=(::org::apache::http::util::ByteArrayBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    ByteArrayBuffer(int32_t);
    void append(const std::vector< int8_t>&, int32_t, int32_t) const;
    void append(int32_t) const;
    void append(const std::vector< uint16_t>&, int32_t, int32_t) const;
    void append(const ::org::apache::http::util::CharArrayBuffer&, int32_t, int32_t) const;
    void clear() const;
    std::vector< int8_t> toByteArray() const;
    int32_t byteAt(int32_t) const;
    int32_t capacity() const;
    int32_t length() const;
    std::vector< int8_t> buffer() const;
    void setLength(int32_t) const;
    bool isEmpty() const;
    bool isFull() const;

};
}
}
}
}


