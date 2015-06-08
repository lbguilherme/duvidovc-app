#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class Bitmap_CompressFormat; } }
namespace android { namespace graphics { class Bitmap_Config; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Matrix; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace util { class DisplayMetrics; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace nio { class Buffer; } }

namespace android {
namespace graphics {
class Bitmap : public virtual ::java::lang::Object,
               public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Bitmap(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Bitmap(const ::android::graphics::Bitmap& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Bitmap(::android::graphics::Bitmap&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Bitmap& operator=(const ::android::graphics::Bitmap& x) {obj = x.obj; return *this;}
    ::android::graphics::Bitmap& operator=(::android::graphics::Bitmap&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getDensity() const;
    void setDensity(int32_t) const;
    void recycle() const;
    bool isRecycled() const;
    int32_t getGenerationId() const;
    void copyPixelsToBuffer(const ::java::nio::Buffer&) const;
    void copyPixelsFromBuffer(const ::java::nio::Buffer&) const;
    ::android::graphics::Bitmap copy(const ::android::graphics::Bitmap_Config&, bool) const;
    static ::android::graphics::Bitmap createScaledBitmap(const ::android::graphics::Bitmap&, int32_t, int32_t, bool);
    static ::android::graphics::Bitmap createBitmap(const ::android::graphics::Bitmap&);
    static ::android::graphics::Bitmap createBitmap(const ::android::graphics::Bitmap&, int32_t, int32_t, int32_t, int32_t);
    static ::android::graphics::Bitmap createBitmap(const ::android::graphics::Bitmap&, int32_t, int32_t, int32_t, int32_t, const ::android::graphics::Matrix&, bool);
    static ::android::graphics::Bitmap createBitmap(int32_t, int32_t, const ::android::graphics::Bitmap_Config&);
    static ::android::graphics::Bitmap createBitmap(const std::vector< int32_t>&, int32_t, int32_t, int32_t, int32_t, const ::android::graphics::Bitmap_Config&);
    static ::android::graphics::Bitmap createBitmap(const std::vector< int32_t>&, int32_t, int32_t, const ::android::graphics::Bitmap_Config&);
    std::vector< int8_t> getNinePatchChunk() const;
    bool compress(const ::android::graphics::Bitmap_CompressFormat&, int32_t, const ::java::io::OutputStream&) const;
    bool isMutable() const;
    int32_t getWidth() const;
    int32_t getHeight() const;
    int32_t getScaledWidth(const ::android::graphics::Canvas&) const;
    int32_t getScaledHeight(const ::android::graphics::Canvas&) const;
    int32_t getScaledWidth(const ::android::util::DisplayMetrics&) const;
    int32_t getScaledHeight(const ::android::util::DisplayMetrics&) const;
    int32_t getScaledWidth(int32_t) const;
    int32_t getScaledHeight(int32_t) const;
    int32_t getRowBytes() const;
    int32_t getByteCount() const;
    ::android::graphics::Bitmap_Config getConfig() const;
    bool hasAlpha() const;
    void setHasAlpha(bool) const;
    void eraseColor(int32_t) const;
    int32_t getPixel(int32_t, int32_t) const;
    void getPixels(const std::vector< int32_t>&, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void setPixel(int32_t, int32_t, int32_t) const;
    void setPixels(const std::vector< int32_t>&, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    ::android::graphics::Bitmap extractAlpha() const;
    ::android::graphics::Bitmap extractAlpha(const ::android::graphics::Paint&, const std::vector< int32_t>&) const;
    bool sameAs(const ::android::graphics::Bitmap&) const;
    void prepareToDraw() const;

};
}
}

#include "android.graphics.Bitmap_CompressFormat.hpp"
#include "android.graphics.Bitmap_Config.hpp"

