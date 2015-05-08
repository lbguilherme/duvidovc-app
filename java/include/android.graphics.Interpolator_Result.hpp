#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class Interpolator_Result; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Interpolator_Result : public virtual ::java::lang::Object,
                            public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Interpolator_Result(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Interpolator_Result(const ::android::graphics::Interpolator_Result& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Interpolator_Result(::android::graphics::Interpolator_Result&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Interpolator_Result& operator=(const ::android::graphics::Interpolator_Result& x) {obj = x.obj; return *this;}
    ::android::graphics::Interpolator_Result& operator=(::android::graphics::Interpolator_Result&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::Interpolator_Result> values();
    static ::android::graphics::Interpolator_Result valueOf(const ::java::lang::String&);

};
}
}


