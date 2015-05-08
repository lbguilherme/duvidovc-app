#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class RenderScript_Priority; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class RenderScript_Priority : public virtual ::java::lang::Object,
                              public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RenderScript_Priority(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RenderScript_Priority(const ::android::renderscript::RenderScript_Priority& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    RenderScript_Priority(::android::renderscript::RenderScript_Priority&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::RenderScript_Priority& operator=(const ::android::renderscript::RenderScript_Priority& x) {obj = x.obj; return *this;}
    ::android::renderscript::RenderScript_Priority& operator=(::android::renderscript::RenderScript_Priority&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::RenderScript_Priority> values();
    static ::android::renderscript::RenderScript_Priority valueOf(const ::java::lang::String&);

};
}
}


