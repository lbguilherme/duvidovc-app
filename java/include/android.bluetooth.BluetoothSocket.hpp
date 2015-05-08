#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"

namespace android { namespace bluetooth { class BluetoothDevice; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }

namespace android {
namespace bluetooth {
class BluetoothSocket : public virtual ::java::lang::Object,
                        public virtual ::java::io::Closeable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothSocket(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothSocket(const ::android::bluetooth::BluetoothSocket& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    BluetoothSocket(::android::bluetooth::BluetoothSocket&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothSocket& operator=(const ::android::bluetooth::BluetoothSocket& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothSocket& operator=(::android::bluetooth::BluetoothSocket&& x) {obj = std::move(x.obj); return *this;}
    
    void connect() const ;
    void close() const ;
    ::android::bluetooth::BluetoothDevice getRemoteDevice() const ;
    ::java::io::InputStream getInputStream() const ;
    ::java::io::OutputStream getOutputStream() const ;
    bool isConnected() const ;

};
}
}


