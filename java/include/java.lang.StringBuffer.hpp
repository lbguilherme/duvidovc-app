#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.AbstractStringBuilder.hpp"
#include "java.lang.Appendable.hpp"
#include "java.lang.CharSequence.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuffer; } }

namespace java {
namespace lang {
class StringBuffer : public virtual ::java::lang::Object,
                     public virtual ::java::io::Serializable,
                     public virtual ::java::lang::AbstractStringBuilder,
                     public virtual ::java::lang::Appendable,
                     public virtual ::java::lang::CharSequence {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StringBuffer(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::AbstractStringBuilder(_obj), ::java::lang::Appendable(_obj), ::java::lang::CharSequence(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StringBuffer(const ::java::lang::StringBuffer& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj;}
    StringBuffer(::java::lang::StringBuffer&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::StringBuffer& operator=(const ::java::lang::StringBuffer& x) {obj = x.obj; return *this;}
    ::java::lang::StringBuffer& operator=(::java::lang::StringBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    StringBuffer();
    StringBuffer(int32_t);
    StringBuffer(const ::java::lang::String&);
    StringBuffer(const ::java::lang::CharSequence&);
    ::java::lang::StringBuffer append(bool) const ;
    ::java::lang::StringBuffer append(uint16_t) const ;
    ::java::lang::StringBuffer append(double) const ;
    ::java::lang::StringBuffer append(float) const ;
    ::java::lang::StringBuffer append(int32_t) const ;
    ::java::lang::StringBuffer append(int64_t) const ;
    ::java::lang::StringBuffer append(const ::java::lang::Object&) const ;
    ::java::lang::StringBuffer append(const ::java::lang::String&) const ;
    ::java::lang::StringBuffer append(const ::java::lang::StringBuffer&) const ;
    ::java::lang::StringBuffer append(const std::vector< uint16_t>&) const ;
    ::java::lang::StringBuffer append(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    ::java::lang::StringBuffer append(const ::java::lang::CharSequence&) const ;
    ::java::lang::StringBuffer append(const ::java::lang::CharSequence&, int32_t, int32_t) const ;
    ::java::lang::StringBuffer appendCodePoint(int32_t) const ;
    uint16_t charAt(int32_t) const ;
    int32_t codePointAt(int32_t) const ;
    int32_t codePointBefore(int32_t) const ;
    int32_t codePointCount(int32_t, int32_t) const ;
    ::java::lang::StringBuffer delete_(int32_t, int32_t) const ;
    ::java::lang::StringBuffer deleteCharAt(int32_t) const ;
    void ensureCapacity(int32_t) const ;
    void getChars(int32_t, int32_t, const std::vector< uint16_t>&, int32_t) const ;
    int32_t indexOf(const ::java::lang::String&, int32_t) const ;
    ::java::lang::StringBuffer insert(int32_t, uint16_t) const ;
    ::java::lang::StringBuffer insert(int32_t, bool) const ;
    ::java::lang::StringBuffer insert(int32_t, int32_t) const ;
    ::java::lang::StringBuffer insert(int32_t, int64_t) const ;
    ::java::lang::StringBuffer insert(int32_t, double) const ;
    ::java::lang::StringBuffer insert(int32_t, float) const ;
    ::java::lang::StringBuffer insert(int32_t, const ::java::lang::Object&) const ;
    ::java::lang::StringBuffer insert(int32_t, const ::java::lang::String&) const ;
    ::java::lang::StringBuffer insert(int32_t, const std::vector< uint16_t>&) const ;
    ::java::lang::StringBuffer insert(int32_t, const std::vector< uint16_t>&, int32_t, int32_t) const ;
    ::java::lang::StringBuffer insert(int32_t, const ::java::lang::CharSequence&) const ;
    ::java::lang::StringBuffer insert(int32_t, const ::java::lang::CharSequence&, int32_t, int32_t) const ;
    int32_t lastIndexOf(const ::java::lang::String&, int32_t) const ;
    int32_t offsetByCodePoints(int32_t, int32_t) const ;
    ::java::lang::StringBuffer replace(int32_t, int32_t, const ::java::lang::String&) const ;
    ::java::lang::StringBuffer reverse() const ;
    void setCharAt(int32_t, uint16_t) const ;
    void setLength(int32_t) const ;
    ::java::lang::CharSequence subSequence(int32_t, int32_t) const ;
    ::java::lang::String substring(int32_t) const ;
    ::java::lang::String substring(int32_t, int32_t) const ;
    ::java::lang::String toString() const ;
    void trimToSize() const ;
    int32_t lastIndexOf(const ::java::lang::String&) const ;
    int32_t indexOf(const ::java::lang::String&) const ;
    int32_t length() const ;
    int32_t capacity() const ;

};
}
}


