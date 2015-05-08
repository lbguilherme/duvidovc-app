#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Script_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Script_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Script_Builder(const ::android::renderscript::Script_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Script_Builder(::android::renderscript::Script_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Script_Builder& operator=(const ::android::renderscript::Script_Builder& x) {obj = x.obj; return *this;}
    ::android::renderscript::Script_Builder& operator=(::android::renderscript::Script_Builder&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


