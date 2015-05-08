#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace bluetooth {
class BluetoothClass_Service : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothClass_Service(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothClass_Service(const ::android::bluetooth::BluetoothClass_Service& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BluetoothClass_Service(::android::bluetooth::BluetoothClass_Service&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothClass_Service& operator=(const ::android::bluetooth::BluetoothClass_Service& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothClass_Service& operator=(::android::bluetooth::BluetoothClass_Service&& x) {obj = std::move(x.obj); return *this;}
    
    BluetoothClass_Service();

};
}
}


