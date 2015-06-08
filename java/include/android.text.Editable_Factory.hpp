#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class Editable; } }
namespace android { namespace text { class Editable_Factory; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
class Editable_Factory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Editable_Factory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Editable_Factory(const ::android::text::Editable_Factory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Editable_Factory(::android::text::Editable_Factory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Editable_Factory& operator=(const ::android::text::Editable_Factory& x) {obj = x.obj; return *this;}
    ::android::text::Editable_Factory& operator=(::android::text::Editable_Factory&& x) {obj = std::move(x.obj); return *this;}
    
    Editable_Factory();
    static ::android::text::Editable_Factory getInstance();
    ::android::text::Editable newEditable(const ::java::lang::CharSequence&) const;

};
}
}


