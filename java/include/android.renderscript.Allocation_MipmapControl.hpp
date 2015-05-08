#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class Allocation_MipmapControl; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Allocation_MipmapControl : public virtual ::java::lang::Object,
                                 public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Allocation_MipmapControl(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Allocation_MipmapControl(const ::android::renderscript::Allocation_MipmapControl& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Allocation_MipmapControl(::android::renderscript::Allocation_MipmapControl&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Allocation_MipmapControl& operator=(const ::android::renderscript::Allocation_MipmapControl& x) {obj = x.obj; return *this;}
    ::android::renderscript::Allocation_MipmapControl& operator=(::android::renderscript::Allocation_MipmapControl&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::Allocation_MipmapControl> values();
    static ::android::renderscript::Allocation_MipmapControl valueOf(const ::java::lang::String&);

};
}
}


