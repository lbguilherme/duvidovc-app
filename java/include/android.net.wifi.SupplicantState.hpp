#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace net { namespace wifi { class SupplicantState; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace wifi {
class SupplicantState : public virtual ::java::lang::Object,
                        public virtual ::android::os::Parcelable,
                        public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SupplicantState(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SupplicantState(const ::android::net::wifi::SupplicantState& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    SupplicantState(::android::net::wifi::SupplicantState&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::SupplicantState& operator=(const ::android::net::wifi::SupplicantState& x) {obj = x.obj; return *this;}
    ::android::net::wifi::SupplicantState& operator=(::android::net::wifi::SupplicantState&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::net::wifi::SupplicantState> values();
    static ::android::net::wifi::SupplicantState valueOf(const ::java::lang::String&);
    static bool isValidState(const ::android::net::wifi::SupplicantState&);
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}


