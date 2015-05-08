#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace nio { namespace channels { class Pipe; } } }
namespace java { namespace nio { namespace channels { class Pipe_SinkChannel; } } }
namespace java { namespace nio { namespace channels { class Pipe_SourceChannel; } } }

namespace java {
namespace nio {
namespace channels {
class Pipe : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pipe(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pipe(const ::java::nio::channels::Pipe& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Pipe(::java::nio::channels::Pipe&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::Pipe& operator=(const ::java::nio::channels::Pipe& x) {obj = x.obj; return *this;}
    ::java::nio::channels::Pipe& operator=(::java::nio::channels::Pipe&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::channels::Pipe open();
    ::java::nio::channels::Pipe_SinkChannel sink() const ;
    ::java::nio::channels::Pipe_SourceChannel source() const ;

};
}
}
}

#include "java.nio.channels.Pipe_SinkChannel.hpp"
#include "java.nio.channels.Pipe_SourceChannel.hpp"

