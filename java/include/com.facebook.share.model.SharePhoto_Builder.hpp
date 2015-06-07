#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareMedia_Builder.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareMedia; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareMedia_Builder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModel; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModelBuilder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhoto; } } } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhoto_Builder; } } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class SharePhoto_Builder : public virtual ::java::lang::Object,
                           public virtual ::com::facebook::share::model::ShareMedia_Builder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SharePhoto_Builder(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::ShareBuilder(_obj), ::com::facebook::share::model::ShareMedia_Builder(_obj), ::com::facebook::share::model::ShareModelBuilder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SharePhoto_Builder(const ::com::facebook::share::model::SharePhoto_Builder& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareMedia_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj;}
    SharePhoto_Builder(::com::facebook::share::model::SharePhoto_Builder&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareMedia_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::SharePhoto_Builder& operator=(const ::com::facebook::share::model::SharePhoto_Builder& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::SharePhoto_Builder& operator=(::com::facebook::share::model::SharePhoto_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    SharePhoto_Builder();
    ::com::facebook::share::model::SharePhoto_Builder setBitmap(const ::android::graphics::Bitmap&) const ;
    ::com::facebook::share::model::SharePhoto_Builder setImageUrl(const ::android::net::Uri&) const ;
    ::com::facebook::share::model::SharePhoto_Builder setUserGenerated(bool) const ;
    ::com::facebook::share::model::SharePhoto_Builder setCaption(const ::java::lang::String&) const ;
    ::com::facebook::share::model::SharePhoto build() const ;
    ::com::facebook::share::model::SharePhoto_Builder readFrom(const ::com::facebook::share::model::SharePhoto&) const ;
    ::com::facebook::share::model::SharePhoto_Builder readFrom(const ::android::os::Parcel&) const ;
    static void writeListTo(const ::android::os::Parcel&, const ::java::util::List&);
    static ::java::util::List readListFrom(const ::android::os::Parcel&);
    ::com::facebook::share::model::ShareMedia_Builder readFrom(const ::com::facebook::share::model::ShareMedia&) const ;
    ::com::facebook::share::model::ShareModelBuilder readFrom(const ::com::facebook::share::model::ShareModel&) const ;

};
}
}
}
}


