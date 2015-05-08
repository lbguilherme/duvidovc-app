#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class Font_Style; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Font_Style : public virtual ::java::lang::Object,
                   public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Font_Style(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Font_Style(const ::android::renderscript::Font_Style& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Font_Style(::android::renderscript::Font_Style&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Font_Style& operator=(const ::android::renderscript::Font_Style& x) {obj = x.obj; return *this;}
    ::android::renderscript::Font_Style& operator=(::android::renderscript::Font_Style&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::Font_Style> values();
    static ::android::renderscript::Font_Style valueOf(const ::java::lang::String&);

};
}
}


