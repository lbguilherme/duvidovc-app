#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.SelectableChannel.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace nio { namespace channels { class SelectableChannel; } } }
namespace java { namespace nio { namespace channels { class SelectionKey; } } }
namespace java { namespace nio { namespace channels { class Selector; } } }
namespace java { namespace nio { namespace channels { namespace spi { class SelectorProvider; } } } }

namespace java {
namespace nio {
namespace channels {
namespace spi {
class AbstractSelectableChannel : public virtual ::java::lang::Object,
                                  public virtual ::java::nio::channels::SelectableChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractSelectableChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::Channel(_obj), ::java::nio::channels::InterruptibleChannel(_obj), ::java::nio::channels::SelectableChannel(_obj), ::java::nio::channels::spi::AbstractInterruptibleChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractSelectableChannel(const ::java::nio::channels::spi::AbstractSelectableChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::SelectableChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0) {obj = x.obj;}
    AbstractSelectableChannel(::java::nio::channels::spi::AbstractSelectableChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::SelectableChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::spi::AbstractSelectableChannel& operator=(const ::java::nio::channels::spi::AbstractSelectableChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::spi::AbstractSelectableChannel& operator=(::java::nio::channels::spi::AbstractSelectableChannel&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::nio::channels::spi::SelectorProvider provider() const;
    bool isRegistered() const;
    ::java::nio::channels::SelectionKey keyFor(const ::java::nio::channels::Selector&) const;
    ::java::nio::channels::SelectionKey register_(const ::java::nio::channels::Selector&, int32_t, const ::java::lang::Object&) const;
    bool isBlocking() const;
    ::java::lang::Object blockingLock() const;
    ::java::nio::channels::SelectableChannel configureBlocking(bool) const;

};
}
}
}
}


