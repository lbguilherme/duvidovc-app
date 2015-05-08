#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class AbstractStringBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractStringBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractStringBuilder(const ::java::lang::AbstractStringBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AbstractStringBuilder(::java::lang::AbstractStringBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::AbstractStringBuilder& operator=(const ::java::lang::AbstractStringBuilder& x) {obj = x.obj; return *this;}
    ::java::lang::AbstractStringBuilder& operator=(::java::lang::AbstractStringBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t capacity() const ;
    uint16_t charAt(int32_t) const ;
    void ensureCapacity(int32_t) const ;
    void getChars(int32_t, int32_t, const std::vector< uint16_t>&, int32_t) const ;
    int32_t length() const ;
    void setCharAt(int32_t, uint16_t) const ;
    void setLength(int32_t) const ;
    ::java::lang::String substring(int32_t) const ;
    ::java::lang::String substring(int32_t, int32_t) const ;
    ::java::lang::String toString() const ;
    ::java::lang::CharSequence subSequence(int32_t, int32_t) const ;
    int32_t indexOf(const ::java::lang::String&) const ;
    int32_t indexOf(const ::java::lang::String&, int32_t) const ;
    int32_t lastIndexOf(const ::java::lang::String&) const ;
    int32_t lastIndexOf(const ::java::lang::String&, int32_t) const ;
    void trimToSize() const ;
    int32_t codePointAt(int32_t) const ;
    int32_t codePointBefore(int32_t) const ;
    int32_t codePointCount(int32_t, int32_t) const ;
    int32_t offsetByCodePoints(int32_t, int32_t) const ;

};
}
}


