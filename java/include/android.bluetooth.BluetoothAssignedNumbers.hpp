#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace bluetooth {
class BluetoothAssignedNumbers : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothAssignedNumbers(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothAssignedNumbers(const ::android::bluetooth::BluetoothAssignedNumbers& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BluetoothAssignedNumbers(::android::bluetooth::BluetoothAssignedNumbers&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothAssignedNumbers& operator=(const ::android::bluetooth::BluetoothAssignedNumbers& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothAssignedNumbers& operator=(::android::bluetooth::BluetoothAssignedNumbers&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


