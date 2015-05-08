#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.GetChars.hpp"
#include "java.lang.CharSequence.hpp"

namespace android { namespace text { class AlteredCharSequence; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
class AlteredCharSequence : public virtual ::java::lang::Object,
                            public virtual ::android::text::GetChars,
                            public virtual ::java::lang::CharSequence {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlteredCharSequence(jobject _obj) : ::java::lang::Object(_obj), ::android::text::GetChars(_obj), ::java::lang::CharSequence(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlteredCharSequence(const ::android::text::AlteredCharSequence& x) : ::java::lang::Object((jobject)0), ::android::text::GetChars((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj;}
    AlteredCharSequence(::android::text::AlteredCharSequence&& x) : ::java::lang::Object((jobject)0), ::android::text::GetChars((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::AlteredCharSequence& operator=(const ::android::text::AlteredCharSequence& x) {obj = x.obj; return *this;}
    ::android::text::AlteredCharSequence& operator=(::android::text::AlteredCharSequence&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::text::AlteredCharSequence make(const ::java::lang::CharSequence&, const std::vector< uint16_t>&, int32_t, int32_t);
    uint16_t charAt(int32_t) const ;
    int32_t length() const ;
    ::java::lang::CharSequence subSequence(int32_t, int32_t) const ;
    void getChars(int32_t, int32_t, const std::vector< uint16_t>&, int32_t) const ;
    ::java::lang::String toString() const ;

};
}
}


