#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class ParcelUuid; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class UUID; } }

namespace android {
namespace os {
class ParcelUuid : public virtual ::java::lang::Object,
                   public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParcelUuid(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParcelUuid(const ::android::os::ParcelUuid& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ParcelUuid(::android::os::ParcelUuid&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::ParcelUuid& operator=(const ::android::os::ParcelUuid& x) {obj = x.obj; return *this;}
    ::android::os::ParcelUuid& operator=(::android::os::ParcelUuid&& x) {obj = std::move(x.obj); return *this;}
    
    ParcelUuid(const ::java::util::UUID&);
    static ::android::os::ParcelUuid fromString(const ::java::lang::String&);
    ::java::util::UUID getUuid() const ;
    ::java::lang::String toString() const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}


