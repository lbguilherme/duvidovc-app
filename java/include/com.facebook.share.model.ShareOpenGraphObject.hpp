#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareOpenGraphValueContainer.hpp"


namespace com {
namespace facebook {
namespace share {
namespace model {
class ShareOpenGraphObject : public virtual ::java::lang::Object,
                             public virtual ::com::facebook::share::model::ShareOpenGraphValueContainer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareOpenGraphObject(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::com::facebook::share::model::ShareModel(_obj), ::com::facebook::share::model::ShareOpenGraphValueContainer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareOpenGraphObject(const ::com::facebook::share::model::ShareOpenGraphObject& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0), ::com::facebook::share::model::ShareOpenGraphValueContainer((jobject)0) {obj = x.obj;}
    ShareOpenGraphObject(::com::facebook::share::model::ShareOpenGraphObject&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0), ::com::facebook::share::model::ShareOpenGraphValueContainer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::ShareOpenGraphObject& operator=(const ::com::facebook::share::model::ShareOpenGraphObject& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::ShareOpenGraphObject& operator=(::com::facebook::share::model::ShareOpenGraphObject&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}

#include "com.facebook.share.model.ShareOpenGraphObject_Builder.hpp"

