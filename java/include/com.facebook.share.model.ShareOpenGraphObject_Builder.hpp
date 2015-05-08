#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareOpenGraphValueContainer_Builder.hpp"

namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphObject; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphObject_Builder; } } } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class ShareOpenGraphObject_Builder : public virtual ::java::lang::Object,
                                     public virtual ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareOpenGraphObject_Builder(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::ShareBuilder(_obj), ::com::facebook::share::model::ShareModelBuilder(_obj), ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareOpenGraphObject_Builder(const ::com::facebook::share::model::ShareOpenGraphObject_Builder& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0), ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder((jobject)0) {obj = x.obj;}
    ShareOpenGraphObject_Builder(::com::facebook::share::model::ShareOpenGraphObject_Builder&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0), ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::ShareOpenGraphObject_Builder& operator=(const ::com::facebook::share::model::ShareOpenGraphObject_Builder& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::ShareOpenGraphObject_Builder& operator=(::com::facebook::share::model::ShareOpenGraphObject_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ShareOpenGraphObject_Builder();
    ::com::facebook::share::model::ShareOpenGraphObject build() const ;
    ::com::facebook::share::model::ShareOpenGraphObject_Builder readFrom(const ::android::os::Parcel&) const ;

};
}
}
}
}


