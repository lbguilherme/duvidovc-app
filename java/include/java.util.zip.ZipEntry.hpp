#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace zip {
class ZipEntry : public virtual ::java::lang::Object,
                 public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ZipEntry(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ZipEntry(const ::java::util::zip::ZipEntry& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    ZipEntry(::java::util::zip::ZipEntry&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::ZipEntry& operator=(const ::java::util::zip::ZipEntry& x) {obj = x.obj; return *this;}
    ::java::util::zip::ZipEntry& operator=(::java::util::zip::ZipEntry&& x) {obj = std::move(x.obj); return *this;}
    
    ZipEntry(const ::java::lang::String&);
    ::java::lang::String getComment() const ;
    int64_t getCompressedSize() const ;
    int64_t getCrc() const ;
    std::vector< int8_t> getExtra() const ;
    int32_t getMethod() const ;
    ::java::lang::String getName() const ;
    int64_t getSize() const ;
    int64_t getTime() const ;
    bool isDirectory() const ;
    void setComment(const ::java::lang::String&) const ;
    void setCompressedSize(int64_t) const ;
    void setCrc(int64_t) const ;
    void setExtra(const std::vector< int8_t>&) const ;
    void setMethod(int32_t) const ;
    void setSize(int64_t) const ;
    void setTime(int64_t) const ;
    ::java::lang::String toString() const ;
    ::java::lang::Object clone() const ;
    int32_t hashCode() const ;

};
}
}
}


