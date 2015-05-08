#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace telephony { class SmsMessage_MessageClass; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace telephony {
class SmsMessage_MessageClass : public virtual ::java::lang::Object,
                                public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SmsMessage_MessageClass(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SmsMessage_MessageClass(const ::android::telephony::SmsMessage_MessageClass& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    SmsMessage_MessageClass(::android::telephony::SmsMessage_MessageClass&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::SmsMessage_MessageClass& operator=(const ::android::telephony::SmsMessage_MessageClass& x) {obj = x.obj; return *this;}
    ::android::telephony::SmsMessage_MessageClass& operator=(::android::telephony::SmsMessage_MessageClass&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::telephony::SmsMessage_MessageClass> values();
    static ::android::telephony::SmsMessage_MessageClass valueOf(const ::java::lang::String&);

};
}
}


