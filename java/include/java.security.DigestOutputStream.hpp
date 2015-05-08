#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterOutputStream.hpp"

namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class MessageDigest; } }

namespace java {
namespace security {
class DigestOutputStream : public virtual ::java::lang::Object,
                           public virtual ::java::io::FilterOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DigestOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DigestOutputStream(const ::java::security::DigestOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    DigestOutputStream(::java::security::DigestOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::DigestOutputStream& operator=(const ::java::security::DigestOutputStream& x) {obj = x.obj; return *this;}
    ::java::security::DigestOutputStream& operator=(::java::security::DigestOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    DigestOutputStream(const ::java::io::OutputStream&, const ::java::security::MessageDigest&);
    ::java::security::MessageDigest getMessageDigest() const ;
    void setMessageDigest(const ::java::security::MessageDigest&) const ;
    void write(int32_t) const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void on(bool) const ;
    ::java::lang::String toString() const ;

};
}
}


