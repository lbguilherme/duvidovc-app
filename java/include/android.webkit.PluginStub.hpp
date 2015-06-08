#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class View; } }

namespace android {
namespace webkit {
class PluginStub : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PluginStub(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PluginStub(const ::android::webkit::PluginStub& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PluginStub(::android::webkit::PluginStub&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::PluginStub& operator=(const ::android::webkit::PluginStub& x) {obj = x.obj; return *this;}
    ::android::webkit::PluginStub& operator=(::android::webkit::PluginStub&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View getEmbeddedView(int32_t, const ::android::content::Context&) const;
    ::android::view::View getFullScreenView(int32_t, const ::android::content::Context&) const;

};
}
}


