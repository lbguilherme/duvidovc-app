#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace nfc { class NdefMessage; } }
namespace android { namespace nfc { class NfcEvent; } }

namespace android {
namespace nfc {
class NfcAdapter_CreateNdefMessageCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NfcAdapter_CreateNdefMessageCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NfcAdapter_CreateNdefMessageCallback(const ::android::nfc::NfcAdapter_CreateNdefMessageCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NfcAdapter_CreateNdefMessageCallback(::android::nfc::NfcAdapter_CreateNdefMessageCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::NfcAdapter_CreateNdefMessageCallback& operator=(const ::android::nfc::NfcAdapter_CreateNdefMessageCallback& x) {obj = x.obj; return *this;}
    ::android::nfc::NfcAdapter_CreateNdefMessageCallback& operator=(::android::nfc::NfcAdapter_CreateNdefMessageCallback&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::nfc::NdefMessage createNdefMessage(const ::android::nfc::NfcEvent&) const ;

};
}
}


