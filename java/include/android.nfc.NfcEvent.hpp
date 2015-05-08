#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace nfc {
class NfcEvent : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NfcEvent(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NfcEvent(const ::android::nfc::NfcEvent& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NfcEvent(::android::nfc::NfcEvent&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::NfcEvent& operator=(const ::android::nfc::NfcEvent& x) {obj = x.obj; return *this;}
    ::android::nfc::NfcEvent& operator=(::android::nfc::NfcEvent&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


