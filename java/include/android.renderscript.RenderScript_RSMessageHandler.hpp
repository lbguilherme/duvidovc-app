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
class RenderScript_RSMessageHandler : public virtual ::java::lang::Object,
                                      public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RenderScript_RSMessageHandler(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RenderScript_RSMessageHandler(const ::android::renderscript::RenderScript_RSMessageHandler& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    RenderScript_RSMessageHandler(::android::renderscript::RenderScript_RSMessageHandler&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::RenderScript_RSMessageHandler& operator=(const ::android::renderscript::RenderScript_RSMessageHandler& x) {obj = x.obj; return *this;}
    ::android::renderscript::RenderScript_RSMessageHandler& operator=(::android::renderscript::RenderScript_RSMessageHandler&& x) {obj = std::move(x.obj); return *this;}
    
    RenderScript_RSMessageHandler();
    void run() const ;

};
}
}


