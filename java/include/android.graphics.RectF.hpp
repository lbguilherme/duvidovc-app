#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { class RectF; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class RectF : public virtual ::java::lang::Object,
              public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RectF(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RectF(const ::android::graphics::RectF& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    RectF(::android::graphics::RectF&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::RectF& operator=(const ::android::graphics::RectF& x) {obj = x.obj; return *this;}
    ::android::graphics::RectF& operator=(::android::graphics::RectF&& x) {obj = std::move(x.obj); return *this;}
    
    RectF();
    RectF(float, float, float, float);
    RectF(const ::android::graphics::Rect&);
    ::java::lang::String toString() const;
    ::java::lang::String toShortString() const;
    bool isEmpty() const;
    float width() const;
    float height() const;
    float centerX() const;
    float centerY() const;
    void setEmpty() const;
    void set(float, float, float, float) const;
    void set(const ::android::graphics::RectF&) const;
    void set(const ::android::graphics::Rect&) const;
    void offset(float, float) const;
    void offsetTo(float, float) const;
    void inset(float, float) const;
    bool contains(float, float) const;
    bool contains(float, float, float, float) const;
    bool contains(const ::android::graphics::RectF&) const;
    bool intersect(float, float, float, float) const;
    bool intersect(const ::android::graphics::RectF&) const;
    bool setIntersect(const ::android::graphics::RectF&, const ::android::graphics::RectF&) const;
    bool intersects(float, float, float, float) const;
    static bool intersects(const ::android::graphics::RectF&, const ::android::graphics::RectF&);
    void round(const ::android::graphics::Rect&) const;
    void roundOut(const ::android::graphics::Rect&) const;
    void union_(float, float, float, float) const;
    void union_(const ::android::graphics::RectF&) const;
    void union_(float, float) const;
    void sort() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    void readFromParcel(const ::android::os::Parcel&) const;

};
}
}


