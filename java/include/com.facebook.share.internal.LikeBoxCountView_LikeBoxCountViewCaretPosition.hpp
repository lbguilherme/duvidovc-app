#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { namespace share { namespace internal { class LikeBoxCountView_LikeBoxCountViewCaretPosition; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class LikeBoxCountView_LikeBoxCountViewCaretPosition : public virtual ::java::lang::Object,
                                                       public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeBoxCountView_LikeBoxCountViewCaretPosition(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeBoxCountView_LikeBoxCountViewCaretPosition(const ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    LikeBoxCountView_LikeBoxCountViewCaretPosition(::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition& operator=(const ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition& operator=(::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition> values();
    static ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition valueOf(const ::java::lang::String&);

};
}
}
}
}


