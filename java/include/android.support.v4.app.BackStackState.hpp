#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace support { namespace v4 { namespace app { class BackStackRecord; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentManagerImpl; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class BackStackState : public virtual ::java::lang::Object,
                       public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackStackState(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackStackState(const ::android::support::v4::app::BackStackState& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    BackStackState(::android::support::v4::app::BackStackState&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::BackStackState& operator=(const ::android::support::v4::app::BackStackState& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::BackStackState& operator=(::android::support::v4::app::BackStackState&& x) {obj = std::move(x.obj); return *this;}
    
    BackStackState(const ::android::support::v4::app::FragmentManagerImpl&, const ::android::support::v4::app::BackStackRecord&);
    BackStackState(const ::android::os::Parcel&);
    ::android::support::v4::app::BackStackRecord instantiate(const ::android::support::v4::app::FragmentManagerImpl&) const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}
}


