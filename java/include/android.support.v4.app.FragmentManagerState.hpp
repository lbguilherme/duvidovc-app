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
class FragmentManagerState : public virtual ::java::lang::Object,
                             public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentManagerState(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentManagerState(const ::android::support::v4::app::FragmentManagerState& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    FragmentManagerState(::android::support::v4::app::FragmentManagerState&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentManagerState& operator=(const ::android::support::v4::app::FragmentManagerState& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentManagerState& operator=(::android::support::v4::app::FragmentManagerState&& x) {obj = std::move(x.obj); return *this;}
    
    FragmentManagerState();
    FragmentManagerState(const ::android::os::Parcel&);
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}
}


