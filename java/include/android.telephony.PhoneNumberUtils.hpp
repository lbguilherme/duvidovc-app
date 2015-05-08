#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace text { class Editable; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }

namespace android {
namespace telephony {
class PhoneNumberUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PhoneNumberUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PhoneNumberUtils(const ::android::telephony::PhoneNumberUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PhoneNumberUtils(::android::telephony::PhoneNumberUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::PhoneNumberUtils& operator=(const ::android::telephony::PhoneNumberUtils& x) {obj = x.obj; return *this;}
    ::android::telephony::PhoneNumberUtils& operator=(::android::telephony::PhoneNumberUtils&& x) {obj = std::move(x.obj); return *this;}
    
    PhoneNumberUtils();
    static bool isISODigit(uint16_t);
    static bool is12Key(uint16_t);
    static bool isDialable(uint16_t);
    static bool isReallyDialable(uint16_t);
    static bool isNonSeparator(uint16_t);
    static bool isStartsPostDial(uint16_t);
    static ::java::lang::String getNumberFromIntent(const ::android::content::Intent&, const ::android::content::Context&);
    static ::java::lang::String extractNetworkPortion(const ::java::lang::String&);
    static ::java::lang::String stripSeparators(const ::java::lang::String&);
    static ::java::lang::String extractPostDialPortion(const ::java::lang::String&);
    static bool compare(const ::java::lang::String&, const ::java::lang::String&);
    static bool compare(const ::android::content::Context&, const ::java::lang::String&, const ::java::lang::String&);
    static ::java::lang::String toCallerIDMinMatch(const ::java::lang::String&);
    static ::java::lang::String getStrippedReversed(const ::java::lang::String&);
    static ::java::lang::String stringFromStringAndTOA(const ::java::lang::String&, int32_t);
    static int32_t toaFromString(const ::java::lang::String&);
    static ::java::lang::String calledPartyBCDToString(const std::vector< int8_t>&, int32_t, int32_t);
    static ::java::lang::String calledPartyBCDFragmentToString(const std::vector< int8_t>&, int32_t, int32_t);
    static bool isWellFormedSmsAddress(const ::java::lang::String&);
    static bool isGlobalPhoneNumber(const ::java::lang::String&);
    static std::vector< int8_t> networkPortionToCalledPartyBCD(const ::java::lang::String&);
    static std::vector< int8_t> networkPortionToCalledPartyBCDWithLength(const ::java::lang::String&);
    static std::vector< int8_t> numberToCalledPartyBCD(const ::java::lang::String&);
    static ::java::lang::String formatNumber(const ::java::lang::String&);
    static int32_t getFormatTypeForLocale(const ::java::util::Locale&);
    static void formatNumber(const ::android::text::Editable&, int32_t);
    static void formatNanpNumber(const ::android::text::Editable&);
    static void formatJapaneseNumber(const ::android::text::Editable&);
    static bool isEmergencyNumber(const ::java::lang::String&);
    static ::java::lang::String convertKeypadLettersToDigits(const ::java::lang::String&);

};
}
}


