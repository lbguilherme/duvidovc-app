#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace media {
class MediaMetadataRetriever : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaMetadataRetriever(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaMetadataRetriever(const ::android::media::MediaMetadataRetriever& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaMetadataRetriever(::android::media::MediaMetadataRetriever&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaMetadataRetriever& operator=(const ::android::media::MediaMetadataRetriever& x) {obj = x.obj; return *this;}
    ::android::media::MediaMetadataRetriever& operator=(::android::media::MediaMetadataRetriever&& x) {obj = std::move(x.obj); return *this;}
    
    MediaMetadataRetriever();
    void setDataSource(const ::java::lang::String&) const ;
    void setDataSource(const ::java::lang::String&, const ::java::util::Map&) const ;
    void setDataSource(const ::java::io::FileDescriptor&, int64_t, int64_t) const ;
    void setDataSource(const ::java::io::FileDescriptor&) const ;
    void setDataSource(const ::android::content::Context&, const ::android::net::Uri&) const ;
    ::java::lang::String extractMetadata(int32_t) const ;
    ::android::graphics::Bitmap getFrameAtTime(int64_t, int32_t) const ;
    ::android::graphics::Bitmap getFrameAtTime(int64_t) const ;
    ::android::graphics::Bitmap getFrameAtTime() const ;
    std::vector< int8_t> getEmbeddedPicture() const ;
    void release() const ;

};
}
}


