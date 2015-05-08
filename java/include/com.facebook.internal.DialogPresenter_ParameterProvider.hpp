#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }

namespace com {
namespace facebook {
namespace internal {
class DialogPresenter_ParameterProvider : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialogPresenter_ParameterProvider(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialogPresenter_ParameterProvider(const ::com::facebook::internal::DialogPresenter_ParameterProvider& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DialogPresenter_ParameterProvider(::com::facebook::internal::DialogPresenter_ParameterProvider&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::DialogPresenter_ParameterProvider& operator=(const ::com::facebook::internal::DialogPresenter_ParameterProvider& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::DialogPresenter_ParameterProvider& operator=(::com::facebook::internal::DialogPresenter_ParameterProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::os::Bundle getParameters() const ;
    ::android::os::Bundle getLegacyParameters() const ;

};
}
}
}


