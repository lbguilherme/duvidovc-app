#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace accounts {
class Account : public virtual ::java::lang::Object,
                public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Account(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Account(const ::android::accounts::Account& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Account(::android::accounts::Account&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accounts::Account& operator=(const ::android::accounts::Account& x) {obj = x.obj; return *this;}
    ::android::accounts::Account& operator=(::android::accounts::Account&& x) {obj = std::move(x.obj); return *this;}
    
    Account(const ::java::lang::String&, const ::java::lang::String&);
    Account(const ::android::os::Parcel&);
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    ::java::lang::String toString() const;

};
}
}


