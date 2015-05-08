#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace widget { class ImageView_ScaleType; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class ImageView_ScaleType : public virtual ::java::lang::Object,
                            public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageView_ScaleType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageView_ScaleType(const ::android::widget::ImageView_ScaleType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    ImageView_ScaleType(::android::widget::ImageView_ScaleType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ImageView_ScaleType& operator=(const ::android::widget::ImageView_ScaleType& x) {obj = x.obj; return *this;}
    ::android::widget::ImageView_ScaleType& operator=(::android::widget::ImageView_ScaleType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::widget::ImageView_ScaleType> values();
    static ::android::widget::ImageView_ScaleType valueOf(const ::java::lang::String&);

};
}
}


