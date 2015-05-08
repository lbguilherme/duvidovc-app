#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.Fragment.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace view { class LayoutInflater; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }

namespace com {
namespace facebook {
namespace login {
class LoginFragment : public virtual ::java::lang::Object,
                      public virtual ::android::support::v4::app::Fragment {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginFragment(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::support::v4::app::Fragment(_obj), ::android::view::View_OnCreateContextMenuListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginFragment(const ::com::facebook::login::LoginFragment& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::support::v4::app::Fragment((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj;}
    LoginFragment(::com::facebook::login::LoginFragment&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::support::v4::app::Fragment((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::LoginFragment& operator=(const ::com::facebook::login::LoginFragment& x) {obj = x.obj; return *this;}
    ::com::facebook::login::LoginFragment& operator=(::com::facebook::login::LoginFragment&& x) {obj = std::move(x.obj); return *this;}
    
    LoginFragment();
    void onCreate(const ::android::os::Bundle&) const ;
    void onDestroy() const ;
    ::android::view::View onCreateView(const ::android::view::LayoutInflater&, const ::android::view::ViewGroup&, const ::android::os::Bundle&) const ;
    void onResume() const ;
    void onPause() const ;
    void onActivityResult(int32_t, int32_t, const ::android::content::Intent&) const ;
    void onSaveInstanceState(const ::android::os::Bundle&) const ;

};
}
}
}


