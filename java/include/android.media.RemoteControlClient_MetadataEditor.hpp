#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace media { class RemoteControlClient_MetadataEditor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class RemoteControlClient_MetadataEditor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteControlClient_MetadataEditor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteControlClient_MetadataEditor(const ::android::media::RemoteControlClient_MetadataEditor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RemoteControlClient_MetadataEditor(::android::media::RemoteControlClient_MetadataEditor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::RemoteControlClient_MetadataEditor& operator=(const ::android::media::RemoteControlClient_MetadataEditor& x) {obj = x.obj; return *this;}
    ::android::media::RemoteControlClient_MetadataEditor& operator=(::android::media::RemoteControlClient_MetadataEditor&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::media::RemoteControlClient_MetadataEditor putString(int32_t, const ::java::lang::String&) const;
    ::android::media::RemoteControlClient_MetadataEditor putLong(int32_t, int64_t) const;
    ::android::media::RemoteControlClient_MetadataEditor putBitmap(int32_t, const ::android::graphics::Bitmap&) const;
    void clear() const;
    void apply() const;

};
}
}


