#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.AbsSavedState.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class Parcelable; } }

namespace android {
namespace view {
class View_BaseSavedState : public virtual ::java::lang::Object,
                            public virtual ::android::view::AbsSavedState {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_BaseSavedState(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::view::AbsSavedState(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_BaseSavedState(const ::android::view::View_BaseSavedState& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0) {obj = x.obj;}
    View_BaseSavedState(::android::view::View_BaseSavedState&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_BaseSavedState& operator=(const ::android::view::View_BaseSavedState& x) {obj = x.obj; return *this;}
    ::android::view::View_BaseSavedState& operator=(::android::view::View_BaseSavedState&& x) {obj = std::move(x.obj); return *this;}
    
    View_BaseSavedState(const ::android::os::Parcel&);
    View_BaseSavedState(const ::android::os::Parcelable&);

};
}
}


