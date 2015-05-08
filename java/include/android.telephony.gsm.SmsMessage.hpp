#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace telephony { namespace gsm { class SmsMessage; } } }
namespace android { namespace telephony { namespace gsm { class SmsMessage_MessageClass; } } }
namespace android { namespace telephony { namespace gsm { class SmsMessage_SubmitPdu; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace telephony {
namespace gsm {
class SmsMessage : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SmsMessage(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SmsMessage(const ::android::telephony::gsm::SmsMessage& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SmsMessage(::android::telephony::gsm::SmsMessage&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::gsm::SmsMessage& operator=(const ::android::telephony::gsm::SmsMessage& x) {obj = x.obj; return *this;}
    ::android::telephony::gsm::SmsMessage& operator=(::android::telephony::gsm::SmsMessage&& x) {obj = std::move(x.obj); return *this;}
    
    SmsMessage();
    static ::android::telephony::gsm::SmsMessage createFromPdu(const std::vector< int8_t>&);
    static int32_t getTPLayerLengthForPDU(const ::java::lang::String&);
    static std::vector< int32_t> calculateLength(const ::java::lang::CharSequence&, bool);
    static std::vector< int32_t> calculateLength(const ::java::lang::String&, bool);
    static ::android::telephony::gsm::SmsMessage_SubmitPdu getSubmitPdu(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, bool);
    static ::android::telephony::gsm::SmsMessage_SubmitPdu getSubmitPdu(const ::java::lang::String&, const ::java::lang::String&, int16_t, const std::vector< int8_t>&, bool);
    ::java::lang::String getServiceCenterAddress() const ;
    ::java::lang::String getOriginatingAddress() const ;
    ::java::lang::String getDisplayOriginatingAddress() const ;
    ::java::lang::String getMessageBody() const ;
    ::android::telephony::gsm::SmsMessage_MessageClass getMessageClass() const ;
    ::java::lang::String getDisplayMessageBody() const ;
    ::java::lang::String getPseudoSubject() const ;
    int64_t getTimestampMillis() const ;
    bool isEmail() const ;
    ::java::lang::String getEmailBody() const ;
    ::java::lang::String getEmailFrom() const ;
    int32_t getProtocolIdentifier() const ;
    bool isReplace() const ;
    bool isCphsMwiMessage() const ;
    bool isMWIClearMessage() const ;
    bool isMWISetMessage() const ;
    bool isMwiDontStore() const ;
    std::vector< int8_t> getUserData() const ;
    std::vector< int8_t> getPdu() const ;
    int32_t getStatusOnSim() const ;
    int32_t getIndexOnSim() const ;
    int32_t getStatus() const ;
    bool isStatusReportMessage() const ;
    bool isReplyPathPresent() const ;

};
}
}
}

#include "android.telephony.gsm.SmsMessage_MessageClass.hpp"
#include "android.telephony.gsm.SmsMessage_SubmitPdu.hpp"

