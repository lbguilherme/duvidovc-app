#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.animation.Animation.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace view {
namespace animation {
class AlphaAnimation : public virtual ::java::lang::Object,
                       public virtual ::android::view::animation::Animation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlphaAnimation(jobject _obj) : ::java::lang::Object(_obj), ::android::view::animation::Animation(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlphaAnimation(const ::android::view::animation::AlphaAnimation& x) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    AlphaAnimation(::android::view::animation::AlphaAnimation&& x) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::AlphaAnimation& operator=(const ::android::view::animation::AlphaAnimation& x) {obj = x.obj; return *this;}
    ::android::view::animation::AlphaAnimation& operator=(::android::view::animation::AlphaAnimation&& x) {obj = std::move(x.obj); return *this;}
    
    AlphaAnimation(const ::android::content::Context&, const ::android::util::AttributeSet&);
    AlphaAnimation(float, float);
    bool willChangeTransformationMatrix() const;
    bool willChangeBounds() const;

};
}
}
}


