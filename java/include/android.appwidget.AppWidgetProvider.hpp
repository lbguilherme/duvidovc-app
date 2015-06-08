#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.BroadcastReceiver.hpp"

namespace android { namespace appwidget { class AppWidgetManager; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }

namespace android {
namespace appwidget {
class AppWidgetProvider : public virtual ::java::lang::Object,
                          public virtual ::android::content::BroadcastReceiver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppWidgetProvider(jobject _obj) : ::java::lang::Object(_obj), ::android::content::BroadcastReceiver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppWidgetProvider(const ::android::appwidget::AppWidgetProvider& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj;}
    AppWidgetProvider(::android::appwidget::AppWidgetProvider&& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::appwidget::AppWidgetProvider& operator=(const ::android::appwidget::AppWidgetProvider& x) {obj = x.obj; return *this;}
    ::android::appwidget::AppWidgetProvider& operator=(::android::appwidget::AppWidgetProvider&& x) {obj = std::move(x.obj); return *this;}
    
    AppWidgetProvider();
    void onReceive(const ::android::content::Context&, const ::android::content::Intent&) const;
    void onUpdate(const ::android::content::Context&, const ::android::appwidget::AppWidgetManager&, const std::vector< int32_t>&) const;
    void onDeleted(const ::android::content::Context&, const std::vector< int32_t>&) const;
    void onEnabled(const ::android::content::Context&) const;
    void onDisabled(const ::android::content::Context&) const;

};
}
}


