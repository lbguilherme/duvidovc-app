#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace bluetooth {
class BluetoothClass_Device_Major : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothClass_Device_Major(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothClass_Device_Major(const ::android::bluetooth::BluetoothClass_Device_Major& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BluetoothClass_Device_Major(::android::bluetooth::BluetoothClass_Device_Major&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothClass_Device_Major& operator=(const ::android::bluetooth::BluetoothClass_Device_Major& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothClass_Device_Major& operator=(::android::bluetooth::BluetoothClass_Device_Major&& x) {obj = std::move(x.obj); return *this;}
    
    BluetoothClass_Device_Major();

};
}
}


