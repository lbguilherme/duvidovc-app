#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class Path_Direction; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Path_Direction : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Path_Direction(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Path_Direction(const ::android::graphics::Path_Direction& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Path_Direction(::android::graphics::Path_Direction&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Path_Direction& operator=(const ::android::graphics::Path_Direction& x) {obj = x.obj; return *this;}
    ::android::graphics::Path_Direction& operator=(::android::graphics::Path_Direction&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::Path_Direction> values();
    static ::android::graphics::Path_Direction valueOf(const ::java::lang::String&);

};
}
}


