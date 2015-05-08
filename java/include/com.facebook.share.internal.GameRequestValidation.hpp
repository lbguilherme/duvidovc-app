#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace share { namespace model { class GameRequestContent; } } } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class GameRequestValidation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GameRequestValidation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GameRequestValidation(const ::com::facebook::share::internal::GameRequestValidation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GameRequestValidation(::com::facebook::share::internal::GameRequestValidation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::GameRequestValidation& operator=(const ::com::facebook::share::internal::GameRequestValidation& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::GameRequestValidation& operator=(::com::facebook::share::internal::GameRequestValidation&& x) {obj = std::move(x.obj); return *this;}
    
    GameRequestValidation();
    static void validate(const ::com::facebook::share::model::GameRequestContent&);

};
}
}
}
}


