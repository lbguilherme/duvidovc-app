#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.AlertDialog.hpp"
#include "android.content.DialogInterface_OnClickListener.hpp"
#include "android.widget.TimePicker_OnTimeChangedListener.hpp"

namespace android { namespace app { class TimePickerDialog_OnTimeSetListener; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class DialogInterface; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace widget { class TimePicker; } }

namespace android {
namespace app {
class TimePickerDialog : public virtual ::java::lang::Object,
                         public virtual ::android::app::AlertDialog,
                         public virtual ::android::content::DialogInterface_OnClickListener,
                         public virtual ::android::widget::TimePicker_OnTimeChangedListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimePickerDialog(jobject _obj) : ::java::lang::Object(_obj), ::android::app::AlertDialog(_obj), ::android::app::Dialog(_obj), ::android::content::DialogInterface(_obj), ::android::content::DialogInterface_OnClickListener(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj), ::android::widget::TimePicker_OnTimeChangedListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimePickerDialog(const ::android::app::TimePickerDialog& x) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::TimePicker_OnTimeChangedListener((jobject)0) {obj = x.obj;}
    TimePickerDialog(::android::app::TimePickerDialog&& x) : ::java::lang::Object((jobject)0), ::android::app::AlertDialog((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::TimePicker_OnTimeChangedListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::TimePickerDialog& operator=(const ::android::app::TimePickerDialog& x) {obj = x.obj; return *this;}
    ::android::app::TimePickerDialog& operator=(::android::app::TimePickerDialog&& x) {obj = std::move(x.obj); return *this;}
    
    TimePickerDialog(const ::android::content::Context&, const ::android::app::TimePickerDialog_OnTimeSetListener&, int32_t, int32_t, bool);
    TimePickerDialog(const ::android::content::Context&, int32_t, const ::android::app::TimePickerDialog_OnTimeSetListener&, int32_t, int32_t, bool);
    void onClick(const ::android::content::DialogInterface&, int32_t) const ;
    void updateTime(int32_t, int32_t) const ;
    void onTimeChanged(const ::android::widget::TimePicker&, int32_t, int32_t) const ;
    ::android::os::Bundle onSaveInstanceState() const ;
    void onRestoreInstanceState(const ::android::os::Bundle&) const ;

};
}
}

#include "android.app.TimePickerDialog_OnTimeSetListener.hpp"

