#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace com { namespace facebook { namespace share { namespace model { class AppGroupCreationContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class GameRequestContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareLinkContent; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphContent; } } } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class WebDialogParameters : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebDialogParameters(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebDialogParameters(const ::com::facebook::share::internal::WebDialogParameters& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebDialogParameters(::com::facebook::share::internal::WebDialogParameters&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::WebDialogParameters& operator=(const ::com::facebook::share::internal::WebDialogParameters& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::WebDialogParameters& operator=(::com::facebook::share::internal::WebDialogParameters&& x) {obj = std::move(x.obj); return *this;}
    
    WebDialogParameters();
    static ::android::os::Bundle create(const ::com::facebook::share::model::AppGroupCreationContent&);
    static ::android::os::Bundle create(const ::com::facebook::share::model::GameRequestContent&);
    static ::android::os::Bundle create(const ::com::facebook::share::model::ShareLinkContent&);
    static ::android::os::Bundle create(const ::com::facebook::share::model::ShareOpenGraphContent&);
    static ::android::os::Bundle createForFeed(const ::com::facebook::share::model::ShareLinkContent&);

};
}
}
}
}


