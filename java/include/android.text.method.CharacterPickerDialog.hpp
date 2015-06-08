#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Dialog.hpp"
#include "android.view.View_OnClickListener.hpp"
#include "android.widget.AdapterView_OnItemClickListener.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace text { class Editable; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class AdapterView; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
namespace method {
class CharacterPickerDialog : public virtual ::java::lang::Object,
                              public virtual ::android::app::Dialog,
                              public virtual ::android::view::View_OnClickListener,
                              public virtual ::android::widget::AdapterView_OnItemClickListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharacterPickerDialog(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Dialog(_obj), ::android::content::DialogInterface(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View_OnClickListener(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj), ::android::widget::AdapterView_OnItemClickListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharacterPickerDialog(const ::android::text::method::CharacterPickerDialog& x) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::AdapterView_OnItemClickListener((jobject)0) {obj = x.obj;}
    CharacterPickerDialog(::android::text::method::CharacterPickerDialog&& x) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::AdapterView_OnItemClickListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::CharacterPickerDialog& operator=(const ::android::text::method::CharacterPickerDialog& x) {obj = x.obj; return *this;}
    ::android::text::method::CharacterPickerDialog& operator=(::android::text::method::CharacterPickerDialog&& x) {obj = std::move(x.obj); return *this;}
    
    CharacterPickerDialog(const ::android::content::Context&, const ::android::view::View&, const ::android::text::Editable&, const ::java::lang::String&, bool);
    void onItemClick(const ::android::widget::AdapterView&, const ::android::view::View&, int32_t, int64_t) const;
    void onClick(const ::android::view::View&) const;

};
}
}
}


