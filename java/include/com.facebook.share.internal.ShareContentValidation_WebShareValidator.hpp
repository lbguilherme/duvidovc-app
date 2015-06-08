#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.internal.ShareContentValidation_Validator.hpp"

namespace com { namespace facebook { namespace share { namespace model { class SharePhoto; } } } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhotoContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareVideoContent; } } } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class ShareContentValidation_WebShareValidator : public virtual ::java::lang::Object,
                                                 public virtual ::com::facebook::share::internal::ShareContentValidation_Validator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareContentValidation_WebShareValidator(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::internal::ShareContentValidation_Validator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareContentValidation_WebShareValidator(const ::com::facebook::share::internal::ShareContentValidation_WebShareValidator& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::ShareContentValidation_Validator((jobject)0) {obj = x.obj;}
    ShareContentValidation_WebShareValidator(::com::facebook::share::internal::ShareContentValidation_WebShareValidator&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::ShareContentValidation_Validator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::ShareContentValidation_WebShareValidator& operator=(const ::com::facebook::share::internal::ShareContentValidation_WebShareValidator& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::ShareContentValidation_WebShareValidator& operator=(::com::facebook::share::internal::ShareContentValidation_WebShareValidator&& x) {obj = std::move(x.obj); return *this;}
    
    void validate(const ::com::facebook::share::model::SharePhotoContent&) const;
    void validate(const ::com::facebook::share::model::ShareVideoContent&) const;
    void validate(const ::com::facebook::share::model::SharePhoto&) const;

};
}
}
}
}


