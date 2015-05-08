#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace view { class InputDevice; } }
namespace android { namespace view { class InputDevice_MotionRange; } }
namespace android { namespace view { class KeyCharacterMap; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace view {
class InputDevice : public virtual ::java::lang::Object,
                    public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputDevice(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputDevice(const ::android::view::InputDevice& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    InputDevice(::android::view::InputDevice&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::InputDevice& operator=(const ::android::view::InputDevice& x) {obj = x.obj; return *this;}
    ::android::view::InputDevice& operator=(::android::view::InputDevice&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::view::InputDevice getDevice(int32_t);
    static std::vector< int32_t> getDeviceIds();
    int32_t getId() const ;
    ::java::lang::String getName() const ;
    int32_t getSources() const ;
    int32_t getKeyboardType() const ;
    ::android::view::KeyCharacterMap getKeyCharacterMap() const ;
    ::android::view::InputDevice_MotionRange getMotionRange(int32_t) const ;
    ::android::view::InputDevice_MotionRange getMotionRange(int32_t, int32_t) const ;
    ::java::util::List getMotionRanges() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t describeContents() const ;
    ::java::lang::String toString() const ;

};
}
}

#include "android.view.InputDevice_MotionRange.hpp"

