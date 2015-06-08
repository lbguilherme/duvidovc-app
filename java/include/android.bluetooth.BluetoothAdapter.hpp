#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace bluetooth { class BluetoothAdapter; } }
namespace android { namespace bluetooth { class BluetoothDevice; } }
namespace android { namespace bluetooth { class BluetoothProfile; } }
namespace android { namespace bluetooth { class BluetoothProfile_ServiceListener; } }
namespace android { namespace bluetooth { class BluetoothServerSocket; } }
namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Set; } }
namespace java { namespace util { class UUID; } }

namespace android {
namespace bluetooth {
class BluetoothAdapter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BluetoothAdapter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BluetoothAdapter(const ::android::bluetooth::BluetoothAdapter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BluetoothAdapter(::android::bluetooth::BluetoothAdapter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::bluetooth::BluetoothAdapter& operator=(const ::android::bluetooth::BluetoothAdapter& x) {obj = x.obj; return *this;}
    ::android::bluetooth::BluetoothAdapter& operator=(::android::bluetooth::BluetoothAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::bluetooth::BluetoothAdapter getDefaultAdapter();
    ::android::bluetooth::BluetoothDevice getRemoteDevice(const ::java::lang::String&) const;
    bool isEnabled() const;
    int32_t getState() const;
    bool enable() const;
    bool disable() const;
    ::java::lang::String getAddress() const;
    ::java::lang::String getName() const;
    bool setName(const ::java::lang::String&) const;
    int32_t getScanMode() const;
    bool startDiscovery() const;
    bool cancelDiscovery() const;
    bool isDiscovering() const;
    ::java::util::Set getBondedDevices() const;
    int32_t getProfileConnectionState(int32_t) const;
    ::android::bluetooth::BluetoothServerSocket listenUsingRfcommWithServiceRecord(const ::java::lang::String&, const ::java::util::UUID&) const;
    ::android::bluetooth::BluetoothServerSocket listenUsingInsecureRfcommWithServiceRecord(const ::java::lang::String&, const ::java::util::UUID&) const;
    bool getProfileProxy(const ::android::content::Context&, const ::android::bluetooth::BluetoothProfile_ServiceListener&, int32_t) const;
    void closeProfileProxy(int32_t, const ::android::bluetooth::BluetoothProfile&) const;
    static bool checkBluetoothAddress(const ::java::lang::String&);

};
}
}


