#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace graphics {
namespace drawable {
class Animatable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Animatable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Animatable(const ::android::graphics::drawable::Animatable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Animatable(::android::graphics::drawable::Animatable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::Animatable& operator=(const ::android::graphics::drawable::Animatable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::Animatable& operator=(::android::graphics::drawable::Animatable&& x) {obj = std::move(x.obj); return *this;}
    
    void start() const;
    void stop() const;
    bool isRunning() const;

};
}
}
}


