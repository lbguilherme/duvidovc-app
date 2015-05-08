#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.ReadableByteChannel.hpp"
#include "java.nio.channels.WritableByteChannel.hpp"


namespace java {
namespace nio {
namespace channels {
class ByteChannel : public virtual ::java::lang::Object,
                    public virtual ::java::nio::channels::ReadableByteChannel,
                    public virtual ::java::nio::channels::WritableByteChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ByteChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::Channel(_obj), ::java::nio::channels::ReadableByteChannel(_obj), ::java::nio::channels::WritableByteChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ByteChannel(const ::java::nio::channels::ByteChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::ReadableByteChannel((jobject)0), ::java::nio::channels::WritableByteChannel((jobject)0) {obj = x.obj;}
    ByteChannel(::java::nio::channels::ByteChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::ReadableByteChannel((jobject)0), ::java::nio::channels::WritableByteChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::ByteChannel& operator=(const ::java::nio::channels::ByteChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::ByteChannel& operator=(::java::nio::channels::ByteChannel&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


