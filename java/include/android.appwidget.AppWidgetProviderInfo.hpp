#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace appwidget {
class AppWidgetProviderInfo : public virtual ::java::lang::Object,
                              public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppWidgetProviderInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppWidgetProviderInfo(const ::android::appwidget::AppWidgetProviderInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    AppWidgetProviderInfo(::android::appwidget::AppWidgetProviderInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::appwidget::AppWidgetProviderInfo& operator=(const ::android::appwidget::AppWidgetProviderInfo& x) {obj = x.obj; return *this;}
    ::android::appwidget::AppWidgetProviderInfo& operator=(::android::appwidget::AppWidgetProviderInfo&& x) {obj = std::move(x.obj); return *this;}
    
    AppWidgetProviderInfo();
    AppWidgetProviderInfo(const ::android::os::Parcel&);
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t describeContents() const;
    ::java::lang::String toString() const;

};
}
}


