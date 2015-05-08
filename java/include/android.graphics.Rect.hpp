#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Rect : public virtual ::java::lang::Object,
             public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Rect(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Rect(const ::android::graphics::Rect& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Rect(::android::graphics::Rect&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Rect& operator=(const ::android::graphics::Rect& x) {obj = x.obj; return *this;}
    ::android::graphics::Rect& operator=(::android::graphics::Rect&& x) {obj = std::move(x.obj); return *this;}
    
    Rect();
    Rect(int32_t, int32_t, int32_t, int32_t);
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;
    ::java::lang::String toShortString() const ;
    ::java::lang::String flattenToString() const ;
    static ::android::graphics::Rect unflattenFromString(const ::java::lang::String&);
    bool isEmpty() const ;
    int32_t width() const ;
    int32_t height() const ;
    int32_t centerX() const ;
    int32_t centerY() const ;
    float exactCenterX() const ;
    float exactCenterY() const ;
    void setEmpty() const ;
    void set(int32_t, int32_t, int32_t, int32_t) const ;
    void set(const ::android::graphics::Rect&) const ;
    void offset(int32_t, int32_t) const ;
    void offsetTo(int32_t, int32_t) const ;
    void inset(int32_t, int32_t) const ;
    bool contains(int32_t, int32_t) const ;
    bool contains(int32_t, int32_t, int32_t, int32_t) const ;
    bool contains(const ::android::graphics::Rect&) const ;
    bool intersect(int32_t, int32_t, int32_t, int32_t) const ;
    bool intersect(const ::android::graphics::Rect&) const ;
    bool setIntersect(const ::android::graphics::Rect&, const ::android::graphics::Rect&) const ;
    bool intersects(int32_t, int32_t, int32_t, int32_t) const ;
    static bool intersects(const ::android::graphics::Rect&, const ::android::graphics::Rect&);
    void union_(int32_t, int32_t, int32_t, int32_t) const ;
    void union_(const ::android::graphics::Rect&) const ;
    void union_(int32_t, int32_t) const ;
    void sort() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void readFromParcel(const ::android::os::Parcel&) const ;

};
}
}


