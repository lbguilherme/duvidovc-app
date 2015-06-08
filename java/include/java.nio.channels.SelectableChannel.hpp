#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.Channel.hpp"
#include "java.nio.channels.spi.AbstractInterruptibleChannel.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace nio { namespace channels { class SelectableChannel; } } }
namespace java { namespace nio { namespace channels { class SelectionKey; } } }
namespace java { namespace nio { namespace channels { class Selector; } } }
namespace java { namespace nio { namespace channels { namespace spi { class SelectorProvider; } } } }

namespace java {
namespace nio {
namespace channels {
class SelectableChannel : public virtual ::java::lang::Object,
                          public virtual ::java::nio::channels::Channel,
                          public virtual ::java::nio::channels::spi::AbstractInterruptibleChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SelectableChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::Channel(_obj), ::java::nio::channels::InterruptibleChannel(_obj), ::java::nio::channels::spi::AbstractInterruptibleChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SelectableChannel(const ::java::nio::channels::SelectableChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0) {obj = x.obj;}
    SelectableChannel(::java::nio::channels::SelectableChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::SelectableChannel& operator=(const ::java::nio::channels::SelectableChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::SelectableChannel& operator=(::java::nio::channels::SelectableChannel&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object blockingLock() const;
    ::java::nio::channels::SelectableChannel configureBlocking(bool) const;
    bool isBlocking() const;
    bool isRegistered() const;
    ::java::nio::channels::SelectionKey keyFor(const ::java::nio::channels::Selector&) const;
    ::java::nio::channels::spi::SelectorProvider provider() const;
    ::java::nio::channels::SelectionKey register_(const ::java::nio::channels::Selector&, int32_t) const;
    ::java::nio::channels::SelectionKey register_(const ::java::nio::channels::Selector&, int32_t, const ::java::lang::Object&) const;
    int32_t validOps() const;

};
}
}
}


