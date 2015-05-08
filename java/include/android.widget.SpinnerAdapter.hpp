#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.Adapter.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace widget {
class SpinnerAdapter : public virtual ::java::lang::Object,
                       public virtual ::android::widget::Adapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpinnerAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::Adapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpinnerAdapter(const ::android::widget::SpinnerAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0) {obj = x.obj;}
    SpinnerAdapter(::android::widget::SpinnerAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SpinnerAdapter& operator=(const ::android::widget::SpinnerAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::SpinnerAdapter& operator=(::android::widget::SpinnerAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View getDropDownView(int32_t, const ::android::view::View&, const ::android::view::ViewGroup&) const ;

};
}
}


