#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace telephony {
namespace gsm {
class SmsMessage_SubmitPdu : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SmsMessage_SubmitPdu(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SmsMessage_SubmitPdu(const ::android::telephony::gsm::SmsMessage_SubmitPdu& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SmsMessage_SubmitPdu(::android::telephony::gsm::SmsMessage_SubmitPdu&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::gsm::SmsMessage_SubmitPdu& operator=(const ::android::telephony::gsm::SmsMessage_SubmitPdu& x) {obj = x.obj; return *this;}
    ::android::telephony::gsm::SmsMessage_SubmitPdu& operator=(::android::telephony::gsm::SmsMessage_SubmitPdu&& x) {obj = std::move(x.obj); return *this;}
    
    SmsMessage_SubmitPdu();
    ::java::lang::String toString() const;

};
}
}
}


