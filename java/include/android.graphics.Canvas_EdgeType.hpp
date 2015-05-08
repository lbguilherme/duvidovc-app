#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class Canvas_EdgeType; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Canvas_EdgeType : public virtual ::java::lang::Object,
                        public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Canvas_EdgeType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Canvas_EdgeType(const ::android::graphics::Canvas_EdgeType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Canvas_EdgeType(::android::graphics::Canvas_EdgeType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Canvas_EdgeType& operator=(const ::android::graphics::Canvas_EdgeType& x) {obj = x.obj; return *this;}
    ::android::graphics::Canvas_EdgeType& operator=(::android::graphics::Canvas_EdgeType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::Canvas_EdgeType> values();
    static ::android::graphics::Canvas_EdgeType valueOf(const ::java::lang::String&);

};
}
}


