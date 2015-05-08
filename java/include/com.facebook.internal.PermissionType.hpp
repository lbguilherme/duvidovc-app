#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { namespace internal { class PermissionType; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class PermissionType : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PermissionType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PermissionType(const ::com::facebook::internal::PermissionType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    PermissionType(::com::facebook::internal::PermissionType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::PermissionType& operator=(const ::com::facebook::internal::PermissionType& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::PermissionType& operator=(::com::facebook::internal::PermissionType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::internal::PermissionType> values();
    static ::com::facebook::internal::PermissionType valueOf(const ::java::lang::String&);

};
}
}
}


