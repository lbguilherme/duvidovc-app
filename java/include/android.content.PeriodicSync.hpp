#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace accounts { class Account; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class PeriodicSync : public virtual ::java::lang::Object,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PeriodicSync(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PeriodicSync(const ::android::content::PeriodicSync& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    PeriodicSync(::android::content::PeriodicSync&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::PeriodicSync& operator=(const ::android::content::PeriodicSync& x) {obj = x.obj; return *this;}
    ::android::content::PeriodicSync& operator=(::android::content::PeriodicSync&& x) {obj = std::move(x.obj); return *this;}
    
    PeriodicSync(const ::android::accounts::Account&, const ::java::lang::String&, const ::android::os::Bundle&, int64_t);
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    bool equals(const ::java::lang::Object&) const ;

};
}
}


