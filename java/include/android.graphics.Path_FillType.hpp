#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class Path_FillType; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Path_FillType : public virtual ::java::lang::Object,
                      public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Path_FillType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Path_FillType(const ::android::graphics::Path_FillType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Path_FillType(::android::graphics::Path_FillType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Path_FillType& operator=(const ::android::graphics::Path_FillType& x) {obj = x.obj; return *this;}
    ::android::graphics::Path_FillType& operator=(::android::graphics::Path_FillType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::Path_FillType> values();
    static ::android::graphics::Path_FillType valueOf(const ::java::lang::String&);

};
}
}


