#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace support { namespace v4 { namespace media { class RatingCompat; } } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
class RatingCompat : public virtual ::java::lang::Object,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RatingCompat(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RatingCompat(const ::android::support::v4::media::RatingCompat& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    RatingCompat(::android::support::v4::media::RatingCompat&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::RatingCompat& operator=(const ::android::support::v4::media::RatingCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::RatingCompat& operator=(::android::support::v4::media::RatingCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    static ::android::support::v4::media::RatingCompat newUnratedRating(int32_t);
    static ::android::support::v4::media::RatingCompat newHeartRating(bool);
    static ::android::support::v4::media::RatingCompat newThumbRating(bool);
    static ::android::support::v4::media::RatingCompat newStarRating(int32_t, float);
    static ::android::support::v4::media::RatingCompat newPercentageRating(float);
    bool isRated() const ;
    int32_t getRatingStyle() const ;
    bool hasHeart() const ;
    bool isThumbUp() const ;
    float getStarRating() const ;
    float getPercentRating() const ;
    static ::android::support::v4::media::RatingCompat fromRating(const ::java::lang::Object&);
    ::java::lang::Object getRating() const ;

};
}
}
}
}


