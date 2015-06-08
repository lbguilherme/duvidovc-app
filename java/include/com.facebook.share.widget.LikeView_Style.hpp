#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { namespace share { namespace widget { class LikeView_Style; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class LikeView_Style : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeView_Style(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeView_Style(const ::com::facebook::share::widget::LikeView_Style& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    LikeView_Style(::com::facebook::share::widget::LikeView_Style&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::LikeView_Style& operator=(const ::com::facebook::share::widget::LikeView_Style& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::LikeView_Style& operator=(::com::facebook::share::widget::LikeView_Style&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::share::widget::LikeView_Style> values();
    static ::com::facebook::share::widget::LikeView_Style valueOf(const ::java::lang::String&);
    ::java::lang::String toString() const;

};
}
}
}
}


