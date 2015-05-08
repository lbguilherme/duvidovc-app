#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.internal.DialogFeature.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { namespace share { namespace internal { class MessageDialogFeature; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class MessageDialogFeature : public virtual ::java::lang::Object,
                             public virtual ::com::facebook::internal::DialogFeature,
                             public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MessageDialogFeature(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::internal::DialogFeature(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MessageDialogFeature(const ::com::facebook::share::internal::MessageDialogFeature& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::DialogFeature((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    MessageDialogFeature(::com::facebook::share::internal::MessageDialogFeature&& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::DialogFeature((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::MessageDialogFeature& operator=(const ::com::facebook::share::internal::MessageDialogFeature& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::MessageDialogFeature& operator=(::com::facebook::share::internal::MessageDialogFeature&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::share::internal::MessageDialogFeature> values();
    static ::com::facebook::share::internal::MessageDialogFeature valueOf(const ::java::lang::String&);
    ::java::lang::String getAction() const ;
    int32_t getMinVersion() const ;

};
}
}
}
}


