#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace nio { namespace channels { class Channel; } } }
namespace java { namespace nio { namespace channels { class DatagramChannel; } } }
namespace java { namespace nio { namespace channels { class Pipe; } } }
namespace java { namespace nio { namespace channels { class ServerSocketChannel; } } }
namespace java { namespace nio { namespace channels { class SocketChannel; } } }
namespace java { namespace nio { namespace channels { namespace spi { class AbstractSelector; } } } }
namespace java { namespace nio { namespace channels { namespace spi { class SelectorProvider; } } } }

namespace java {
namespace nio {
namespace channels {
namespace spi {
class SelectorProvider : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SelectorProvider(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SelectorProvider(const ::java::nio::channels::spi::SelectorProvider& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SelectorProvider(::java::nio::channels::spi::SelectorProvider&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::spi::SelectorProvider& operator=(const ::java::nio::channels::spi::SelectorProvider& x) {obj = x.obj; return *this;}
    ::java::nio::channels::spi::SelectorProvider& operator=(::java::nio::channels::spi::SelectorProvider&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::channels::spi::SelectorProvider provider();
    ::java::nio::channels::DatagramChannel openDatagramChannel() const;
    ::java::nio::channels::Pipe openPipe() const;
    ::java::nio::channels::spi::AbstractSelector openSelector() const;
    ::java::nio::channels::ServerSocketChannel openServerSocketChannel() const;
    ::java::nio::channels::SocketChannel openSocketChannel() const;
    ::java::nio::channels::Channel inheritedChannel() const;

};
}
}
}
}


