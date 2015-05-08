#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.DialogFragment.hpp"

namespace android { namespace app { class Dialog; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace os { class Bundle; } }

namespace com {
namespace facebook {
namespace internal {
class FacebookDialogFragment : public virtual ::java::lang::Object,
                               public virtual ::android::support::v4::app::DialogFragment {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookDialogFragment(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::DialogInterface_OnCancelListener(_obj), ::android::content::DialogInterface_OnDismissListener(_obj), ::android::support::v4::app::DialogFragment(_obj), ::android::support::v4::app::Fragment(_obj), ::android::view::View_OnCreateContextMenuListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookDialogFragment(const ::com::facebook::internal::FacebookDialogFragment& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::DialogInterface_OnCancelListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::support::v4::app::DialogFragment((jobject)0), ::android::support::v4::app::Fragment((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj;}
    FacebookDialogFragment(::com::facebook::internal::FacebookDialogFragment&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::DialogInterface_OnCancelListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::support::v4::app::DialogFragment((jobject)0), ::android::support::v4::app::Fragment((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FacebookDialogFragment& operator=(const ::com::facebook::internal::FacebookDialogFragment& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FacebookDialogFragment& operator=(::com::facebook::internal::FacebookDialogFragment&& x) {obj = std::move(x.obj); return *this;}
    
    FacebookDialogFragment();
    void setDialog(const ::android::app::Dialog&) const ;
    void onCreate(const ::android::os::Bundle&) const ;
    ::android::app::Dialog onCreateDialog(const ::android::os::Bundle&) const ;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const ;
    void onDestroyView() const ;

};
}
}
}


