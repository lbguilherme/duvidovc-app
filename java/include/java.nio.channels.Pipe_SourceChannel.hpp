#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.ReadableByteChannel.hpp"
#include "java.nio.channels.ScatteringByteChannel.hpp"
#include "java.nio.channels.spi.AbstractSelectableChannel.hpp"


namespace java {
namespace nio {
namespace channels {
class Pipe_SourceChannel : public virtual ::java::lang::Object,
                           public virtual ::java::nio::channels::ReadableByteChannel,
                           public virtual ::java::nio::channels::ScatteringByteChannel,
                           public virtual ::java::nio::channels::spi::AbstractSelectableChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pipe_SourceChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::Channel(_obj), ::java::nio::channels::InterruptibleChannel(_obj), ::java::nio::channels::ReadableByteChannel(_obj), ::java::nio::channels::ScatteringByteChannel(_obj), ::java::nio::channels::SelectableChannel(_obj), ::java::nio::channels::spi::AbstractInterruptibleChannel(_obj), ::java::nio::channels::spi::AbstractSelectableChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pipe_SourceChannel(const ::java::nio::channels::Pipe_SourceChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::ReadableByteChannel((jobject)0), ::java::nio::channels::ScatteringByteChannel((jobject)0), ::java::nio::channels::SelectableChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0), ::java::nio::channels::spi::AbstractSelectableChannel((jobject)0) {obj = x.obj;}
    Pipe_SourceChannel(::java::nio::channels::Pipe_SourceChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::ReadableByteChannel((jobject)0), ::java::nio::channels::ScatteringByteChannel((jobject)0), ::java::nio::channels::SelectableChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0), ::java::nio::channels::spi::AbstractSelectableChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::Pipe_SourceChannel& operator=(const ::java::nio::channels::Pipe_SourceChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::Pipe_SourceChannel& operator=(::java::nio::channels::Pipe_SourceChannel&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t validOps() const ;

};
}
}
}


