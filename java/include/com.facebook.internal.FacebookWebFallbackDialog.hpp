#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.internal.WebDialog.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class FacebookWebFallbackDialog : public virtual ::java::lang::Object,
                                  public virtual ::com::facebook::internal::WebDialog {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookWebFallbackDialog(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Dialog(_obj), ::android::content::DialogInterface(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj), ::com::facebook::internal::WebDialog(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookWebFallbackDialog(const ::com::facebook::internal::FacebookWebFallbackDialog& x) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::com::facebook::internal::WebDialog((jobject)0) {obj = x.obj;}
    FacebookWebFallbackDialog(::com::facebook::internal::FacebookWebFallbackDialog&& x) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::com::facebook::internal::WebDialog((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FacebookWebFallbackDialog& operator=(const ::com::facebook::internal::FacebookWebFallbackDialog& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FacebookWebFallbackDialog& operator=(::com::facebook::internal::FacebookWebFallbackDialog&& x) {obj = std::move(x.obj); return *this;}
    
    FacebookWebFallbackDialog(const ::android::content::Context&, const ::java::lang::String&, const ::java::lang::String&);
    void cancel() const ;

};
}
}
}


