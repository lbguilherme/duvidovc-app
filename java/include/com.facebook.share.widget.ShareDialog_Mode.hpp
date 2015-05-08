#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { namespace share { namespace widget { class ShareDialog_Mode; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class ShareDialog_Mode : public virtual ::java::lang::Object,
                         public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareDialog_Mode(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareDialog_Mode(const ::com::facebook::share::widget::ShareDialog_Mode& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    ShareDialog_Mode(::com::facebook::share::widget::ShareDialog_Mode&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::ShareDialog_Mode& operator=(const ::com::facebook::share::widget::ShareDialog_Mode& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::ShareDialog_Mode& operator=(::com::facebook::share::widget::ShareDialog_Mode&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::share::widget::ShareDialog_Mode> values();
    static ::com::facebook::share::widget::ShareDialog_Mode valueOf(const ::java::lang::String&);

};
}
}
}
}


