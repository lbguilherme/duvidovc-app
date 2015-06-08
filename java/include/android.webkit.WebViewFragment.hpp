#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Fragment.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace view { class LayoutInflater; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace webkit { class WebView; } }

namespace android {
namespace webkit {
class WebViewFragment : public virtual ::java::lang::Object,
                        public virtual ::android::app::Fragment {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebViewFragment(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Fragment(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebViewFragment(const ::android::webkit::WebViewFragment& x) : ::java::lang::Object((jobject)0), ::android::app::Fragment((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj;}
    WebViewFragment(::android::webkit::WebViewFragment&& x) : ::java::lang::Object((jobject)0), ::android::app::Fragment((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebViewFragment& operator=(const ::android::webkit::WebViewFragment& x) {obj = x.obj; return *this;}
    ::android::webkit::WebViewFragment& operator=(::android::webkit::WebViewFragment&& x) {obj = std::move(x.obj); return *this;}
    
    WebViewFragment();
    ::android::view::View onCreateView(const ::android::view::LayoutInflater&, const ::android::view::ViewGroup&, const ::android::os::Bundle&) const;
    void onPause() const;
    void onResume() const;
    void onDestroyView() const;
    void onDestroy() const;
    ::android::webkit::WebView getWebView() const;

};
}
}


