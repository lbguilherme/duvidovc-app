#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
namespace internal {
class FacebookDialogBase_ModeHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookDialogBase_ModeHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookDialogBase_ModeHandler(const ::com::facebook::internal::FacebookDialogBase_ModeHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FacebookDialogBase_ModeHandler(::com::facebook::internal::FacebookDialogBase_ModeHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FacebookDialogBase_ModeHandler& operator=(const ::com::facebook::internal::FacebookDialogBase_ModeHandler& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FacebookDialogBase_ModeHandler& operator=(::com::facebook::internal::FacebookDialogBase_ModeHandler&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object getMode() const;

};
}
}
}


