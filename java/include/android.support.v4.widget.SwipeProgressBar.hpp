#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SwipeProgressBar : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SwipeProgressBar(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SwipeProgressBar(const ::android::support::v4::widget::SwipeProgressBar& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SwipeProgressBar(::android::support::v4::widget::SwipeProgressBar&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SwipeProgressBar& operator=(const ::android::support::v4::widget::SwipeProgressBar& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SwipeProgressBar& operator=(::android::support::v4::widget::SwipeProgressBar&& x) {obj = std::move(x.obj); return *this;}
    
    SwipeProgressBar(const ::android::view::View&);

};
}
}
}
}


