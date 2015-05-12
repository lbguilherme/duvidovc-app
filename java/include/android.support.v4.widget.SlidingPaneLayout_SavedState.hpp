#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View_BaseSavedState.hpp"

namespace android { namespace os { class Parcel; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SlidingPaneLayout_SavedState : public virtual ::java::lang::Object,
                                     public virtual ::android::view::View_BaseSavedState {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SlidingPaneLayout_SavedState(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::view::AbsSavedState(_obj), ::android::view::View_BaseSavedState(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SlidingPaneLayout_SavedState(const ::android::support::v4::widget::SlidingPaneLayout_SavedState& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0), ::android::view::View_BaseSavedState((jobject)0) {obj = x.obj;}
    SlidingPaneLayout_SavedState(::android::support::v4::widget::SlidingPaneLayout_SavedState&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0), ::android::view::View_BaseSavedState((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SlidingPaneLayout_SavedState& operator=(const ::android::support::v4::widget::SlidingPaneLayout_SavedState& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SlidingPaneLayout_SavedState& operator=(::android::support::v4::widget::SlidingPaneLayout_SavedState&& x) {obj = std::move(x.obj); return *this;}
    
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}
}

