#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.ReadableByteChannel.hpp"

namespace java { namespace nio { class ByteBuffer; } }

namespace java {
namespace nio {
namespace channels {
class ScatteringByteChannel : public virtual ::java::lang::Object,
                              public virtual ::java::nio::channels::ReadableByteChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScatteringByteChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::Channel(_obj), ::java::nio::channels::ReadableByteChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScatteringByteChannel(const ::java::nio::channels::ScatteringByteChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::ReadableByteChannel((jobject)0) {obj = x.obj;}
    ScatteringByteChannel(::java::nio::channels::ScatteringByteChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::ReadableByteChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::ScatteringByteChannel& operator=(const ::java::nio::channels::ScatteringByteChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::ScatteringByteChannel& operator=(::java::nio::channels::ScatteringByteChannel&& x) {obj = std::move(x.obj); return *this;}
    
    int64_t read(const std::vector< ::java::nio::ByteBuffer>&) const ;
    int64_t read(const std::vector< ::java::nio::ByteBuffer>&, int32_t, int32_t) const ;

};
}
}
}


