#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareContent; } } } }
namespace java { namespace util { class UUID; } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class LegacyNativeDialogParameters : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LegacyNativeDialogParameters(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LegacyNativeDialogParameters(const ::com::facebook::share::internal::LegacyNativeDialogParameters& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LegacyNativeDialogParameters(::com::facebook::share::internal::LegacyNativeDialogParameters&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LegacyNativeDialogParameters& operator=(const ::com::facebook::share::internal::LegacyNativeDialogParameters& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LegacyNativeDialogParameters& operator=(::com::facebook::share::internal::LegacyNativeDialogParameters&& x) {obj = std::move(x.obj); return *this;}
    
    LegacyNativeDialogParameters();
    static ::android::os::Bundle create(const ::java::util::UUID&, const ::com::facebook::share::model::ShareContent&, bool);

};
}
}
}
}


