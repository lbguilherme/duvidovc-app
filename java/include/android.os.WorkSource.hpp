#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class WorkSource; } }

namespace android {
namespace os {
class WorkSource : public virtual ::java::lang::Object,
                   public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WorkSource(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WorkSource(const ::android::os::WorkSource& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    WorkSource(::android::os::WorkSource&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::WorkSource& operator=(const ::android::os::WorkSource& x) {obj = x.obj; return *this;}
    ::android::os::WorkSource& operator=(::android::os::WorkSource&& x) {obj = std::move(x.obj); return *this;}
    
    WorkSource();
    void clear() const;
    bool diff(const ::android::os::WorkSource&) const;
    void set(const ::android::os::WorkSource&) const;
    bool add(const ::android::os::WorkSource&) const;
    bool remove(const ::android::os::WorkSource&) const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}


