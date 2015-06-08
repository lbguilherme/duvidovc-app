#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareModelBuilder.hpp"

namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { namespace share { namespace model { class GameRequestContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class GameRequestContent_ActionType; } } } }
namespace com { namespace facebook { namespace share { namespace model { class GameRequestContent_Builder; } } } }
namespace com { namespace facebook { namespace share { namespace model { class GameRequestContent_Filters; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModel; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareModelBuilder; } } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class GameRequestContent_Builder : public virtual ::java::lang::Object,
                                   public virtual ::com::facebook::share::model::ShareModelBuilder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GameRequestContent_Builder(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::ShareBuilder(_obj), ::com::facebook::share::model::ShareModelBuilder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GameRequestContent_Builder(const ::com::facebook::share::model::GameRequestContent_Builder& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj;}
    GameRequestContent_Builder(::com::facebook::share::model::GameRequestContent_Builder&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::GameRequestContent_Builder& operator=(const ::com::facebook::share::model::GameRequestContent_Builder& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::GameRequestContent_Builder& operator=(::com::facebook::share::model::GameRequestContent_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    GameRequestContent_Builder();
    ::com::facebook::share::model::GameRequestContent_Builder setMessage(const ::java::lang::String&) const;
    ::com::facebook::share::model::GameRequestContent_Builder setTo(const ::java::lang::String&) const;
    ::com::facebook::share::model::GameRequestContent_Builder setData(const ::java::lang::String&) const;
    ::com::facebook::share::model::GameRequestContent_Builder setTitle(const ::java::lang::String&) const;
    ::com::facebook::share::model::GameRequestContent_Builder setActionType(const ::com::facebook::share::model::GameRequestContent_ActionType&) const;
    ::com::facebook::share::model::GameRequestContent_Builder setObjectId(const ::java::lang::String&) const;
    ::com::facebook::share::model::GameRequestContent_Builder setFilters(const ::com::facebook::share::model::GameRequestContent_Filters&) const;
    ::com::facebook::share::model::GameRequestContent_Builder setSuggestions(const ::java::util::ArrayList&) const;
    ::com::facebook::share::model::GameRequestContent build() const;
    ::com::facebook::share::model::GameRequestContent_Builder readFrom(const ::com::facebook::share::model::GameRequestContent&) const;
    ::com::facebook::share::model::GameRequestContent_Builder readFrom(const ::android::os::Parcel&) const;
    ::com::facebook::share::model::ShareModelBuilder readFrom(const ::com::facebook::share::model::ShareModel&) const;

};
}
}
}
}


