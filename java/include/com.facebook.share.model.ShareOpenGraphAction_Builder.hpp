#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareOpenGraphValueContainer_Builder.hpp"

namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModel; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModelBuilder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphAction; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphAction_Builder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphValueContainer; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphValueContainer_Builder; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class ShareOpenGraphAction_Builder : public virtual ::java::lang::Object,
                                     public virtual ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareOpenGraphAction_Builder(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::ShareBuilder(_obj), ::com::facebook::share::model::ShareModelBuilder(_obj), ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareOpenGraphAction_Builder(const ::com::facebook::share::model::ShareOpenGraphAction_Builder& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0), ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder((jobject)0) {obj = x.obj;}
    ShareOpenGraphAction_Builder(::com::facebook::share::model::ShareOpenGraphAction_Builder&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0), ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::ShareOpenGraphAction_Builder& operator=(const ::com::facebook::share::model::ShareOpenGraphAction_Builder& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::ShareOpenGraphAction_Builder& operator=(::com::facebook::share::model::ShareOpenGraphAction_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ShareOpenGraphAction_Builder();
    ::com::facebook::share::model::ShareOpenGraphAction_Builder setActionType(const ::java::lang::String&) const ;
    ::com::facebook::share::model::ShareOpenGraphAction build() const ;
    ::com::facebook::share::model::ShareOpenGraphAction_Builder readFrom(const ::com::facebook::share::model::ShareOpenGraphAction&) const ;
    ::com::facebook::share::model::ShareOpenGraphAction_Builder readFrom(const ::android::os::Parcel&) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder readFrom(const ::com::facebook::share::model::ShareOpenGraphValueContainer&) const ;
    ::com::facebook::share::model::ShareModelBuilder readFrom(const ::com::facebook::share::model::ShareModel&) const ;

};
}
}
}
}


