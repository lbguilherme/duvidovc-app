#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace share { namespace model { class ShareContent; } } } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class ShareContentValidation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareContentValidation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareContentValidation(const ::com::facebook::share::internal::ShareContentValidation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareContentValidation(::com::facebook::share::internal::ShareContentValidation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::ShareContentValidation& operator=(const ::com::facebook::share::internal::ShareContentValidation& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::ShareContentValidation& operator=(::com::facebook::share::internal::ShareContentValidation&& x) {obj = std::move(x.obj); return *this;}
    
    ShareContentValidation();
    static void validateForMessage(const ::com::facebook::share::model::ShareContent&);
    static void validateForNativeShare(const ::com::facebook::share::model::ShareContent&);
    static void validateForWebShare(const ::com::facebook::share::model::ShareContent&);
    static void validateForApiShare(const ::com::facebook::share::model::ShareContent&);

};
}
}
}
}

#include "com.facebook.share.internal.ShareContentValidation_ApiValidator.hpp"
#include "com.facebook.share.internal.ShareContentValidation_Validator.hpp"
#include "com.facebook.share.internal.ShareContentValidation_WebShareValidator.hpp"

