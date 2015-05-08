#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Dialog.hpp"
#include "android.content.DialogInterface.hpp"

namespace android { namespace content { class DialogInterface_OnClickListener; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Message; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class Button; } }
namespace android { namespace widget { class ListView; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace app {
class AlertDialog : public virtual ::java::lang::Object,
                    public virtual ::android::app::Dialog,
                    public virtual ::android::content::DialogInterface {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlertDialog(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Dialog(_obj), ::android::content::DialogInterface(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlertDialog(const ::android::app::AlertDialog& x) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj;}
    AlertDialog(::android::app::AlertDialog&& x) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::AlertDialog& operator=(const ::android::app::AlertDialog& x) {obj = x.obj; return *this;}
    ::android::app::AlertDialog& operator=(::android::app::AlertDialog&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::widget::Button getButton(int32_t) const ;
    ::android::widget::ListView getListView() const ;
    void setTitle(const ::java::lang::CharSequence&) const ;
    void setCustomTitle(const ::android::view::View&) const ;
    void setMessage(const ::java::lang::CharSequence&) const ;
    void setView(const ::android::view::View&) const ;
    void setView(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const ;
    void setButton(int32_t, const ::java::lang::CharSequence&, const ::android::os::Message&) const ;
    void setButton(int32_t, const ::java::lang::CharSequence&, const ::android::content::DialogInterface_OnClickListener&) const ;
    void setButton(const ::java::lang::CharSequence&, const ::android::os::Message&) const ;
    void setButton2(const ::java::lang::CharSequence&, const ::android::os::Message&) const ;
    void setButton3(const ::java::lang::CharSequence&, const ::android::os::Message&) const ;
    void setButton(const ::java::lang::CharSequence&, const ::android::content::DialogInterface_OnClickListener&) const ;
    void setButton2(const ::java::lang::CharSequence&, const ::android::content::DialogInterface_OnClickListener&) const ;
    void setButton3(const ::java::lang::CharSequence&, const ::android::content::DialogInterface_OnClickListener&) const ;
    void setIcon(int32_t) const ;
    void setIcon(const ::android::graphics::drawable::Drawable&) const ;
    void setIconAttribute(int32_t) const ;
    void setInverseBackgroundForced(bool) const ;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const ;

};
}
}

#include "android.app.AlertDialog_Builder.hpp"

