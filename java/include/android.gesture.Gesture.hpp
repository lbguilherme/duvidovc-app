#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace gesture { class GestureStroke; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class Path; } }
namespace android { namespace graphics { class RectF; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace gesture {
class Gesture : public virtual ::java::lang::Object,
                public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Gesture(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Gesture(const ::android::gesture::Gesture& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Gesture(::android::gesture::Gesture&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::Gesture& operator=(const ::android::gesture::Gesture& x) {obj = x.obj; return *this;}
    ::android::gesture::Gesture& operator=(::android::gesture::Gesture&& x) {obj = std::move(x.obj); return *this;}
    
    Gesture();
    ::java::lang::Object clone() const ;
    ::java::util::ArrayList getStrokes() const ;
    int32_t getStrokesCount() const ;
    void addStroke(const ::android::gesture::GestureStroke&) const ;
    float getLength() const ;
    ::android::graphics::RectF getBoundingBox() const ;
    ::android::graphics::Path toPath() const ;
    ::android::graphics::Path toPath(const ::android::graphics::Path&) const ;
    ::android::graphics::Path toPath(int32_t, int32_t, int32_t, int32_t) const ;
    ::android::graphics::Path toPath(const ::android::graphics::Path&, int32_t, int32_t, int32_t, int32_t) const ;
    int64_t getID() const ;
    ::android::graphics::Bitmap toBitmap(int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    ::android::graphics::Bitmap toBitmap(int32_t, int32_t, int32_t, int32_t) const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t describeContents() const ;

};
}
}


