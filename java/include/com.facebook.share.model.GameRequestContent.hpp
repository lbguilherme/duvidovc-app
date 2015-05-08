#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareModel.hpp"

namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { namespace share { namespace model { class GameRequestContent_ActionType; } } } }
namespace com { namespace facebook { namespace share { namespace model { class GameRequestContent_Filters; } } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class GameRequestContent : public virtual ::java::lang::Object,
                           public virtual ::com::facebook::share::model::ShareModel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GameRequestContent(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::com::facebook::share::model::ShareModel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GameRequestContent(const ::com::facebook::share::model::GameRequestContent& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0) {obj = x.obj;}
    GameRequestContent(::com::facebook::share::model::GameRequestContent&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::GameRequestContent& operator=(const ::com::facebook::share::model::GameRequestContent& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::GameRequestContent& operator=(::com::facebook::share::model::GameRequestContent&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getMessage() const ;
    ::java::lang::String getTo() const ;
    ::java::lang::String getTitle() const ;
    ::java::lang::String getData() const ;
    ::com::facebook::share::model::GameRequestContent_ActionType getActionType() const ;
    ::java::lang::String getObjectId() const ;
    ::com::facebook::share::model::GameRequestContent_Filters getFilters() const ;
    ::java::util::ArrayList getSuggestions() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}
}

#include "com.facebook.share.model.GameRequestContent_ActionType.hpp"
#include "com.facebook.share.model.GameRequestContent_Builder.hpp"
#include "com.facebook.share.model.GameRequestContent_Filters.hpp"

