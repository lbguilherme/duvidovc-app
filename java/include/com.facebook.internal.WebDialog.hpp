#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Dialog.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace view { class KeyEvent; } }
namespace com { namespace facebook { namespace internal { class WebDialog_OnCompleteListener; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class WebDialog : public virtual ::java::lang::Object,
                  public virtual ::android::app::Dialog {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebDialog(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Dialog(_obj), ::android::content::DialogInterface(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebDialog(const ::com::facebook::internal::WebDialog& x) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    WebDialog(::com::facebook::internal::WebDialog&& x) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::WebDialog& operator=(const ::com::facebook::internal::WebDialog& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::WebDialog& operator=(::com::facebook::internal::WebDialog&& x) {obj = std::move(x.obj); return *this;}
    
    WebDialog(const ::android::content::Context&, const ::java::lang::String&);
    WebDialog(const ::android::content::Context&, const ::java::lang::String&, int32_t);
    WebDialog(const ::android::content::Context&, const ::java::lang::String&, const ::android::os::Bundle&, int32_t, const ::com::facebook::internal::WebDialog_OnCompleteListener&);
    void setOnCompleteListener(const ::com::facebook::internal::WebDialog_OnCompleteListener&) const;
    ::com::facebook::internal::WebDialog_OnCompleteListener getOnCompleteListener() const;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    void dismiss() const;
    void onDetachedFromWindow() const;
    void onAttachedToWindow() const;
    void resize() const;
    void cancel() const;

};
}
}
}

#include "com.facebook.internal.WebDialog_Builder.hpp"
#include "com.facebook.internal.WebDialog_DialogWebViewClient.hpp"
#include "com.facebook.internal.WebDialog_OnCompleteListener.hpp"

