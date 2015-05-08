#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.Channel.hpp"
#include "java.nio.channels.InterruptibleChannel.hpp"


namespace java {
namespace nio {
namespace channels {
namespace spi {
class AbstractInterruptibleChannel : public virtual ::java::lang::Object,
                                     public virtual ::java::nio::channels::Channel,
                                     public virtual ::java::nio::channels::InterruptibleChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractInterruptibleChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::Channel(_obj), ::java::nio::channels::InterruptibleChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractInterruptibleChannel(const ::java::nio::channels::spi::AbstractInterruptibleChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0) {obj = x.obj;}
    AbstractInterruptibleChannel(::java::nio::channels::spi::AbstractInterruptibleChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::spi::AbstractInterruptibleChannel& operator=(const ::java::nio::channels::spi::AbstractInterruptibleChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::spi::AbstractInterruptibleChannel& operator=(::java::nio::channels::spi::AbstractInterruptibleChannel&& x) {obj = std::move(x.obj); return *this;}
    
    bool isOpen() const ;
    void close() const ;

};
}
}
}
}


