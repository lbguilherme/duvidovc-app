#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class RenderScript; } }
namespace android { namespace renderscript { class Sampler; } }
namespace android { namespace renderscript { class Sampler_Value; } }

namespace android {
namespace renderscript {
class Sampler_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Sampler_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Sampler_Builder(const ::android::renderscript::Sampler_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Sampler_Builder(::android::renderscript::Sampler_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Sampler_Builder& operator=(const ::android::renderscript::Sampler_Builder& x) {obj = x.obj; return *this;}
    ::android::renderscript::Sampler_Builder& operator=(::android::renderscript::Sampler_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    Sampler_Builder(const ::android::renderscript::RenderScript&);
    void setMinification(const ::android::renderscript::Sampler_Value&) const ;
    void setMagnification(const ::android::renderscript::Sampler_Value&) const ;
    void setWrapS(const ::android::renderscript::Sampler_Value&) const ;
    void setWrapT(const ::android::renderscript::Sampler_Value&) const ;
    void setAnisotropy(float) const ;
    ::android::renderscript::Sampler create() const ;

};
}
}


