#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.Spanned.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace text {
class Spannable : public virtual ::java::lang::Object,
                  public virtual ::android::text::Spanned {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Spannable(jobject _obj) : ::java::lang::Object(_obj), ::android::text::Spanned(_obj), ::java::lang::CharSequence(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Spannable(const ::android::text::Spannable& x) : ::java::lang::Object((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj;}
    Spannable(::android::text::Spannable&& x) : ::java::lang::Object((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Spannable& operator=(const ::android::text::Spannable& x) {obj = x.obj; return *this;}
    ::android::text::Spannable& operator=(::android::text::Spannable&& x) {obj = std::move(x.obj); return *this;}
    
    void setSpan(const ::java::lang::Object&, int32_t, int32_t, int32_t) const ;
    void removeSpan(const ::java::lang::Object&) const ;

};
}
}

#include "android.text.Spannable_Factory.hpp"

