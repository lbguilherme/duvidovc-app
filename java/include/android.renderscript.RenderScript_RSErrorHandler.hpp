#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"


namespace android {
namespace renderscript {
class RenderScript_RSErrorHandler : public virtual ::java::lang::Object,
                                    public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RenderScript_RSErrorHandler(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RenderScript_RSErrorHandler(const ::android::renderscript::RenderScript_RSErrorHandler& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    RenderScript_RSErrorHandler(::android::renderscript::RenderScript_RSErrorHandler&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::RenderScript_RSErrorHandler& operator=(const ::android::renderscript::RenderScript_RSErrorHandler& x) {obj = x.obj; return *this;}
    ::android::renderscript::RenderScript_RSErrorHandler& operator=(::android::renderscript::RenderScript_RSErrorHandler&& x) {obj = std::move(x.obj); return *this;}
    
    RenderScript_RSErrorHandler();
    void run() const;

};
}
}


