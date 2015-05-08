#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace nfc { class NfcEvent; } }

namespace android {
namespace nfc {
class NfcAdapter_OnNdefPushCompleteCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NfcAdapter_OnNdefPushCompleteCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NfcAdapter_OnNdefPushCompleteCallback(const ::android::nfc::NfcAdapter_OnNdefPushCompleteCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NfcAdapter_OnNdefPushCompleteCallback(::android::nfc::NfcAdapter_OnNdefPushCompleteCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::NfcAdapter_OnNdefPushCompleteCallback& operator=(const ::android::nfc::NfcAdapter_OnNdefPushCompleteCallback& x) {obj = x.obj; return *this;}
    ::android::nfc::NfcAdapter_OnNdefPushCompleteCallback& operator=(::android::nfc::NfcAdapter_OnNdefPushCompleteCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onNdefPushComplete(const ::android::nfc::NfcEvent&) const ;

};
}
}


