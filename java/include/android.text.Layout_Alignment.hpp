#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace text { class Layout_Alignment; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
class Layout_Alignment : public virtual ::java::lang::Object,
                         public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Layout_Alignment(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Layout_Alignment(const ::android::text::Layout_Alignment& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Layout_Alignment(::android::text::Layout_Alignment&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Layout_Alignment& operator=(const ::android::text::Layout_Alignment& x) {obj = x.obj; return *this;}
    ::android::text::Layout_Alignment& operator=(::android::text::Layout_Alignment&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::text::Layout_Alignment> values();
    static ::android::text::Layout_Alignment valueOf(const ::java::lang::String&);

};
}
}


