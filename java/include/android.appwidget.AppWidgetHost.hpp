#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace appwidget { class AppWidgetHostView; } }
namespace android { namespace appwidget { class AppWidgetProviderInfo; } }
namespace android { namespace content { class Context; } }

namespace android {
namespace appwidget {
class AppWidgetHost : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppWidgetHost(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppWidgetHost(const ::android::appwidget::AppWidgetHost& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppWidgetHost(::android::appwidget::AppWidgetHost&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::appwidget::AppWidgetHost& operator=(const ::android::appwidget::AppWidgetHost& x) {obj = x.obj; return *this;}
    ::android::appwidget::AppWidgetHost& operator=(::android::appwidget::AppWidgetHost&& x) {obj = std::move(x.obj); return *this;}
    
    AppWidgetHost(const ::android::content::Context&, int32_t);
    void startListening() const;
    void stopListening() const;
    int32_t allocateAppWidgetId() const;
    void deleteAppWidgetId(int32_t) const;
    void deleteHost() const;
    static void deleteAllHosts();
    ::android::appwidget::AppWidgetHostView createView(const ::android::content::Context&, int32_t, const ::android::appwidget::AppWidgetProviderInfo&) const;

};
}
}


