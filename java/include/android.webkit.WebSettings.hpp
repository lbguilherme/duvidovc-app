#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace webkit { class WebSettings_LayoutAlgorithm; } }
namespace android { namespace webkit { class WebSettings_PluginState; } }
namespace android { namespace webkit { class WebSettings_RenderPriority; } }
namespace android { namespace webkit { class WebSettings_TextSize; } }
namespace android { namespace webkit { class WebSettings_ZoomDensity; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebSettings : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebSettings(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebSettings(const ::android::webkit::WebSettings& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebSettings(::android::webkit::WebSettings&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebSettings& operator=(const ::android::webkit::WebSettings& x) {obj = x.obj; return *this;}
    ::android::webkit::WebSettings& operator=(::android::webkit::WebSettings&& x) {obj = std::move(x.obj); return *this;}
    
    void setNavDump(bool) const;
    bool getNavDump() const;
    void setSupportZoom(bool) const;
    bool supportZoom() const;
    void setBuiltInZoomControls(bool) const;
    bool getBuiltInZoomControls() const;
    void setDisplayZoomControls(bool) const;
    bool getDisplayZoomControls() const;
    void setAllowFileAccess(bool) const;
    bool getAllowFileAccess() const;
    void setAllowContentAccess(bool) const;
    bool getAllowContentAccess() const;
    void setLoadWithOverviewMode(bool) const;
    bool getLoadWithOverviewMode() const;
    void setEnableSmoothTransition(bool) const;
    bool enableSmoothTransition() const;
    void setUseWebViewBackgroundForOverscrollBackground(bool) const;
    bool getUseWebViewBackgroundForOverscrollBackground() const;
    void setSaveFormData(bool) const;
    bool getSaveFormData() const;
    void setSavePassword(bool) const;
    bool getSavePassword() const;
    void setTextZoom(int32_t) const;
    int32_t getTextZoom() const;
    void setTextSize(const ::android::webkit::WebSettings_TextSize&) const;
    ::android::webkit::WebSettings_TextSize getTextSize() const;
    void setDefaultZoom(const ::android::webkit::WebSettings_ZoomDensity&) const;
    ::android::webkit::WebSettings_ZoomDensity getDefaultZoom() const;
    void setLightTouchEnabled(bool) const;
    bool getLightTouchEnabled() const;
    void setUseDoubleTree(bool) const;
    bool getUseDoubleTree() const;
    void setUserAgent(int32_t) const;
    int32_t getUserAgent() const;
    void setUseWideViewPort(bool) const;
    bool getUseWideViewPort() const;
    void setSupportMultipleWindows(bool) const;
    bool supportMultipleWindows() const;
    void setLayoutAlgorithm(const ::android::webkit::WebSettings_LayoutAlgorithm&) const;
    ::android::webkit::WebSettings_LayoutAlgorithm getLayoutAlgorithm() const;
    void setStandardFontFamily(const ::java::lang::String&) const;
    ::java::lang::String getStandardFontFamily() const;
    void setFixedFontFamily(const ::java::lang::String&) const;
    ::java::lang::String getFixedFontFamily() const;
    void setSansSerifFontFamily(const ::java::lang::String&) const;
    ::java::lang::String getSansSerifFontFamily() const;
    void setSerifFontFamily(const ::java::lang::String&) const;
    ::java::lang::String getSerifFontFamily() const;
    void setCursiveFontFamily(const ::java::lang::String&) const;
    ::java::lang::String getCursiveFontFamily() const;
    void setFantasyFontFamily(const ::java::lang::String&) const;
    ::java::lang::String getFantasyFontFamily() const;
    void setMinimumFontSize(int32_t) const;
    int32_t getMinimumFontSize() const;
    void setMinimumLogicalFontSize(int32_t) const;
    int32_t getMinimumLogicalFontSize() const;
    void setDefaultFontSize(int32_t) const;
    int32_t getDefaultFontSize() const;
    void setDefaultFixedFontSize(int32_t) const;
    int32_t getDefaultFixedFontSize() const;
    void setLoadsImagesAutomatically(bool) const;
    bool getLoadsImagesAutomatically() const;
    void setBlockNetworkImage(bool) const;
    bool getBlockNetworkImage() const;
    void setBlockNetworkLoads(bool) const;
    bool getBlockNetworkLoads() const;
    void setJavaScriptEnabled(bool) const;
    void setPluginsEnabled(bool) const;
    void setPluginState(const ::android::webkit::WebSettings_PluginState&) const;
    void setPluginsPath(const ::java::lang::String&) const;
    void setDatabasePath(const ::java::lang::String&) const;
    void setGeolocationDatabasePath(const ::java::lang::String&) const;
    void setAppCacheEnabled(bool) const;
    void setAppCachePath(const ::java::lang::String&) const;
    void setAppCacheMaxSize(int64_t) const;
    void setDatabaseEnabled(bool) const;
    void setDomStorageEnabled(bool) const;
    bool getDomStorageEnabled() const;
    ::java::lang::String getDatabasePath() const;
    bool getDatabaseEnabled() const;
    void setGeolocationEnabled(bool) const;
    bool getJavaScriptEnabled() const;
    bool getPluginsEnabled() const;
    ::android::webkit::WebSettings_PluginState getPluginState() const;
    ::java::lang::String getPluginsPath() const;
    void setJavaScriptCanOpenWindowsAutomatically(bool) const;
    bool getJavaScriptCanOpenWindowsAutomatically() const;
    void setDefaultTextEncodingName(const ::java::lang::String&) const;
    ::java::lang::String getDefaultTextEncodingName() const;
    void setUserAgentString(const ::java::lang::String&) const;
    ::java::lang::String getUserAgentString() const;
    void setNeedInitialFocus(bool) const;
    void setRenderPriority(const ::android::webkit::WebSettings_RenderPriority&) const;
    void setCacheMode(int32_t) const;
    int32_t getCacheMode() const;

};
}
}

#include "android.webkit.WebSettings_LayoutAlgorithm.hpp"
#include "android.webkit.WebSettings_PluginState.hpp"
#include "android.webkit.WebSettings_RenderPriority.hpp"
#include "android.webkit.WebSettings_TextSize.hpp"
#include "android.webkit.WebSettings_ZoomDensity.hpp"

