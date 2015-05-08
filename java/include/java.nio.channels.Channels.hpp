#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { namespace channels { class ReadableByteChannel; } } }
namespace java { namespace nio { namespace channels { class WritableByteChannel; } } }
namespace java { namespace nio { namespace charset { class CharsetDecoder; } } }
namespace java { namespace nio { namespace charset { class CharsetEncoder; } } }

namespace java {
namespace nio {
namespace channels {
class Channels : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Channels(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Channels(const ::java::nio::channels::Channels& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Channels(::java::nio::channels::Channels&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::Channels& operator=(const ::java::nio::channels::Channels& x) {obj = x.obj; return *this;}
    ::java::nio::channels::Channels& operator=(::java::nio::channels::Channels&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::io::InputStream newInputStream(const ::java::nio::channels::ReadableByteChannel&);
    static ::java::io::OutputStream newOutputStream(const ::java::nio::channels::WritableByteChannel&);
    static ::java::nio::channels::ReadableByteChannel newChannel(const ::java::io::InputStream&);
    static ::java::nio::channels::WritableByteChannel newChannel(const ::java::io::OutputStream&);
    static ::java::io::Reader newReader(const ::java::nio::channels::ReadableByteChannel&, const ::java::nio::charset::CharsetDecoder&, int32_t);
    static ::java::io::Reader newReader(const ::java::nio::channels::ReadableByteChannel&, const ::java::lang::String&);
    static ::java::io::Writer newWriter(const ::java::nio::channels::WritableByteChannel&, const ::java::nio::charset::CharsetEncoder&, int32_t);
    static ::java::io::Writer newWriter(const ::java::nio::channels::WritableByteChannel&, const ::java::lang::String&);

};
}
}
}


