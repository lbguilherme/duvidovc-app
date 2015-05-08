#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class Debug_MemoryInfo : public virtual ::java::lang::Object,
                         public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Debug_MemoryInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Debug_MemoryInfo(const ::android::os::Debug_MemoryInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Debug_MemoryInfo(::android::os::Debug_MemoryInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Debug_MemoryInfo& operator=(const ::android::os::Debug_MemoryInfo& x) {obj = x.obj; return *this;}
    ::android::os::Debug_MemoryInfo& operator=(::android::os::Debug_MemoryInfo&& x) {obj = std::move(x.obj); return *this;}
    
    Debug_MemoryInfo();
    int32_t getTotalPss() const ;
    int32_t getTotalPrivateDirty() const ;
    int32_t getTotalSharedDirty() const ;
    int32_t getOtherPss(int32_t) const ;
    int32_t getOtherPrivateDirty(int32_t) const ;
    int32_t getOtherSharedDirty(int32_t) const ;
    static ::java::lang::String getOtherLabel(int32_t);
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void readFromParcel(const ::android::os::Parcel&) const ;

};
}
}


