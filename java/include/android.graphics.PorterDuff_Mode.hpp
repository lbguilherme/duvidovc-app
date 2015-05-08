#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class PorterDuff_Mode; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class PorterDuff_Mode : public virtual ::java::lang::Object,
                        public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PorterDuff_Mode(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PorterDuff_Mode(const ::android::graphics::PorterDuff_Mode& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    PorterDuff_Mode(::android::graphics::PorterDuff_Mode&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::PorterDuff_Mode& operator=(const ::android::graphics::PorterDuff_Mode& x) {obj = x.obj; return *this;}
    ::android::graphics::PorterDuff_Mode& operator=(::android::graphics::PorterDuff_Mode&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::PorterDuff_Mode> values();
    static ::android::graphics::PorterDuff_Mode valueOf(const ::java::lang::String&);

};
}
}


