#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace webkit { class WebSettings_PluginState; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebSettings_PluginState : public virtual ::java::lang::Object,
                                public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebSettings_PluginState(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebSettings_PluginState(const ::android::webkit::WebSettings_PluginState& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    WebSettings_PluginState(::android::webkit::WebSettings_PluginState&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebSettings_PluginState& operator=(const ::android::webkit::WebSettings_PluginState& x) {obj = x.obj; return *this;}
    ::android::webkit::WebSettings_PluginState& operator=(::android::webkit::WebSettings_PluginState&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::webkit::WebSettings_PluginState> values();
    static ::android::webkit::WebSettings_PluginState valueOf(const ::java::lang::String&);

};
}
}


