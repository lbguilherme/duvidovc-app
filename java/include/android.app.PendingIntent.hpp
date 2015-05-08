#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace app { class PendingIntent_OnFinished; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { class IntentSender; } }
namespace android { namespace os { class Handler; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class PendingIntent : public virtual ::java::lang::Object,
                      public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PendingIntent(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PendingIntent(const ::android::app::PendingIntent& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    PendingIntent(::android::app::PendingIntent&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::PendingIntent& operator=(const ::android::app::PendingIntent& x) {obj = x.obj; return *this;}
    ::android::app::PendingIntent& operator=(::android::app::PendingIntent&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::app::PendingIntent getActivity(const ::android::content::Context&, int32_t, const ::android::content::Intent&, int32_t);
    static ::android::app::PendingIntent getActivities(const ::android::content::Context&, int32_t, const std::vector< ::android::content::Intent>&, int32_t);
    static ::android::app::PendingIntent getBroadcast(const ::android::content::Context&, int32_t, const ::android::content::Intent&, int32_t);
    static ::android::app::PendingIntent getService(const ::android::content::Context&, int32_t, const ::android::content::Intent&, int32_t);
    ::android::content::IntentSender getIntentSender() const ;
    void cancel() const ;
    void send() const ;
    void send(int32_t) const ;
    void send(const ::android::content::Context&, int32_t, const ::android::content::Intent&) const ;
    void send(int32_t, const ::android::app::PendingIntent_OnFinished&, const ::android::os::Handler&) const ;
    void send(const ::android::content::Context&, int32_t, const ::android::content::Intent&, const ::android::app::PendingIntent_OnFinished&, const ::android::os::Handler&) const ;
    void send(const ::android::content::Context&, int32_t, const ::android::content::Intent&, const ::android::app::PendingIntent_OnFinished&, const ::android::os::Handler&, const ::java::lang::String&) const ;
    ::java::lang::String getTargetPackage() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    static void writePendingIntentOrNullToParcel(const ::android::app::PendingIntent&, const ::android::os::Parcel&);
    static ::android::app::PendingIntent readPendingIntentOrNullFromParcel(const ::android::os::Parcel&);

};
}
}

#include "android.app.PendingIntent_CanceledException.hpp"
#include "android.app.PendingIntent_OnFinished.hpp"

