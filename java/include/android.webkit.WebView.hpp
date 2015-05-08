#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ViewGroup_OnHierarchyChangeListener.hpp"
#include "android.view.ViewTreeObserver_OnGlobalFocusChangeListener.hpp"
#include "android.widget.AbsoluteLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class Picture; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace net { namespace http { class SslCertificate; } } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Message; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace view { namespace accessibility { class AccessibilityNodeInfo; } } }
namespace android { namespace view { namespace inputmethod { class EditorInfo; } } }
namespace android { namespace view { namespace inputmethod { class InputConnection; } } }
namespace android { namespace webkit { class DownloadListener; } }
namespace android { namespace webkit { class ValueCallback; } }
namespace android { namespace webkit { class WebBackForwardList; } }
namespace android { namespace webkit { class WebChromeClient; } }
namespace android { namespace webkit { class WebSettings; } }
namespace android { namespace webkit { class WebView_HitTestResult; } }
namespace android { namespace webkit { class WebView_PictureListener; } }
namespace android { namespace webkit { class WebViewClient; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace webkit {
class WebView : public virtual ::java::lang::Object,
                public virtual ::android::view::ViewGroup_OnHierarchyChangeListener,
                public virtual ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener,
                public virtual ::android::widget::AbsoluteLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewGroup_OnHierarchyChangeListener(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AbsoluteLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebView(const ::android::webkit::WebView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewGroup_OnHierarchyChangeListener((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsoluteLayout((jobject)0) {obj = x.obj;}
    WebView(::android::webkit::WebView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewGroup_OnHierarchyChangeListener((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsoluteLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebView& operator=(const ::android::webkit::WebView& x) {obj = x.obj; return *this;}
    ::android::webkit::WebView& operator=(::android::webkit::WebView&& x) {obj = std::move(x.obj); return *this;}
    
    WebView(const ::android::content::Context&);
    WebView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    WebView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    WebView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t, bool);
    bool shouldDelayChildPressedState() const ;
    void onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo&) const ;
    void onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    void setOverScrollMode(int32_t) const ;
    void setScrollBarStyle(int32_t) const ;
    void setHorizontalScrollbarOverlay(bool) const ;
    void setVerticalScrollbarOverlay(bool) const ;
    bool overlayHorizontalScrollbar() const ;
    bool overlayVerticalScrollbar() const ;
    int32_t getVisibleTitleHeight() const ;
    ::android::net::http::SslCertificate getCertificate() const ;
    void setCertificate(const ::android::net::http::SslCertificate&) const ;
    void savePassword(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void setHttpAuthUsernamePassword(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    std::vector< ::java::lang::String> getHttpAuthUsernamePassword(const ::java::lang::String&, const ::java::lang::String&) const ;
    void destroy() const ;
    static void enablePlatformNotifications();
    static void disablePlatformNotifications();
    void setNetworkAvailable(bool) const ;
    ::android::webkit::WebBackForwardList saveState(const ::android::os::Bundle&) const ;
    bool savePicture(const ::android::os::Bundle&, const ::java::io::File&) const ;
    bool restorePicture(const ::android::os::Bundle&, const ::java::io::File&) const ;
    ::android::webkit::WebBackForwardList restoreState(const ::android::os::Bundle&) const ;
    void loadUrl(const ::java::lang::String&, const ::java::util::Map&) const ;
    void loadUrl(const ::java::lang::String&) const ;
    void postUrl(const ::java::lang::String&, const std::vector< int8_t>&) const ;
    void loadData(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void loadDataWithBaseURL(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void saveWebArchive(const ::java::lang::String&) const ;
    void saveWebArchive(const ::java::lang::String&, bool, const ::android::webkit::ValueCallback&) const ;
    void stopLoading() const ;
    void reload() const ;
    bool canGoBack() const ;
    void goBack() const ;
    bool canGoForward() const ;
    void goForward() const ;
    bool canGoBackOrForward(int32_t) const ;
    void goBackOrForward(int32_t) const ;
    bool isPrivateBrowsingEnabled() const ;
    bool pageUp(bool) const ;
    bool pageDown(bool) const ;
    void clearView() const ;
    ::android::graphics::Picture capturePicture() const ;
    float getScale() const ;
    void setInitialScale(int32_t) const ;
    void invokeZoomPicker() const ;
    ::android::webkit::WebView_HitTestResult getHitTestResult() const ;
    void requestFocusNodeHref(const ::android::os::Message&) const ;
    void requestImageRef(const ::android::os::Message&) const ;
    ::java::lang::String getUrl() const ;
    ::java::lang::String getOriginalUrl() const ;
    ::java::lang::String getTitle() const ;
    ::android::graphics::Bitmap getFavicon() const ;
    int32_t getProgress() const ;
    int32_t getContentHeight() const ;
    void pauseTimers() const ;
    void resumeTimers() const ;
    void onPause() const ;
    void onResume() const ;
    void freeMemory() const ;
    void clearCache(bool) const ;
    void clearFormData() const ;
    void clearHistory() const ;
    void clearSslPreferences() const ;
    ::android::webkit::WebBackForwardList copyBackForwardList() const ;
    void findNext(bool) const ;
    int32_t findAll(const ::java::lang::String&) const ;
    bool showFindDialog(const ::java::lang::String&, bool) const ;
    static ::java::lang::String findAddress(const ::java::lang::String&);
    void clearMatches() const ;
    void documentHasImages(const ::android::os::Message&) const ;
    void computeScroll() const ;
    void setWebViewClient(const ::android::webkit::WebViewClient&) const ;
    void setDownloadListener(const ::android::webkit::DownloadListener&) const ;
    void setWebChromeClient(const ::android::webkit::WebChromeClient&) const ;
    void setPictureListener(const ::android::webkit::WebView_PictureListener&) const ;
    void addJavascriptInterface(const ::java::lang::Object&, const ::java::lang::String&) const ;
    void removeJavascriptInterface(const ::java::lang::String&) const ;
    ::android::webkit::WebSettings getSettings() const ;
    void setLayoutParams(const ::android::view::ViewGroup_LayoutParams&) const ;
    bool performLongClick() const ;
    ::android::view::inputmethod::InputConnection onCreateInputConnection(const ::android::view::inputmethod::EditorInfo&) const ;
    bool onKeyMultiple(int32_t, int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const ;
    void emulateShiftHeld() const ;
    void onChildViewAdded(const ::android::view::View&, const ::android::view::View&) const ;
    void onChildViewRemoved(const ::android::view::View&, const ::android::view::View&) const ;
    void onGlobalFocusChanged(const ::android::view::View&, const ::android::view::View&) const ;
    void onWindowFocusChanged(bool) const ;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const ;
    bool onHoverEvent(const ::android::view::MotionEvent&) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onGenericMotionEvent(const ::android::view::MotionEvent&) const ;
    void setMapTrackballToArrowKeys(bool) const ;
    bool onTrackballEvent(const ::android::view::MotionEvent&) const ;
    void flingScroll(int32_t, int32_t) const ;
    ::android::view::View getZoomControls() const ;
    bool canZoomIn() const ;
    bool canZoomOut() const ;
    bool zoomIn() const ;
    bool zoomOut() const ;
    bool requestFocus(int32_t, const ::android::graphics::Rect&) const ;
    bool requestChildRectangleOnScreen(const ::android::view::View&, const ::android::graphics::Rect&, bool) const ;
    void setBackgroundColor(int32_t) const ;
    void debugDump() const ;

};
}
}

#include "android.webkit.WebView_HitTestResult.hpp"
#include "android.webkit.WebView_PictureListener.hpp"
#include "android.webkit.WebView_WebViewTransport.hpp"

