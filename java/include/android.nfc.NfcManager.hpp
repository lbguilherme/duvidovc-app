#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace nfc { class NfcAdapter; } }

namespace android {
namespace nfc {
class NfcManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NfcManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NfcManager(const ::android::nfc::NfcManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NfcManager(::android::nfc::NfcManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::NfcManager& operator=(const ::android::nfc::NfcManager& x) {obj = x.obj; return *this;}
    ::android::nfc::NfcManager& operator=(::android::nfc::NfcManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::nfc::NfcAdapter getDefaultAdapter() const ;

};
}
}


