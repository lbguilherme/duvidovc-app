#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.WritableByteChannel.hpp"

namespace java { namespace nio { class ByteBuffer; } }

namespace java {
namespace nio {
namespace channels {
class GatheringByteChannel : public virtual ::java::lang::Object,
                             public virtual ::java::nio::channels::WritableByteChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GatheringByteChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::Channel(_obj), ::java::nio::channels::WritableByteChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GatheringByteChannel(const ::java::nio::channels::GatheringByteChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::WritableByteChannel((jobject)0) {obj = x.obj;}
    GatheringByteChannel(::java::nio::channels::GatheringByteChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::WritableByteChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::GatheringByteChannel& operator=(const ::java::nio::channels::GatheringByteChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::GatheringByteChannel& operator=(::java::nio::channels::GatheringByteChannel&& x) {obj = std::move(x.obj); return *this;}
    
    int64_t write(const std::vector< ::java::nio::ByteBuffer>&) const ;
    int64_t write(const std::vector< ::java::nio::ByteBuffer>&, int32_t, int32_t) const ;

};
}
}
}


