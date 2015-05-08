#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Reader.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { namespace charset { class Charset; } } }
namespace java { namespace nio { namespace charset { class CharsetDecoder; } } }

namespace java {
namespace io {
class InputStreamReader : public virtual ::java::lang::Object,
                          public virtual ::java::io::Reader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputStreamReader(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Reader(_obj), ::java::lang::Readable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputStreamReader(const ::java::io::InputStreamReader& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj;}
    InputStreamReader(::java::io::InputStreamReader&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::InputStreamReader& operator=(const ::java::io::InputStreamReader& x) {obj = x.obj; return *this;}
    ::java::io::InputStreamReader& operator=(::java::io::InputStreamReader&& x) {obj = std::move(x.obj); return *this;}
    
    InputStreamReader(const ::java::io::InputStream&);
    InputStreamReader(const ::java::io::InputStream&, const ::java::lang::String&);
    InputStreamReader(const ::java::io::InputStream&, const ::java::nio::charset::CharsetDecoder&);
    InputStreamReader(const ::java::io::InputStream&, const ::java::nio::charset::Charset&);
    void close() const ;
    ::java::lang::String getEncoding() const ;
    int32_t read() const ;
    int32_t read(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    bool ready() const ;

};
}
}


