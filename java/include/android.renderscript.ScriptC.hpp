#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.Script.hpp"


namespace android {
namespace renderscript {
class ScriptC : public virtual ::java::lang::Object,
                public virtual ::android::renderscript::Script {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScriptC(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj), ::android::renderscript::Script(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScriptC(const ::android::renderscript::ScriptC& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0), ::android::renderscript::Script((jobject)0) {obj = x.obj;}
    ScriptC(::android::renderscript::ScriptC&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0), ::android::renderscript::Script((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ScriptC& operator=(const ::android::renderscript::ScriptC& x) {obj = x.obj; return *this;}
    ::android::renderscript::ScriptC& operator=(::android::renderscript::ScriptC&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


