#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.ByteChannel.hpp"
#include "java.nio.channels.GatheringByteChannel.hpp"
#include "java.nio.channels.ScatteringByteChannel.hpp"
#include "java.nio.channels.spi.AbstractSelectableChannel.hpp"

namespace java { namespace net { class DatagramSocket; } }
namespace java { namespace net { class SocketAddress; } }
namespace java { namespace nio { class ByteBuffer; } }
namespace java { namespace nio { namespace channels { class DatagramChannel; } } }

namespace java {
namespace nio {
namespace channels {
class DatagramChannel : public virtual ::java::lang::Object,
                        public virtual ::java::nio::channels::ByteChannel,
                        public virtual ::java::nio::channels::GatheringByteChannel,
                        public virtual ::java::nio::channels::ScatteringByteChannel,
                        public virtual ::java::nio::channels::spi::AbstractSelectableChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatagramChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::ByteChannel(_obj), ::java::nio::channels::Channel(_obj), ::java::nio::channels::GatheringByteChannel(_obj), ::java::nio::channels::InterruptibleChannel(_obj), ::java::nio::channels::ReadableByteChannel(_obj), ::java::nio::channels::ScatteringByteChannel(_obj), ::java::nio::channels::SelectableChannel(_obj), ::java::nio::channels::WritableByteChannel(_obj), ::java::nio::channels::spi::AbstractInterruptibleChannel(_obj), ::java::nio::channels::spi::AbstractSelectableChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatagramChannel(const ::java::nio::channels::DatagramChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::ByteChannel((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::GatheringByteChannel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::ReadableByteChannel((jobject)0), ::java::nio::channels::ScatteringByteChannel((jobject)0), ::java::nio::channels::SelectableChannel((jobject)0), ::java::nio::channels::WritableByteChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0), ::java::nio::channels::spi::AbstractSelectableChannel((jobject)0) {obj = x.obj;}
    DatagramChannel(::java::nio::channels::DatagramChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::ByteChannel((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::GatheringByteChannel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::ReadableByteChannel((jobject)0), ::java::nio::channels::ScatteringByteChannel((jobject)0), ::java::nio::channels::SelectableChannel((jobject)0), ::java::nio::channels::WritableByteChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0), ::java::nio::channels::spi::AbstractSelectableChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::DatagramChannel& operator=(const ::java::nio::channels::DatagramChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::DatagramChannel& operator=(::java::nio::channels::DatagramChannel&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::channels::DatagramChannel open();
    int32_t validOps() const ;
    ::java::net::DatagramSocket socket() const ;
    bool isConnected() const ;
    ::java::nio::channels::DatagramChannel connect(const ::java::net::SocketAddress&) const ;
    ::java::nio::channels::DatagramChannel disconnect() const ;
    ::java::net::SocketAddress receive(const ::java::nio::ByteBuffer&) const ;
    int32_t send(const ::java::nio::ByteBuffer&, const ::java::net::SocketAddress&) const ;
    int32_t read(const ::java::nio::ByteBuffer&) const ;
    int64_t read(const std::vector< ::java::nio::ByteBuffer>&, int32_t, int32_t) const ;
    int64_t read(const std::vector< ::java::nio::ByteBuffer>&) const ;
    int32_t write(const ::java::nio::ByteBuffer&) const ;
    int64_t write(const std::vector< ::java::nio::ByteBuffer>&, int32_t, int32_t) const ;
    int64_t write(const std::vector< ::java::nio::ByteBuffer>&) const ;

};
}
}
}


