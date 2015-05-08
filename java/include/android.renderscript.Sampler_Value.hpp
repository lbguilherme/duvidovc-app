#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class Sampler_Value; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Sampler_Value : public virtual ::java::lang::Object,
                      public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Sampler_Value(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Sampler_Value(const ::android::renderscript::Sampler_Value& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Sampler_Value(::android::renderscript::Sampler_Value&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Sampler_Value& operator=(const ::android::renderscript::Sampler_Value& x) {obj = x.obj; return *this;}
    ::android::renderscript::Sampler_Value& operator=(::android::renderscript::Sampler_Value&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::Sampler_Value> values();
    static ::android::renderscript::Sampler_Value valueOf(const ::java::lang::String&);

};
}
}


