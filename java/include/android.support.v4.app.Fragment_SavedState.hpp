#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class Fragment_SavedState : public virtual ::java::lang::Object,
                            public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Fragment_SavedState(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Fragment_SavedState(const ::android::support::v4::app::Fragment_SavedState& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Fragment_SavedState(::android::support::v4::app::Fragment_SavedState&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::Fragment_SavedState& operator=(const ::android::support::v4::app::Fragment_SavedState& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::Fragment_SavedState& operator=(::android::support::v4::app::Fragment_SavedState&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}
}


