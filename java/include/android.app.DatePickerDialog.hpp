#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.AlertDialog.hpp"
#include "android.content.DialogInterface_OnClickListener.hpp"
#include "android.widget.DatePicker_OnDateChangedListener.hpp"

namespace android { namespace app { class DatePickerDialog_OnDateSetListener; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class DialogInterface; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace widget { class DatePicker; } }

namespace android {
namespace app {
class DatePickerDialog : public virtual ::java::lang::Object,
                         public virtual ::android::app::AlertDialog,
                         public virtual ::android::content::DialogInterface_OnClickListener,
                         public virtual ::android::widget::DatePicker_OnDateChangedListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatePickerDialog(jobject _obj) : ::java::lang::Object(_obj), ::android::app::AlertDialog(_obj), ::android::app::Dialog(_obj), ::android::content::DialogInterface(_obj), ::android::content::DialogInterface_OnClickListener(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj), ::android::widget::DatePicker_OnDateChangedListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatePickerDialog(const ::android::app::DatePickerDialog& x) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::DatePicker_OnDateChangedListener((jobject)0) {obj = x.obj;}
    DatePickerDialog(::android::app::DatePickerDialog&& x) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::DatePicker_OnDateChangedListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::DatePickerDialog& operator=(const ::android::app::DatePickerDialog& x) {obj = x.obj; return *this;}
    ::android::app::DatePickerDialog& operator=(::android::app::DatePickerDialog&& x) {obj = std::move(x.obj); return *this;}
    
    DatePickerDialog(const ::android::content::Context&, const ::android::app::DatePickerDialog_OnDateSetListener&, int32_t, int32_t, int32_t);
    DatePickerDialog(const ::android::content::Context&, int32_t, const ::android::app::DatePickerDialog_OnDateSetListener&, int32_t, int32_t, int32_t);
    void onClick(const ::android::content::DialogInterface&, int32_t) const ;
    void onDateChanged(const ::android::widget::DatePicker&, int32_t, int32_t, int32_t) const ;
    ::android::widget::DatePicker getDatePicker() const ;
    void updateDate(int32_t, int32_t, int32_t) const ;
    ::android::os::Bundle onSaveInstanceState() const ;
    void onRestoreInstanceState(const ::android::os::Bundle&) const ;

};
}
}

#include "android.app.DatePickerDialog_OnDateSetListener.hpp"

