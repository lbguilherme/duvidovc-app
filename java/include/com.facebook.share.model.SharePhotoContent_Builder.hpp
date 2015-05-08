#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareContent_Builder.hpp"

namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareContent_Builder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModel; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModelBuilder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhoto; } } } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhotoContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhotoContent_Builder; } } } }
namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class SharePhotoContent_Builder : public virtual ::java::lang::Object,
                                  public virtual ::com::facebook::share::model::ShareContent_Builder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SharePhotoContent_Builder(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::ShareBuilder(_obj), ::com::facebook::share::model::ShareContent_Builder(_obj), ::com::facebook::share::model::ShareModelBuilder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SharePhotoContent_Builder(const ::com::facebook::share::model::SharePhotoContent_Builder& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareContent_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj;}
    SharePhotoContent_Builder(::com::facebook::share::model::SharePhotoContent_Builder&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareContent_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::SharePhotoContent_Builder& operator=(const ::com::facebook::share::model::SharePhotoContent_Builder& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::SharePhotoContent_Builder& operator=(::com::facebook::share::model::SharePhotoContent_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    SharePhotoContent_Builder();
    ::com::facebook::share::model::SharePhotoContent_Builder addPhoto(const ::com::facebook::share::model::SharePhoto&) const ;
    ::com::facebook::share::model::SharePhotoContent_Builder addPhotos(const ::java::util::List&) const ;
    ::com::facebook::share::model::SharePhotoContent build() const ;
    ::com::facebook::share::model::SharePhotoContent_Builder readFrom(const ::com::facebook::share::model::SharePhotoContent&) const ;
    ::com::facebook::share::model::SharePhotoContent_Builder readFrom(const ::android::os::Parcel&) const ;
    ::com::facebook::share::model::SharePhotoContent_Builder setPhotos(const ::java::util::List&) const ;
    ::com::facebook::share::model::ShareContent_Builder readFrom(const ::com::facebook::share::model::ShareContent&) const ;
    ::com::facebook::share::model::ShareModelBuilder readFrom(const ::com::facebook::share::model::ShareModel&) const ;

};
}
}
}
}


