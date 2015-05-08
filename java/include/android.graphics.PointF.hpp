#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace graphics { class Point; } }
namespace android { namespace graphics { class PointF; } }
namespace android { namespace os { class Parcel; } }

namespace android {
namespace graphics {
class PointF : public virtual ::java::lang::Object,
               public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PointF(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PointF(const ::android::graphics::PointF& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    PointF(::android::graphics::PointF&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::PointF& operator=(const ::android::graphics::PointF& x) {obj = x.obj; return *this;}
    ::android::graphics::PointF& operator=(::android::graphics::PointF&& x) {obj = std::move(x.obj); return *this;}
    
    PointF();
    PointF(float, float);
    PointF(const ::android::graphics::Point&);
    void set(float, float) const ;
    void set(const ::android::graphics::PointF&) const ;
    void negate() const ;
    void offset(float, float) const ;
    bool equals(float, float) const ;
    float length() const ;
    static float length(float, float);
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void readFromParcel(const ::android::os::Parcel&) const ;

};
}
}


