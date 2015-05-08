#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { namespace drawable { class GradientDrawable_Orientation; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
namespace drawable {
class GradientDrawable_Orientation : public virtual ::java::lang::Object,
                                     public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GradientDrawable_Orientation(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GradientDrawable_Orientation(const ::android::graphics::drawable::GradientDrawable_Orientation& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    GradientDrawable_Orientation(::android::graphics::drawable::GradientDrawable_Orientation&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::GradientDrawable_Orientation& operator=(const ::android::graphics::drawable::GradientDrawable_Orientation& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::GradientDrawable_Orientation& operator=(::android::graphics::drawable::GradientDrawable_Orientation&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::drawable::GradientDrawable_Orientation> values();
    static ::android::graphics::drawable::GradientDrawable_Orientation valueOf(const ::java::lang::String&);

};
}
}
}


