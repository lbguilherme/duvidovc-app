#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace bluetooth { class BluetoothClass; } }
namespace android { namespace bluetooth { class BluetoothSocket; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class ParcelUuid; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class UUID; } }

namespace android {
namespace bluetooth {
class BluetoothDevice : public virtual ::java::lang::Object,
                        public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothDevice(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothDevice(const ::android::bluetooth::BluetoothDevice& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    BluetoothDevice(::android::bluetooth::BluetoothDevice&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothDevice& operator=(const ::android::bluetooth::BluetoothDevice& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothDevice& operator=(::android::bluetooth::BluetoothDevice&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    ::java::lang::String getAddress() const;
    ::java::lang::String getName() const;
    int32_t getBondState() const;
    ::android::bluetooth::BluetoothClass getBluetoothClass() const;
    std::vector< ::android::os::ParcelUuid> getUuids() const;
    bool fetchUuidsWithSdp() const;
    ::android::bluetooth::BluetoothSocket createRfcommSocketToServiceRecord(const ::java::util::UUID&) const;
    ::android::bluetooth::BluetoothSocket createInsecureRfcommSocketToServiceRecord(const ::java::util::UUID&) const;

};
}
}


