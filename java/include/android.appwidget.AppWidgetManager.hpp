#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace appwidget { class AppWidgetManager; } }
namespace android { namespace appwidget { class AppWidgetProviderInfo; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace widget { class RemoteViews; } }
namespace java { namespace util { class List; } }

namespace android {
namespace appwidget {
class AppWidgetManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppWidgetManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppWidgetManager(const ::android::appwidget::AppWidgetManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppWidgetManager(::android::appwidget::AppWidgetManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::appwidget::AppWidgetManager& operator=(const ::android::appwidget::AppWidgetManager& x) {obj = x.obj; return *this;}
    ::android::appwidget::AppWidgetManager& operator=(::android::appwidget::AppWidgetManager&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::appwidget::AppWidgetManager getInstance(const ::android::content::Context&);
    void updateAppWidget(const std::vector< int32_t>&, const ::android::widget::RemoteViews&) const;
    void updateAppWidget(int32_t, const ::android::widget::RemoteViews&) const;
    void partiallyUpdateAppWidget(const std::vector< int32_t>&, const ::android::widget::RemoteViews&) const;
    void partiallyUpdateAppWidget(int32_t, const ::android::widget::RemoteViews&) const;
    void updateAppWidget(const ::android::content::ComponentName&, const ::android::widget::RemoteViews&) const;
    void notifyAppWidgetViewDataChanged(const std::vector< int32_t>&, int32_t) const;
    void notifyAppWidgetViewDataChanged(int32_t, int32_t) const;
    ::java::util::List getInstalledProviders() const;
    ::android::appwidget::AppWidgetProviderInfo getAppWidgetInfo(int32_t) const;
    void bindAppWidgetId(int32_t, const ::android::content::ComponentName&) const;
    std::vector< int32_t> getAppWidgetIds(const ::android::content::ComponentName&) const;

};
}
}


