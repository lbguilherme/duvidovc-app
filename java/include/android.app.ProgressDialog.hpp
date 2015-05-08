#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.AlertDialog.hpp"

namespace android { namespace app { class ProgressDialog; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class DialogInterface_OnCancelListener; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace text { class NumberFormat; } }

namespace android {
namespace app {
class ProgressDialog : public virtual ::java::lang::Object,
                       public virtual ::android::app::AlertDialog {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgressDialog(jobject _obj) : ::java::lang::Object(_obj), ::android::app::AlertDialog(_obj), ::android::app::Dialog(_obj), ::android::content::DialogInterface(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgressDialog(const ::android::app::ProgressDialog& x) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    ProgressDialog(::android::app::ProgressDialog&& x) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ProgressDialog& operator=(const ::android::app::ProgressDialog& x) {obj = x.obj; return *this;}
    ::android::app::ProgressDialog& operator=(::android::app::ProgressDialog&& x) {obj = std::move(x.obj); return *this;}
    
    ProgressDialog(const ::android::content::Context&);
    ProgressDialog(const ::android::content::Context&, int32_t);
    static ::android::app::ProgressDialog show(const ::android::content::Context&, const ::java::lang::CharSequence&, const ::java::lang::CharSequence&);
    static ::android::app::ProgressDialog show(const ::android::content::Context&, const ::java::lang::CharSequence&, const ::java::lang::CharSequence&, bool);
    static ::android::app::ProgressDialog show(const ::android::content::Context&, const ::java::lang::CharSequence&, const ::java::lang::CharSequence&, bool, bool);
    static ::android::app::ProgressDialog show(const ::android::content::Context&, const ::java::lang::CharSequence&, const ::java::lang::CharSequence&, bool, bool, const ::android::content::DialogInterface_OnCancelListener&);
    void onStart() const ;
    void setProgress(int32_t) const ;
    void setSecondaryProgress(int32_t) const ;
    int32_t getProgress() const ;
    int32_t getSecondaryProgress() const ;
    int32_t getMax() const ;
    void setMax(int32_t) const ;
    void incrementProgressBy(int32_t) const ;
    void incrementSecondaryProgressBy(int32_t) const ;
    void setProgressDrawable(const ::android::graphics::drawable::Drawable&) const ;
    void setIndeterminateDrawable(const ::android::graphics::drawable::Drawable&) const ;
    void setIndeterminate(bool) const ;
    bool isIndeterminate() const ;
    void setMessage(const ::java::lang::CharSequence&) const ;
    void setProgressStyle(int32_t) const ;
    void setProgressNumberFormat(const ::java::lang::String&) const ;
    void setProgressPercentFormat(const ::java::text::NumberFormat&) const ;

};
}
}


