#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class Configuration; } } }

namespace android {
namespace content {
class ComponentCallbacks : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ComponentCallbacks(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ComponentCallbacks(const ::android::content::ComponentCallbacks& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ComponentCallbacks(::android::content::ComponentCallbacks&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ComponentCallbacks& operator=(const ::android::content::ComponentCallbacks& x) {obj = x.obj; return *this;}
    ::android::content::ComponentCallbacks& operator=(::android::content::ComponentCallbacks&& x) {obj = std::move(x.obj); return *this;}
    
    void onConfigurationChanged(const ::android::content::res::Configuration&) const;
    void onLowMemory() const;

};
}
}


