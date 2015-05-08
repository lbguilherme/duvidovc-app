#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace bluetooth {
class BluetoothClass_Device : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothClass_Device(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothClass_Device(const ::android::bluetooth::BluetoothClass_Device& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BluetoothClass_Device(::android::bluetooth::BluetoothClass_Device&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothClass_Device& operator=(const ::android::bluetooth::BluetoothClass_Device& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothClass_Device& operator=(::android::bluetooth::BluetoothClass_Device&& x) {obj = std::move(x.obj); return *this;}
    
    BluetoothClass_Device();

};
}
}

#include "android.bluetooth.BluetoothClass_Device_Major.hpp"

