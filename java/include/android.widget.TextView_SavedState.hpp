#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View_BaseSavedState.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class TextView_SavedState : public virtual ::java::lang::Object,
                            public virtual ::android::view::View_BaseSavedState {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextView_SavedState(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::view::AbsSavedState(_obj), ::android::view::View_BaseSavedState(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextView_SavedState(const ::android::widget::TextView_SavedState& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0), ::android::view::View_BaseSavedState((jobject)0) {obj = x.obj;}
    TextView_SavedState(::android::widget::TextView_SavedState&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0), ::android::view::View_BaseSavedState((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TextView_SavedState& operator=(const ::android::widget::TextView_SavedState& x) {obj = x.obj; return *this;}
    ::android::widget::TextView_SavedState& operator=(::android::widget::TextView_SavedState&& x) {obj = std::move(x.obj); return *this;}
    
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    ::java::lang::String toString() const ;

};
}
}


