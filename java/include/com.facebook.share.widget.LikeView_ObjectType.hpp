#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { namespace share { namespace widget { class LikeView_ObjectType; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class LikeView_ObjectType : public virtual ::java::lang::Object,
                            public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeView_ObjectType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeView_ObjectType(const ::com::facebook::share::widget::LikeView_ObjectType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    LikeView_ObjectType(::com::facebook::share::widget::LikeView_ObjectType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::LikeView_ObjectType& operator=(const ::com::facebook::share::widget::LikeView_ObjectType& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::LikeView_ObjectType& operator=(::com::facebook::share::widget::LikeView_ObjectType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::share::widget::LikeView_ObjectType> values();
    static ::com::facebook::share::widget::LikeView_ObjectType valueOf(const ::java::lang::String&);
    static ::com::facebook::share::widget::LikeView_ObjectType fromInt(int32_t);
    ::java::lang::String toString() const ;
    int32_t getValue() const ;

};
}
}
}
}


