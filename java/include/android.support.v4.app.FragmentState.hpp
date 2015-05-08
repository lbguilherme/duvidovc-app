#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentActivity; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class FragmentState : public virtual ::java::lang::Object,
                      public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentState(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentState(const ::android::support::v4::app::FragmentState& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    FragmentState(::android::support::v4::app::FragmentState&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentState& operator=(const ::android::support::v4::app::FragmentState& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentState& operator=(::android::support::v4::app::FragmentState&& x) {obj = std::move(x.obj); return *this;}
    
    FragmentState(const ::android::support::v4::app::Fragment&);
    FragmentState(const ::android::os::Parcel&);
    ::android::support::v4::app::Fragment instantiate(const ::android::support::v4::app::FragmentActivity&, const ::android::support::v4::app::Fragment&) const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}
}


