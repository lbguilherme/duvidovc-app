#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
class AutoText : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AutoText(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AutoText(const ::android::text::AutoText& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AutoText(::android::text::AutoText&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::AutoText& operator=(const ::android::text::AutoText& x) {obj = x.obj; return *this;}
    ::android::text::AutoText& operator=(::android::text::AutoText&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String get(const ::java::lang::CharSequence&, int32_t, int32_t, const ::android::view::View&);
    static int32_t getSize(const ::android::view::View&);

};
}
}


