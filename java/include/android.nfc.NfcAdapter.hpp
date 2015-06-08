#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class IntentFilter; } }
namespace android { namespace nfc { class NdefMessage; } }
namespace android { namespace nfc { class NfcAdapter; } }
namespace android { namespace nfc { class NfcAdapter_CreateNdefMessageCallback; } }
namespace android { namespace nfc { class NfcAdapter_OnNdefPushCompleteCallback; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace nfc {
class NfcAdapter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NfcAdapter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NfcAdapter(const ::android::nfc::NfcAdapter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NfcAdapter(::android::nfc::NfcAdapter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::NfcAdapter& operator=(const ::android::nfc::NfcAdapter& x) {obj = x.obj; return *this;}
    ::android::nfc::NfcAdapter& operator=(::android::nfc::NfcAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::nfc::NfcAdapter getDefaultAdapter(const ::android::content::Context&);
    static ::android::nfc::NfcAdapter getDefaultAdapter();
    bool isEnabled() const;
    void setNdefPushMessage(const ::android::nfc::NdefMessage&, const ::android::app::Activity&, const std::vector< ::android::app::Activity>&) const;
    void setNdefPushMessageCallback(const ::android::nfc::NfcAdapter_CreateNdefMessageCallback&, const ::android::app::Activity&, const std::vector< ::android::app::Activity>&) const;
    void setOnNdefPushCompleteCallback(const ::android::nfc::NfcAdapter_OnNdefPushCompleteCallback&, const ::android::app::Activity&, const std::vector< ::android::app::Activity>&) const;
    void enableForegroundDispatch(const ::android::app::Activity&, const ::android::app::PendingIntent&, const std::vector< ::android::content::IntentFilter>&, const std::vector< ::java::lang::String>&) const;
    void disableForegroundDispatch(const ::android::app::Activity&) const;
    void enableForegroundNdefPush(const ::android::app::Activity&, const ::android::nfc::NdefMessage&) const;
    void disableForegroundNdefPush(const ::android::app::Activity&) const;

};
}
}

#include "android.nfc.NfcAdapter_CreateNdefMessageCallback.hpp"
#include "android.nfc.NfcAdapter_OnNdefPushCompleteCallback.hpp"

