#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.bluetooth.BluetoothProfile.hpp"

namespace android { namespace bluetooth { class BluetoothDevice; } }
namespace android { namespace bluetooth { class BluetoothHealthAppConfiguration; } }
namespace android { namespace bluetooth { class BluetoothHealthCallback; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace bluetooth {
class BluetoothHealth : public virtual ::java::lang::Object,
                        public virtual ::android::bluetooth::BluetoothProfile {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothHealth(jobject _obj) : ::java::lang::Object(_obj), ::android::bluetooth::BluetoothProfile(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothHealth(const ::android::bluetooth::BluetoothHealth& x) : ::java::lang::Object((jobject)0), ::android::bluetooth::BluetoothProfile((jobject)0) {obj = x.obj;}
    BluetoothHealth(::android::bluetooth::BluetoothHealth&& x) : ::java::lang::Object((jobject)0), ::android::bluetooth::BluetoothProfile((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothHealth& operator=(const ::android::bluetooth::BluetoothHealth& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothHealth& operator=(::android::bluetooth::BluetoothHealth&& x) {obj = std::move(x.obj); return *this;}
    
    bool registerSinkAppConfiguration(const ::java::lang::String&, int32_t, const ::android::bluetooth::BluetoothHealthCallback&) const ;
    bool unregisterAppConfiguration(const ::android::bluetooth::BluetoothHealthAppConfiguration&) const ;
    bool connectChannelToSource(const ::android::bluetooth::BluetoothDevice&, const ::android::bluetooth::BluetoothHealthAppConfiguration&) const ;
    bool disconnectChannel(const ::android::bluetooth::BluetoothDevice&, const ::android::bluetooth::BluetoothHealthAppConfiguration&, int32_t) const ;
    ::android::os::ParcelFileDescriptor getMainChannelFd(const ::android::bluetooth::BluetoothDevice&, const ::android::bluetooth::BluetoothHealthAppConfiguration&) const ;
    int32_t getConnectionState(const ::android::bluetooth::BluetoothDevice&) const ;
    ::java::util::List getConnectedDevices() const ;
    ::java::util::List getDevicesMatchingConnectionStates(const std::vector< int32_t>&) const ;

};
}
}


