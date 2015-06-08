#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class AlertDialog; } }
namespace android { namespace app { class AlertDialog_Builder; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class DialogInterface_OnCancelListener; } }
namespace android { namespace content { class DialogInterface_OnClickListener; } }
namespace android { namespace content { class DialogInterface_OnKeyListener; } }
namespace android { namespace content { class DialogInterface_OnMultiChoiceClickListener; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class AdapterView_OnItemSelectedListener; } }
namespace android { namespace widget { class ListAdapter; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class AlertDialog_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlertDialog_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlertDialog_Builder(const ::android::app::AlertDialog_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AlertDialog_Builder(::android::app::AlertDialog_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::AlertDialog_Builder& operator=(const ::android::app::AlertDialog_Builder& x) {obj = x.obj; return *this;}
    ::android::app::AlertDialog_Builder& operator=(::android::app::AlertDialog_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    AlertDialog_Builder(const ::android::content::Context&);
    AlertDialog_Builder(const ::android::content::Context&, int32_t);
    ::android::content::Context getContext() const;
    ::android::app::AlertDialog_Builder setTitle(int32_t) const;
    ::android::app::AlertDialog_Builder setTitle(const ::java::lang::CharSequence&) const;
    ::android::app::AlertDialog_Builder setCustomTitle(const ::android::view::View&) const;
    ::android::app::AlertDialog_Builder setMessage(int32_t) const;
    ::android::app::AlertDialog_Builder setMessage(const ::java::lang::CharSequence&) const;
    ::android::app::AlertDialog_Builder setIcon(int32_t) const;
    ::android::app::AlertDialog_Builder setIcon(const ::android::graphics::drawable::Drawable&) const;
    ::android::app::AlertDialog_Builder setIconAttribute(int32_t) const;
    ::android::app::AlertDialog_Builder setPositiveButton(int32_t, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setPositiveButton(const ::java::lang::CharSequence&, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setNegativeButton(int32_t, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setNegativeButton(const ::java::lang::CharSequence&, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setNeutralButton(int32_t, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setNeutralButton(const ::java::lang::CharSequence&, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setCancelable(bool) const;
    ::android::app::AlertDialog_Builder setOnCancelListener(const ::android::content::DialogInterface_OnCancelListener&) const;
    ::android::app::AlertDialog_Builder setOnKeyListener(const ::android::content::DialogInterface_OnKeyListener&) const;
    ::android::app::AlertDialog_Builder setItems(int32_t, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setItems(const std::vector< ::java::lang::CharSequence>&, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setAdapter(const ::android::widget::ListAdapter&, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setCursor(const ::android::database::Cursor&, const ::android::content::DialogInterface_OnClickListener&, const ::java::lang::String&) const;
    ::android::app::AlertDialog_Builder setMultiChoiceItems(int32_t, const std::vector< bool>&, const ::android::content::DialogInterface_OnMultiChoiceClickListener&) const;
    ::android::app::AlertDialog_Builder setMultiChoiceItems(const std::vector< ::java::lang::CharSequence>&, const std::vector< bool>&, const ::android::content::DialogInterface_OnMultiChoiceClickListener&) const;
    ::android::app::AlertDialog_Builder setMultiChoiceItems(const ::android::database::Cursor&, const ::java::lang::String&, const ::java::lang::String&, const ::android::content::DialogInterface_OnMultiChoiceClickListener&) const;
    ::android::app::AlertDialog_Builder setSingleChoiceItems(int32_t, int32_t, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setSingleChoiceItems(const ::android::database::Cursor&, int32_t, const ::java::lang::String&, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setSingleChoiceItems(const std::vector< ::java::lang::CharSequence>&, int32_t, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setSingleChoiceItems(const ::android::widget::ListAdapter&, int32_t, const ::android::content::DialogInterface_OnClickListener&) const;
    ::android::app::AlertDialog_Builder setOnItemSelectedListener(const ::android::widget::AdapterView_OnItemSelectedListener&) const;
    ::android::app::AlertDialog_Builder setView(const ::android::view::View&) const;
    ::android::app::AlertDialog_Builder setInverseBackgroundForced(bool) const;
    ::android::app::AlertDialog create() const;
    ::android::app::AlertDialog show() const;

};
}
}


