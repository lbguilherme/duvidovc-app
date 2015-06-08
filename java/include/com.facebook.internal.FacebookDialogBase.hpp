#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.FacebookDialog.hpp"

namespace com { namespace facebook { class CallbackManager; } }
namespace com { namespace facebook { class FacebookCallback; } }
namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
namespace internal {
class FacebookDialogBase : public virtual ::java::lang::Object,
                           public virtual ::com::facebook::FacebookDialog {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookDialogBase(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::FacebookDialog(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookDialogBase(const ::com::facebook::internal::FacebookDialogBase& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0) {obj = x.obj;}
    FacebookDialogBase(::com::facebook::internal::FacebookDialogBase&& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FacebookDialogBase& operator=(const ::com::facebook::internal::FacebookDialogBase& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FacebookDialogBase& operator=(::com::facebook::internal::FacebookDialogBase&& x) {obj = std::move(x.obj); return *this;}
    
    void registerCallback(const ::com::facebook::CallbackManager&, const ::com::facebook::FacebookCallback&) const;
    void registerCallback(const ::com::facebook::CallbackManager&, const ::com::facebook::FacebookCallback&, int32_t) const;
    int32_t getRequestCode() const;
    bool canShow(const ::java::lang::Object&) const;
    void show(const ::java::lang::Object&) const;

};
}
}
}

#include "com.facebook.internal.FacebookDialogBase_ModeHandler.hpp"

