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
class NativeDialogParameters : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NativeDialogParameters(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NativeDialogParameters(const ::com::facebook::share::internal::NativeDialogParameters& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NativeDialogParameters(::com::facebook::share::internal::NativeDialogParameters&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::NativeDialogParameters& operator=(const ::com::facebook::share::internal::NativeDialogParameters& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::NativeDialogParameters& operator=(::com::facebook::share::internal::NativeDialogParameters&& x) {obj = std::move(x.obj); return *this;}
    
    NativeDialogParameters();
    static ::android::os::Bundle create(const ::java::util::UUID&, const ::com::facebook::share::model::ShareContent&, bool);

};
}
}
}
}


