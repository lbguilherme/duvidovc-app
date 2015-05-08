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
class SmsMessage_SubmitPdu : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SmsMessage_SubmitPdu(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SmsMessage_SubmitPdu(const ::android::telephony::SmsMessage_SubmitPdu& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SmsMessage_SubmitPdu(::android::telephony::SmsMessage_SubmitPdu&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::SmsMessage_SubmitPdu& operator=(const ::android::telephony::SmsMessage_SubmitPdu& x) {obj = x.obj; return *this;}
    ::android::telephony::SmsMessage_SubmitPdu& operator=(::android::telephony::SmsMessage_SubmitPdu&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String toString() const ;

};
}
}


