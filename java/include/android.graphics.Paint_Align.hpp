#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class Paint_Align; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Paint_Align : public virtual ::java::lang::Object,
                    public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Paint_Align(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Paint_Align(const ::android::graphics::Paint_Align& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Paint_Align(::android::graphics::Paint_Align&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Paint_Align& operator=(const ::android::graphics::Paint_Align& x) {obj = x.obj; return *this;}
    ::android::graphics::Paint_Align& operator=(::android::graphics::Paint_Align&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::Paint_Align> values();
    static ::android::graphics::Paint_Align valueOf(const ::java::lang::String&);

};
}
}


