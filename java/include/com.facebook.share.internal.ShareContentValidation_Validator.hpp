#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace share { namespace model { class ShareLinkContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphAction; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphObject; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphValueContainer; } } } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhoto; } } } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhotoContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareVideo; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareVideoContent; } } } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class ShareContentValidation_Validator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareContentValidation_Validator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareContentValidation_Validator(const ::com::facebook::share::internal::ShareContentValidation_Validator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareContentValidation_Validator(::com::facebook::share::internal::ShareContentValidation_Validator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::ShareContentValidation_Validator& operator=(const ::com::facebook::share::internal::ShareContentValidation_Validator& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::ShareContentValidation_Validator& operator=(::com::facebook::share::internal::ShareContentValidation_Validator&& x) {obj = std::move(x.obj); return *this;}
    
    void validate(const ::com::facebook::share::model::ShareLinkContent&) const ;
    void validate(const ::com::facebook::share::model::SharePhotoContent&) const ;
    void validate(const ::com::facebook::share::model::ShareVideoContent&) const ;
    void validate(const ::com::facebook::share::model::ShareOpenGraphContent&) const ;
    void validate(const ::com::facebook::share::model::ShareOpenGraphAction&) const ;
    void validate(const ::com::facebook::share::model::ShareOpenGraphObject&) const ;
    void validate(const ::com::facebook::share::model::ShareOpenGraphValueContainer&, bool) const ;
    void validate(const ::com::facebook::share::model::SharePhoto&) const ;
    void validate(const ::com::facebook::share::model::ShareVideo&) const ;
    bool isOpenGraphContent() const ;

};
}
}
}
}


