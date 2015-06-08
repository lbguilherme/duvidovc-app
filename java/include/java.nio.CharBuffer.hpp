#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Appendable.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Comparable.hpp"
#include "java.lang.Readable.hpp"
#include "java.nio.Buffer.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { class ByteOrder; } }
namespace java { namespace nio { class CharBuffer; } }

namespace java {
namespace nio {
class CharBuffer : public virtual ::java::lang::Object,
                   public virtual ::java::lang::Appendable,
                   public virtual ::java::lang::CharSequence,
                   public virtual ::java::lang::Comparable,
                   public virtual ::java::lang::Readable,
                   public virtual ::java::nio::Buffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharBuffer(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Appendable(_obj), ::java::lang::CharSequence(_obj), ::java::lang::Comparable(_obj), ::java::lang::Readable(_obj), ::java::nio::Buffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharBuffer(const ::java::nio::CharBuffer& x) : ::java::lang::Object((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Readable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj;}
    CharBuffer(::java::nio::CharBuffer&& x) : ::java::lang::Object((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Readable((jobject)0), ::java::nio::Buffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::CharBuffer& operator=(const ::java::nio::CharBuffer& x) {obj = x.obj; return *this;}
    ::java::nio::CharBuffer& operator=(::java::nio::CharBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::CharBuffer allocate(int32_t);
    static ::java::nio::CharBuffer wrap(const std::vector< uint16_t>&);
    static ::java::nio::CharBuffer wrap(const std::vector< uint16_t>&, int32_t, int32_t);
    static ::java::nio::CharBuffer wrap(const ::java::lang::CharSequence&);
    static ::java::nio::CharBuffer wrap(const ::java::lang::CharSequence&, int32_t, int32_t);
    std::vector< uint16_t> array() const;
    int32_t arrayOffset() const;
    ::java::nio::CharBuffer asReadOnlyBuffer() const;
    uint16_t charAt(int32_t) const;
    ::java::nio::CharBuffer compact() const;
    int32_t compareTo(const ::java::nio::CharBuffer&) const;
    ::java::nio::CharBuffer duplicate() const;
    bool equals(const ::java::lang::Object&) const;
    uint16_t get() const;
    ::java::nio::CharBuffer get(const std::vector< uint16_t>&) const;
    ::java::nio::CharBuffer get(const std::vector< uint16_t>&, int32_t, int32_t) const;
    uint16_t get(int32_t) const;
    bool hasArray() const;
    int32_t hashCode() const;
    bool isDirect() const;
    int32_t length() const;
    ::java::nio::ByteOrder order() const;
    ::java::nio::CharBuffer put(uint16_t) const;
    ::java::nio::CharBuffer put(const std::vector< uint16_t>&) const;
    ::java::nio::CharBuffer put(const std::vector< uint16_t>&, int32_t, int32_t) const;
    ::java::nio::CharBuffer put(const ::java::nio::CharBuffer&) const;
    ::java::nio::CharBuffer put(int32_t, uint16_t) const;
    ::java::nio::CharBuffer put(const ::java::lang::String&) const;
    ::java::nio::CharBuffer put(const ::java::lang::String&, int32_t, int32_t) const;
    ::java::nio::CharBuffer slice() const;
    ::java::lang::CharSequence subSequence(int32_t, int32_t) const;
    ::java::lang::String toString() const;
    ::java::nio::CharBuffer append(uint16_t) const;
    ::java::nio::CharBuffer append(const ::java::lang::CharSequence&) const;
    ::java::nio::CharBuffer append(const ::java::lang::CharSequence&, int32_t, int32_t) const;
    int32_t read(const ::java::nio::CharBuffer&) const;
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}


