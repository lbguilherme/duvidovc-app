#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.Channel.hpp"


namespace java {
namespace nio {
namespace channels {
class InterruptibleChannel : public virtual ::java::lang::Object,
                             public virtual ::java::nio::channels::Channel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InterruptibleChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::Channel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InterruptibleChannel(const ::java::nio::channels::InterruptibleChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0) {obj = x.obj;}
    InterruptibleChannel(::java::nio::channels::InterruptibleChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::InterruptibleChannel& operator=(const ::java::nio::channels::InterruptibleChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::InterruptibleChannel& operator=(::java::nio::channels::InterruptibleChannel&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const;

};
}
}
}


