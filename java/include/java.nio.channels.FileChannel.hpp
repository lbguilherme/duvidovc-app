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
#include "java.nio.channels.spi.AbstractInterruptibleChannel.hpp"

namespace java { namespace nio { class ByteBuffer; } }
namespace java { namespace nio { class MappedByteBuffer; } }
namespace java { namespace nio { namespace channels { class FileChannel; } } }
namespace java { namespace nio { namespace channels { class FileChannel_MapMode; } } }
namespace java { namespace nio { namespace channels { class FileLock; } } }
namespace java { namespace nio { namespace channels { class ReadableByteChannel; } } }
namespace java { namespace nio { namespace channels { class WritableByteChannel; } } }

namespace java {
namespace nio {
namespace channels {
class FileChannel : public virtual ::java::lang::Object,
                    public virtual ::java::nio::channels::ByteChannel,
                    public virtual ::java::nio::channels::GatheringByteChannel,
                    public virtual ::java::nio::channels::ScatteringByteChannel,
                    public virtual ::java::nio::channels::spi::AbstractInterruptibleChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileChannel(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::nio::channels::ByteChannel(_obj), ::java::nio::channels::Channel(_obj), ::java::nio::channels::GatheringByteChannel(_obj), ::java::nio::channels::InterruptibleChannel(_obj), ::java::nio::channels::ReadableByteChannel(_obj), ::java::nio::channels::ScatteringByteChannel(_obj), ::java::nio::channels::WritableByteChannel(_obj), ::java::nio::channels::spi::AbstractInterruptibleChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileChannel(const ::java::nio::channels::FileChannel& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::ByteChannel((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::GatheringByteChannel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::ReadableByteChannel((jobject)0), ::java::nio::channels::ScatteringByteChannel((jobject)0), ::java::nio::channels::WritableByteChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0) {obj = x.obj;}
    FileChannel(::java::nio::channels::FileChannel&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::nio::channels::ByteChannel((jobject)0), ::java::nio::channels::Channel((jobject)0), ::java::nio::channels::GatheringByteChannel((jobject)0), ::java::nio::channels::InterruptibleChannel((jobject)0), ::java::nio::channels::ReadableByteChannel((jobject)0), ::java::nio::channels::ScatteringByteChannel((jobject)0), ::java::nio::channels::WritableByteChannel((jobject)0), ::java::nio::channels::spi::AbstractInterruptibleChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::FileChannel& operator=(const ::java::nio::channels::FileChannel& x) {obj = x.obj; return *this;}
    ::java::nio::channels::FileChannel& operator=(::java::nio::channels::FileChannel&& x) {obj = std::move(x.obj); return *this;}
    
    void force(bool) const;
    ::java::nio::channels::FileLock lock() const;
    ::java::nio::channels::FileLock lock(int64_t, int64_t, bool) const;
    ::java::nio::MappedByteBuffer map(const ::java::nio::channels::FileChannel_MapMode&, int64_t, int64_t) const;
    int64_t position() const;
    ::java::nio::channels::FileChannel position(int64_t) const;
    int32_t read(const ::java::nio::ByteBuffer&) const;
    int32_t read(const ::java::nio::ByteBuffer&, int64_t) const;
    int64_t read(const std::vector< ::java::nio::ByteBuffer>&) const;
    int64_t read(const std::vector< ::java::nio::ByteBuffer>&, int32_t, int32_t) const;
    int64_t size() const;
    int64_t transferFrom(const ::java::nio::channels::ReadableByteChannel&, int64_t, int64_t) const;
    int64_t transferTo(int64_t, int64_t, const ::java::nio::channels::WritableByteChannel&) const;
    ::java::nio::channels::FileChannel truncate(int64_t) const;
    ::java::nio::channels::FileLock tryLock() const;
    ::java::nio::channels::FileLock tryLock(int64_t, int64_t, bool) const;
    int32_t write(const ::java::nio::ByteBuffer&) const;
    int32_t write(const ::java::nio::ByteBuffer&, int64_t) const;
    int64_t write(const std::vector< ::java::nio::ByteBuffer>&) const;
    int64_t write(const std::vector< ::java::nio::ByteBuffer>&, int32_t, int32_t) const;

};
}
}
}

#include "java.nio.channels.FileChannel_MapMode.hpp"

