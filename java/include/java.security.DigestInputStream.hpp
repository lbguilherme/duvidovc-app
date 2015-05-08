#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterInputStream.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class MessageDigest; } }

namespace java {
namespace security {
class DigestInputStream : public virtual ::java::lang::Object,
                          public virtual ::java::io::FilterInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DigestInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DigestInputStream(const ::java::security::DigestInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    DigestInputStream(::java::security::DigestInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::DigestInputStream& operator=(const ::java::security::DigestInputStream& x) {obj = x.obj; return *this;}
    ::java::security::DigestInputStream& operator=(::java::security::DigestInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    DigestInputStream(const ::java::io::InputStream&, const ::java::security::MessageDigest&);
    ::java::security::MessageDigest getMessageDigest() const ;
    void setMessageDigest(const ::java::security::MessageDigest&) const ;
    int32_t read() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void on(bool) const ;
    ::java::lang::String toString() const ;

};
}
}


