#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.internal.WebDialog_Builder.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class Bundle; } }
namespace com { namespace facebook { namespace internal { class WebDialog; } } }
namespace com { namespace facebook { namespace login { class WebViewLoginMethodHandler_AuthDialogBuilder; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace login {
class WebViewLoginMethodHandler_AuthDialogBuilder : public virtual ::java::lang::Object,
                                                    public virtual ::com::facebook::internal::WebDialog_Builder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebViewLoginMethodHandler_AuthDialogBuilder(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::internal::WebDialog_Builder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebViewLoginMethodHandler_AuthDialogBuilder(const ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::WebDialog_Builder((jobject)0) {obj = x.obj;}
    WebViewLoginMethodHandler_AuthDialogBuilder(::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder&& x) : ::java::lang::Object((jobject)0), ::com::facebook::internal::WebDialog_Builder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder& operator=(const ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder& x) {obj = x.obj; return *this;}
    ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder& operator=(::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    WebViewLoginMethodHandler_AuthDialogBuilder(const ::android::content::Context&, const ::java::lang::String&, const ::android::os::Bundle&);
    ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder setE2E(const ::java::lang::String&) const;
    ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder setIsRerequest(bool) const;
    ::com::facebook::internal::WebDialog build() const;

};
}
}
}


