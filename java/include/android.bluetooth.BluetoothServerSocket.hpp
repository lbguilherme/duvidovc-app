#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"

namespace android { namespace bluetooth { class BluetoothSocket; } }

namespace android {
namespace bluetooth {
class BluetoothServerSocket : public virtual ::java::lang::Object,
                              public virtual ::java::io::Closeable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothServerSocket(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothServerSocket(const ::android::bluetooth::BluetoothServerSocket& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    BluetoothServerSocket(::android::bluetooth::BluetoothServerSocket&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothServerSocket& operator=(const ::android::bluetooth::BluetoothServerSocket& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothServerSocket& operator=(::android::bluetooth::BluetoothServerSocket&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::bluetooth::BluetoothSocket accept() const ;
    ::android::bluetooth::BluetoothSocket accept(int32_t) const ;
    void close() const ;

};
}
}


