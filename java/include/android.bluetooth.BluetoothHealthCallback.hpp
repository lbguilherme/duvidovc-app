#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace bluetooth { class BluetoothDevice; } }
namespace android { namespace bluetooth { class BluetoothHealthAppConfiguration; } }
namespace android { namespace os { class ParcelFileDescriptor; } }

namespace android {
namespace bluetooth {
class BluetoothHealthCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothHealthCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothHealthCallback(const ::android::bluetooth::BluetoothHealthCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BluetoothHealthCallback(::android::bluetooth::BluetoothHealthCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothHealthCallback& operator=(const ::android::bluetooth::BluetoothHealthCallback& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothHealthCallback& operator=(::android::bluetooth::BluetoothHealthCallback&& x) {obj = std::move(x.obj); return *this;}
    
    BluetoothHealthCallback();
    void onHealthAppConfigurationStatusChange(const ::android::bluetooth::BluetoothHealthAppConfiguration&, int32_t) const ;
    void onHealthChannelStateChange(const ::android::bluetooth::BluetoothHealthAppConfiguration&, const ::android::bluetooth::BluetoothDevice&, int32_t, int32_t, const ::android::os::ParcelFileDescriptor&, int32_t) const ;

};
}
}


