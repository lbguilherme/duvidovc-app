#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace bluetooth { class BluetoothProfile; } }

namespace android {
namespace bluetooth {
class BluetoothProfile_ServiceListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothProfile_ServiceListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothProfile_ServiceListener(const ::android::bluetooth::BluetoothProfile_ServiceListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BluetoothProfile_ServiceListener(::android::bluetooth::BluetoothProfile_ServiceListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothProfile_ServiceListener& operator=(const ::android::bluetooth::BluetoothProfile_ServiceListener& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothProfile_ServiceListener& operator=(::android::bluetooth::BluetoothProfile_ServiceListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onServiceConnected(int32_t, const ::android::bluetooth::BluetoothProfile&) const;
    void onServiceDisconnected(int32_t) const;

};
}
}


