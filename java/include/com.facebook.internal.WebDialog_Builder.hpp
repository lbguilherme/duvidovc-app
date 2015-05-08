#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class Bundle; } }
namespace com { namespace facebook { namespace internal { class WebDialog; } } }
namespace com { namespace facebook { namespace internal { class WebDialog_Builder; } } }
namespace com { namespace facebook { namespace internal { class WebDialog_OnCompleteListener; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class WebDialog_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebDialog_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebDialog_Builder(const ::com::facebook::internal::WebDialog_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebDialog_Builder(::com::facebook::internal::WebDialog_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::WebDialog_Builder& operator=(const ::com::facebook::internal::WebDialog_Builder& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::WebDialog_Builder& operator=(::com::facebook::internal::WebDialog_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    WebDialog_Builder(const ::android::content::Context&, const ::java::lang::String&, const ::android::os::Bundle&);
    WebDialog_Builder(const ::android::content::Context&, const ::java::lang::String&, const ::java::lang::String&, const ::android::os::Bundle&);
    ::com::facebook::internal::WebDialog_Builder setTheme(int32_t) const ;
    ::com::facebook::internal::WebDialog_Builder setOnCompleteListener(const ::com::facebook::internal::WebDialog_OnCompleteListener&) const ;
    ::com::facebook::internal::WebDialog build() const ;
    ::java::lang::String getApplicationId() const ;
    ::android::content::Context getContext() const ;
    int32_t getTheme() const ;
    ::android::os::Bundle getParameters() const ;
    ::com::facebook::internal::WebDialog_OnCompleteListener getListener() const ;

};
}
}
}


