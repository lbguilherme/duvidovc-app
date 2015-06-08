#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.spi.AbstractSelectableChannel.hpp"

namespace java { namespace net { class ServerSocket; } }
namespace java { namespace nio { namespace channels { class ServerSocketChannel; } } }
namespace java { namespace nio { namespace channels { class SocketChannel; } } }

namespace java {
namespace nio {
namespace channels {
class ServerSocketChannel : public virtual ::java::lang::Object,
                            public virtual ::java::nio::channels::spi::AbstractSelectableChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ServerSocketChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::Channel(_obj), ::java::nio::channels::InterruptibleChannel(_obj), ::java::nio::channels::SelectableChannel(_obj), ::java::nio::channels::spi::AbstractInterruptibleChannel(_obj), ::java::nio::channels::spi::AbstractSelectableChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ServerSocketChannel(const ::java::nio::channels::ServerSocketChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::SelectableChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0), ::java::nio::channels::spi::AbstractSelectableChannel((jobject)0) {obj = x.obj;}
    ServerSocketChannel(::java::nio::channels::ServerSocketChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::SelectableChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0), ::java::nio::channels::spi::AbstractSelectableChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::ServerSocketChannel& operator=(const ::java::nio::channels::ServerSocketChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::ServerSocketChannel& operator=(::java::nio::channels::ServerSocketChannel&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::channels::ServerSocketChannel open();
    int32_t validOps() const;
    ::java::net::ServerSocket socket() const;
    ::java::nio::channels::SocketChannel accept() const;

};
}
}
}


