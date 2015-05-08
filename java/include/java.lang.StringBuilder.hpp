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
namespace java { namespace lang { class StringBuilder; } }

namespace java {
namespace lang {
class StringBuilder : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable,
                      public virtual ::java::lang::AbstractStringBuilder,
                      public virtual ::java::lang::Appendable,
                      public virtual ::java::lang::CharSequence {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StringBuilder(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::AbstractStringBuilder(_obj), ::java::lang::Appendable(_obj), ::java::lang::CharSequence(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StringBuilder(const ::java::lang::StringBuilder& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj;}
    StringBuilder(::java::lang::StringBuilder&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::AbstractStringBuilder((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::StringBuilder& operator=(const ::java::lang::StringBuilder& x) {obj = x.obj; return *this;}
    ::java::lang::StringBuilder& operator=(::java::lang::StringBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    StringBuilder();
    StringBuilder(int32_t);
    StringBuilder(const ::java::lang::CharSequence&);
    StringBuilder(const ::java::lang::String&);
    ::java::lang::StringBuilder append(bool) const ;
    ::java::lang::StringBuilder append(uint16_t) const ;
    ::java::lang::StringBuilder append(int32_t) const ;
    ::java::lang::StringBuilder append(int64_t) const ;
    ::java::lang::StringBuilder append(float) const ;
    ::java::lang::StringBuilder append(double) const ;
    ::java::lang::StringBuilder append(const ::java::lang::Object&) const ;
    ::java::lang::StringBuilder append(const ::java::lang::String&) const ;
    ::java::lang::StringBuilder append(const ::java::lang::StringBuffer&) const ;
    ::java::lang::StringBuilder append(const std::vector< uint16_t>&) const ;
    ::java::lang::StringBuilder append(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    ::java::lang::StringBuilder append(const ::java::lang::CharSequence&) const ;
    ::java::lang::StringBuilder append(const ::java::lang::CharSequence&, int32_t, int32_t) const ;
    ::java::lang::StringBuilder appendCodePoint(int32_t) const ;
    ::java::lang::StringBuilder delete_(int32_t, int32_t) const ;
    ::java::lang::StringBuilder deleteCharAt(int32_t) const ;
    ::java::lang::StringBuilder insert(int32_t, bool) const ;
    ::java::lang::StringBuilder insert(int32_t, uint16_t) const ;
    ::java::lang::StringBuilder insert(int32_t, int32_t) const ;
    ::java::lang::StringBuilder insert(int32_t, int64_t) const ;
    ::java::lang::StringBuilder insert(int32_t, float) const ;
    ::java::lang::StringBuilder insert(int32_t, double) const ;
    ::java::lang::StringBuilder insert(int32_t, const ::java::lang::Object&) const ;
    ::java::lang::StringBuilder insert(int32_t, const ::java::lang::String&) const ;
    ::java::lang::StringBuilder insert(int32_t, const std::vector< uint16_t>&) const ;
    ::java::lang::StringBuilder insert(int32_t, const std::vector< uint16_t>&, int32_t, int32_t) const ;
    ::java::lang::StringBuilder insert(int32_t, const ::java::lang::CharSequence&) const ;
    ::java::lang::StringBuilder insert(int32_t, const ::java::lang::CharSequence&, int32_t, int32_t) const ;
    ::java::lang::StringBuilder replace(int32_t, int32_t, const ::java::lang::String&) const ;
    ::java::lang::StringBuilder reverse() const ;
    ::java::lang::String toString() const ;
    int32_t offsetByCodePoints(int32_t, int32_t) const ;
    int32_t codePointCount(int32_t, int32_t) const ;
    int32_t codePointBefore(int32_t) const ;
    int32_t codePointAt(int32_t) const ;
    void trimToSize() const ;
    int32_t lastIndexOf(const ::java::lang::String&, int32_t) const ;
    int32_t lastIndexOf(const ::java::lang::String&) const ;
    int32_t indexOf(const ::java::lang::String&, int32_t) const ;
    int32_t indexOf(const ::java::lang::String&) const ;
    ::java::lang::CharSequence subSequence(int32_t, int32_t) const ;
    ::java::lang::String substring(int32_t, int32_t) const ;
    ::java::lang::String substring(int32_t) const ;
    void setLength(int32_t) const ;
    void setCharAt(int32_t, uint16_t) const ;
    int32_t length() const ;
    void getChars(int32_t, int32_t, const std::vector< uint16_t>&, int32_t) const ;
    void ensureCapacity(int32_t) const ;
    uint16_t charAt(int32_t) const ;
    int32_t capacity() const ;

};
}
}


