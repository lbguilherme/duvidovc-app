#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.GatheringByteChannel.hpp"
#include "java.nio.channels.WritableByteChannel.hpp"
#include "java.nio.channels.spi.AbstractSelectableChannel.hpp"


namespace java {
namespace nio {
namespace channels {
class Pipe_SinkChannel : public virtual ::java::lang::Object,
                         public virtual ::java::nio::channels::GatheringByteChannel,
                         public virtual ::java::nio::channels::WritableByteChannel,
                         public virtual ::java::nio::channels::spi::AbstractSelectableChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pipe_SinkChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::Channel(_obj), ::java::nio::channels::GatheringByteChannel(_obj), ::java::nio::channels::InterruptibleChannel(_obj), ::java::nio::channels::SelectableChannel(_obj), ::java::nio::channels::WritableByteChannel(_obj), ::java::nio::channels::spi::AbstractInterruptibleChannel(_obj), ::java::nio::channels::spi::AbstractSelectableChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pipe_SinkChannel(const ::java::nio::channels::Pipe_SinkChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::GatheringByteChannel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::SelectableChannel((jobject)0), ::java::nio::channels::WritableByteChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0), ::java::nio::channels::spi::AbstractSelectableChannel((jobject)0) {obj = x.obj;}
    Pipe_SinkChannel(::java::nio::channels::Pipe_SinkChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::GatheringByteChannel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::SelectableChannel((jobject)0), ::java::nio::channels::WritableByteChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0), ::java::nio::channels::spi::AbstractSelectableChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::Pipe_SinkChannel& operator=(const ::java::nio::channels::Pipe_SinkChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::Pipe_SinkChannel& operator=(::java::nio::channels::Pipe_SinkChannel&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t validOps() const ;

};
}
}
}


