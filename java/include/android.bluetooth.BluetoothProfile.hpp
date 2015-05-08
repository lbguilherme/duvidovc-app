#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace bluetooth { class BluetoothDevice; } }
namespace java { namespace util { class List; } }

namespace android {
namespace bluetooth {
class BluetoothProfile : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothProfile(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothProfile(const ::android::bluetooth::BluetoothProfile& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BluetoothProfile(::android::bluetooth::BluetoothProfile&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothProfile& operator=(const ::android::bluetooth::BluetoothProfile& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothProfile& operator=(::android::bluetooth::BluetoothProfile&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::List getConnectedDevices() const ;
    ::java::util::List getDevicesMatchingConnectionStates(const std::vector< int32_t>&) const ;
    int32_t getConnectionState(const ::android::bluetooth::BluetoothDevice&) const ;

};
}
}

#include "android.bluetooth.BluetoothProfile_ServiceListener.hpp"

