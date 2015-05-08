#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace view { class InputDevice; } }

namespace android {
namespace view {
class InputEvent : public virtual ::java::lang::Object,
                   public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputEvent(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputEvent(const ::android::view::InputEvent& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    InputEvent(::android::view::InputEvent&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::InputEvent& operator=(const ::android::view::InputEvent& x) {obj = x.obj; return *this;}
    ::android::view::InputEvent& operator=(::android::view::InputEvent&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getDeviceId() const ;
    ::android::view::InputDevice getDevice() const ;
    int32_t getSource() const ;
    int32_t describeContents() const ;

};
}
}


