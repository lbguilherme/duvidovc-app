#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class Element_DataType; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Element_DataType : public virtual ::java::lang::Object,
                         public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Element_DataType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Element_DataType(const ::android::renderscript::Element_DataType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Element_DataType(::android::renderscript::Element_DataType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Element_DataType& operator=(const ::android::renderscript::Element_DataType& x) {obj = x.obj; return *this;}
    ::android::renderscript::Element_DataType& operator=(::android::renderscript::Element_DataType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::Element_DataType> values();
    static ::android::renderscript::Element_DataType valueOf(const ::java::lang::String&);

};
}
}


