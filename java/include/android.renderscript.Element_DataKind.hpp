#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class Element_DataKind; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Element_DataKind : public virtual ::java::lang::Object,
                         public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Element_DataKind(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Element_DataKind(const ::android::renderscript::Element_DataKind& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Element_DataKind(::android::renderscript::Element_DataKind&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Element_DataKind& operator=(const ::android::renderscript::Element_DataKind& x) {obj = x.obj; return *this;}
    ::android::renderscript::Element_DataKind& operator=(::android::renderscript::Element_DataKind&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::Element_DataKind> values();
    static ::android::renderscript::Element_DataKind valueOf(const ::java::lang::String&);

};
}
}


