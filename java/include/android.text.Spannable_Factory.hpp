#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class Spannable; } }
namespace android { namespace text { class Spannable_Factory; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
class Spannable_Factory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Spannable_Factory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Spannable_Factory(const ::android::text::Spannable_Factory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Spannable_Factory(::android::text::Spannable_Factory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Spannable_Factory& operator=(const ::android::text::Spannable_Factory& x) {obj = x.obj; return *this;}
    ::android::text::Spannable_Factory& operator=(::android::text::Spannable_Factory&& x) {obj = std::move(x.obj); return *this;}
    
    Spannable_Factory();
    static ::android::text::Spannable_Factory getInstance();
    ::android::text::Spannable newSpannable(const ::java::lang::CharSequence&) const;

};
}
}


