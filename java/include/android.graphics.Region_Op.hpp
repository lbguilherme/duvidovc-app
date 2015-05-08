#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class Region_Op; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Region_Op : public virtual ::java::lang::Object,
                  public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Region_Op(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Region_Op(const ::android::graphics::Region_Op& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Region_Op(::android::graphics::Region_Op&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Region_Op& operator=(const ::android::graphics::Region_Op& x) {obj = x.obj; return *this;}
    ::android::graphics::Region_Op& operator=(::android::graphics::Region_Op&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::Region_Op> values();
    static ::android::graphics::Region_Op valueOf(const ::java::lang::String&);

};
}
}


