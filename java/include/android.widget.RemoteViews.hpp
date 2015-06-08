#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "android.view.LayoutInflater_Filter.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace widget { class RemoteViews; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class RemoteViews : public virtual ::java::lang::Object,
                    public virtual ::android::os::Parcelable,
                    public virtual ::android::view::LayoutInflater_Filter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteViews(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::view::LayoutInflater_Filter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteViews(const ::android::widget::RemoteViews& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::LayoutInflater_Filter((jobject)0) {obj = x.obj;}
    RemoteViews(::android::widget::RemoteViews&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::LayoutInflater_Filter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RemoteViews& operator=(const ::android::widget::RemoteViews& x) {obj = x.obj; return *this;}
    ::android::widget::RemoteViews& operator=(::android::widget::RemoteViews&& x) {obj = std::move(x.obj); return *this;}
    
    RemoteViews(const ::java::lang::String&, int32_t);
    RemoteViews(const ::android::os::Parcel&);
    ::android::widget::RemoteViews clone() const;
    ::java::lang::String getPackage() const;
    int32_t getLayoutId() const;
    void addView(int32_t, const ::android::widget::RemoteViews&) const;
    void removeAllViews(int32_t) const;
    void showNext(int32_t) const;
    void showPrevious(int32_t) const;
    void setDisplayedChild(int32_t, int32_t) const;
    void setViewVisibility(int32_t, int32_t) const;
    void setTextViewText(int32_t, const ::java::lang::CharSequence&) const;
    void setImageViewResource(int32_t, int32_t) const;
    void setImageViewUri(int32_t, const ::android::net::Uri&) const;
    void setImageViewBitmap(int32_t, const ::android::graphics::Bitmap&) const;
    void setEmptyView(int32_t, int32_t) const;
    void setChronometer(int32_t, int64_t, const ::java::lang::String&, bool) const;
    void setProgressBar(int32_t, int32_t, int32_t, bool) const;
    void setOnClickPendingIntent(int32_t, const ::android::app::PendingIntent&) const;
    void setPendingIntentTemplate(int32_t, const ::android::app::PendingIntent&) const;
    void setOnClickFillInIntent(int32_t, const ::android::content::Intent&) const;
    void setTextColor(int32_t, int32_t) const;
    void setRemoteAdapter(int32_t, int32_t, const ::android::content::Intent&) const;
    void setRemoteAdapter(int32_t, const ::android::content::Intent&) const;
    void setScrollPosition(int32_t, int32_t) const;
    void setRelativeScrollPosition(int32_t, int32_t) const;
    void setBoolean(int32_t, const ::java::lang::String&, bool) const;
    void setByte(int32_t, const ::java::lang::String&, int8_t) const;
    void setShort(int32_t, const ::java::lang::String&, int16_t) const;
    void setInt(int32_t, const ::java::lang::String&, int32_t) const;
    void setLong(int32_t, const ::java::lang::String&, int64_t) const;
    void setFloat(int32_t, const ::java::lang::String&, float) const;
    void setDouble(int32_t, const ::java::lang::String&, double) const;
    void setChar(int32_t, const ::java::lang::String&, uint16_t) const;
    void setString(int32_t, const ::java::lang::String&, const ::java::lang::String&) const;
    void setCharSequence(int32_t, const ::java::lang::String&, const ::java::lang::CharSequence&) const;
    void setUri(int32_t, const ::java::lang::String&, const ::android::net::Uri&) const;
    void setBitmap(int32_t, const ::java::lang::String&, const ::android::graphics::Bitmap&) const;
    void setBundle(int32_t, const ::java::lang::String&, const ::android::os::Bundle&) const;
    void setIntent(int32_t, const ::java::lang::String&, const ::android::content::Intent&) const;
    void setContentDescription(int32_t, const ::java::lang::CharSequence&) const;
    ::android::view::View apply(const ::android::content::Context&, const ::android::view::ViewGroup&) const;
    void reapply(const ::android::content::Context&, const ::android::view::View&) const;
    bool onLoadClass(const ::java::lang::Class&) const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}

#include "android.widget.RemoteViews_ActionException.hpp"
#include "android.widget.RemoteViews_RemoteView.hpp"

