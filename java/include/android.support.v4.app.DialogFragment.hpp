#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.DialogInterface_OnCancelListener.hpp"
#include "android.content.DialogInterface_OnDismissListener.hpp"
#include "android.support.v4.app.Fragment.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace app { class Dialog; } }
namespace android { namespace content { class DialogInterface; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentManager; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentTransaction; } } } }
namespace android { namespace view { class LayoutInflater; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class DialogFragment : public virtual ::java::lang::Object,
                       public virtual ::android::content::DialogInterface_OnCancelListener,
                       public virtual ::android::content::DialogInterface_OnDismissListener,
                       public virtual ::android::support::v4::app::Fragment {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialogFragment(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::DialogInterface_OnCancelListener(_obj), ::android::content::DialogInterface_OnDismissListener(_obj), ::android::support::v4::app::Fragment(_obj), ::android::view::View_OnCreateContextMenuListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialogFragment(const ::android::support::v4::app::DialogFragment& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::DialogInterface_OnCancelListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::support::v4::app::Fragment((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj;}
    DialogFragment(::android::support::v4::app::DialogFragment&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::DialogInterface_OnCancelListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::support::v4::app::Fragment((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::DialogFragment& operator=(const ::android::support::v4::app::DialogFragment& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::DialogFragment& operator=(::android::support::v4::app::DialogFragment&& x) {obj = std::move(x.obj); return *this;}
    
    DialogFragment();
    void setStyle(int32_t, int32_t) const;
    void show(const ::android::support::v4::app::FragmentManager&, const ::java::lang::String&) const;
    int32_t show(const ::android::support::v4::app::FragmentTransaction&, const ::java::lang::String&) const;
    void dismiss() const;
    void dismissAllowingStateLoss() const;
    ::android::app::Dialog getDialog() const;
    int32_t getTheme() const;
    void setCancelable(bool) const;
    bool isCancelable() const;
    void setShowsDialog(bool) const;
    bool getShowsDialog() const;
    void onAttach(const ::android::app::Activity&) const;
    void onDetach() const;
    void onCreate(const ::android::os::Bundle&) const;
    ::android::view::LayoutInflater getLayoutInflater(const ::android::os::Bundle&) const;
    ::android::app::Dialog onCreateDialog(const ::android::os::Bundle&) const;
    void onCancel(const ::android::content::DialogInterface&) const;
    void onDismiss(const ::android::content::DialogInterface&) const;
    void onActivityCreated(const ::android::os::Bundle&) const;
    void onStart() const;
    void onSaveInstanceState(const ::android::os::Bundle&) const;
    void onStop() const;
    void onDestroyView() const;

};
}
}
}
}

#include "android.support.v4.app.DialogFragment_DialogStyle.hpp"

