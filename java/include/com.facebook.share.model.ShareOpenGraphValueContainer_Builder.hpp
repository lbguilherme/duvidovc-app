#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareModelBuilder.hpp"

namespace com { namespace facebook { namespace share { namespace model { class ShareModel; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModelBuilder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphObject; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphValueContainer; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphValueContainer_Builder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhoto; } } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class ShareOpenGraphValueContainer_Builder : public virtual ::java::lang::Object,
                                             public virtual ::com::facebook::share::model::ShareModelBuilder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareOpenGraphValueContainer_Builder(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::ShareBuilder(_obj), ::com::facebook::share::model::ShareModelBuilder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareOpenGraphValueContainer_Builder(const ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj;}
    ShareOpenGraphValueContainer_Builder(::com::facebook::share::model::ShareOpenGraphValueContainer_Builder&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder& operator=(const ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder& operator=(::com::facebook::share::model::ShareOpenGraphValueContainer_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ShareOpenGraphValueContainer_Builder();
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putBoolean(const ::java::lang::String&, bool) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putBooleanArray(const ::java::lang::String&, const std::vector< bool>&) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putDouble(const ::java::lang::String&, double) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putDoubleArray(const ::java::lang::String&, const std::vector< double>&) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putInt(const ::java::lang::String&, int32_t) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putIntArray(const ::java::lang::String&, const std::vector< int32_t>&) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putLong(const ::java::lang::String&, int64_t) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putLongArray(const ::java::lang::String&, const std::vector< int64_t>&) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putObject(const ::java::lang::String&, const ::com::facebook::share::model::ShareOpenGraphObject&) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putObjectArrayList(const ::java::lang::String&, const ::java::util::ArrayList&) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putPhoto(const ::java::lang::String&, const ::com::facebook::share::model::SharePhoto&) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putPhotoArrayList(const ::java::lang::String&, const ::java::util::ArrayList&) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putString(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder putStringArrayList(const ::java::lang::String&, const ::java::util::ArrayList&) const ;
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder readFrom(const ::com::facebook::share::model::ShareOpenGraphValueContainer&) const ;
    ::com::facebook::share::model::ShareModelBuilder readFrom(const ::com::facebook::share::model::ShareModel&) const ;

};
}
}
}
}


