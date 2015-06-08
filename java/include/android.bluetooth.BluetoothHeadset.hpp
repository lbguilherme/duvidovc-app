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
class BluetoothHeadset : public virtual ::java::lang::Object,
                         public virtual ::android::bluetooth::BluetoothProfile {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothHeadset(jobject _obj) : ::java::lang::Object(_obj), ::android::bluetooth::BluetoothProfile(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothHeadset(const ::android::bluetooth::BluetoothHeadset& x) : ::java::lang::Object((jobject)0), ::android::bluetooth::BluetoothProfile((jobject)0) {obj = x.obj;}
    BluetoothHeadset(::android::bluetooth::BluetoothHeadset&& x) : ::java::lang::Object((jobject)0), ::android::bluetooth::BluetoothProfile((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothHeadset& operator=(const ::android::bluetooth::BluetoothHeadset& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothHeadset& operator=(::android::bluetooth::BluetoothHeadset&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::List getConnectedDevices() const;
    ::java::util::List getDevicesMatchingConnectionStates(const std::vector< int32_t>&) const;
    int32_t getConnectionState(const ::android::bluetooth::BluetoothDevice&) const;
    bool startVoiceRecognition(const ::android::bluetooth::BluetoothDevice&) const;
    bool stopVoiceRecognition(const ::android::bluetooth::BluetoothDevice&) const;
    bool isAudioConnected(const ::android::bluetooth::BluetoothDevice&) const;

};
}
}


