#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.bluetooth.BluetoothProfile.hpp"

namespace android { namespace bluetooth { class BluetoothDevice; } }
namespace java { namespace util { class List; } }

namespace android {
namespace bluetooth {
class BluetoothA2dp : public virtual ::java::lang::Object,
                      public virtual ::android::bluetooth::BluetoothProfile {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothA2dp(jobject _obj) : ::java::lang::Object(_obj), ::android::bluetooth::BluetoothProfile(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothA2dp(const ::android::bluetooth::BluetoothA2dp& x) : ::java::lang::Object((jobject)0), ::android::bluetooth::BluetoothProfile((jobject)0) {obj = x.obj;}
    BluetoothA2dp(::android::bluetooth::BluetoothA2dp&& x) : ::java::lang::Object((jobject)0), ::android::bluetooth::BluetoothProfile((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothA2dp& operator=(const ::android::bluetooth::BluetoothA2dp& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothA2dp& operator=(::android::bluetooth::BluetoothA2dp&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::List getConnectedDevices() const;
    ::java::util::List getDevicesMatchingConnectionStates(const std::vector< int32_t>&) const;
    int32_t getConnectionState(const ::android::bluetooth::BluetoothDevice&) const;
    bool isA2dpPlaying(const ::android::bluetooth::BluetoothDevice&) const;

};
}
}


