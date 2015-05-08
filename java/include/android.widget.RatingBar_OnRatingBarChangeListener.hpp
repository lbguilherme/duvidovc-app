#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class RatingBar; } }

namespace android {
namespace widget {
class RatingBar_OnRatingBarChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RatingBar_OnRatingBarChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RatingBar_OnRatingBarChangeListener(const ::android::widget::RatingBar_OnRatingBarChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RatingBar_OnRatingBarChangeListener(::android::widget::RatingBar_OnRatingBarChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RatingBar_OnRatingBarChangeListener& operator=(const ::android::widget::RatingBar_OnRatingBarChangeListener& x) {obj = x.obj; return *this;}
    ::android::widget::RatingBar_OnRatingBarChangeListener& operator=(::android::widget::RatingBar_OnRatingBarChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onRatingChanged(const ::android::widget::RatingBar&, float, bool) const ;

};
}
}


