#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace renderscript { class RenderScript; } }
namespace android { namespace renderscript { class RenderScript_Priority; } }
namespace android { namespace renderscript { class RenderScript_RSErrorHandler; } }
namespace android { namespace renderscript { class RenderScript_RSMessageHandler; } }

namespace android {
namespace renderscript {
class RenderScript : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RenderScript(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RenderScript(const ::android::renderscript::RenderScript& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RenderScript(::android::renderscript::RenderScript&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::RenderScript& operator=(const ::android::renderscript::RenderScript& x) {obj = x.obj; return *this;}
    ::android::renderscript::RenderScript& operator=(::android::renderscript::RenderScript&& x) {obj = std::move(x.obj); return *this;}
    
    void setMessageHandler(const ::android::renderscript::RenderScript_RSMessageHandler&) const ;
    ::android::renderscript::RenderScript_RSMessageHandler getMessageHandler() const ;
    void setErrorHandler(const ::android::renderscript::RenderScript_RSErrorHandler&) const ;
    ::android::renderscript::RenderScript_RSErrorHandler getErrorHandler() const ;
    void setPriority(const ::android::renderscript::RenderScript_Priority&) const ;
    ::android::content::Context getApplicationContext() const ;
    static ::android::renderscript::RenderScript create(const ::android::content::Context&);
    void contextDump() const ;
    void finish() const ;
    void destroy() const ;

};
}
}

#include "android.renderscript.RenderScript_Priority.hpp"
#include "android.renderscript.RenderScript_RSErrorHandler.hpp"
#include "android.renderscript.RenderScript_RSMessageHandler.hpp"

