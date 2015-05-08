#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class Context; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class Notification : public virtual ::java::lang::Object,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Notification(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Notification(const ::android::app::Notification& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Notification(::android::app::Notification&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Notification& operator=(const ::android::app::Notification& x) {obj = x.obj; return *this;}
    ::android::app::Notification& operator=(::android::app::Notification&& x) {obj = std::move(x.obj); return *this;}
    
    Notification();
    Notification(int32_t, const ::java::lang::CharSequence&, int64_t);
    Notification(const ::android::os::Parcel&);
    ::android::app::Notification clone() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void setLatestEventInfo(const ::android::content::Context&, const ::java::lang::CharSequence&, const ::java::lang::CharSequence&, const ::android::app::PendingIntent&) const ;
    ::java::lang::String toString() const ;

};
}
}

#include "android.app.Notification_Builder.hpp"

