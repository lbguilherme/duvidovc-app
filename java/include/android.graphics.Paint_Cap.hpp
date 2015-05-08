#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class Paint_Cap; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Paint_Cap : public virtual ::java::lang::Object,
                  public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Paint_Cap(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Paint_Cap(const ::android::graphics::Paint_Cap& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Paint_Cap(::android::graphics::Paint_Cap&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Paint_Cap& operator=(const ::android::graphics::Paint_Cap& x) {obj = x.obj; return *this;}
    ::android::graphics::Paint_Cap& operator=(::android::graphics::Paint_Cap&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::Paint_Cap> values();
    static ::android::graphics::Paint_Cap valueOf(const ::java::lang::String&);

};
}
}


