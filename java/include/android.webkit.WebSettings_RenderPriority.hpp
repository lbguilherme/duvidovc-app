#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace webkit { class WebSettings_RenderPriority; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebSettings_RenderPriority : public virtual ::java::lang::Object,
                                   public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebSettings_RenderPriority(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebSettings_RenderPriority(const ::android::webkit::WebSettings_RenderPriority& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    WebSettings_RenderPriority(::android::webkit::WebSettings_RenderPriority&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebSettings_RenderPriority& operator=(const ::android::webkit::WebSettings_RenderPriority& x) {obj = x.obj; return *this;}
    ::android::webkit::WebSettings_RenderPriority& operator=(::android::webkit::WebSettings_RenderPriority&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::webkit::WebSettings_RenderPriority> values();
    static ::android::webkit::WebSettings_RenderPriority valueOf(const ::java::lang::String&);

};
}
}


