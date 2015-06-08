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
namespace bluetooth {
class BluetoothHealthAppConfiguration : public virtual ::java::lang::Object,
                                        public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothHealthAppConfiguration(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothHealthAppConfiguration(const ::android::bluetooth::BluetoothHealthAppConfiguration& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    BluetoothHealthAppConfiguration(::android::bluetooth::BluetoothHealthAppConfiguration&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothHealthAppConfiguration& operator=(const ::android::bluetooth::BluetoothHealthAppConfiguration& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothHealthAppConfiguration& operator=(::android::bluetooth::BluetoothHealthAppConfiguration&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    int32_t getDataType() const;
    ::java::lang::String getName() const;
    int32_t getRole() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}


