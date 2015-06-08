#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace com {
namespace android {
namespace internal {
namespace util {
class Predicate : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Predicate(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Predicate(const ::com::android::internal::util::Predicate& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Predicate(::com::android::internal::util::Predicate&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::android::internal::util::Predicate& operator=(const ::com::android::internal::util::Predicate& x) {obj = x.obj; return *this;}
    ::com::android::internal::util::Predicate& operator=(::com::android::internal::util::Predicate&& x) {obj = std::move(x.obj); return *this;}
    
    bool apply(const ::java::lang::Object&) const;

};
}
}
}
}


