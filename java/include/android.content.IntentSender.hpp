#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { class IntentSender; } }
namespace android { namespace content { class IntentSender_OnFinished; } }
namespace android { namespace os { class Handler; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class IntentSender : public virtual ::java::lang::Object,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntentSender(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntentSender(const ::android::content::IntentSender& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    IntentSender(::android::content::IntentSender&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::IntentSender& operator=(const ::android::content::IntentSender& x) {obj = x.obj; return *this;}
    ::android::content::IntentSender& operator=(::android::content::IntentSender&& x) {obj = std::move(x.obj); return *this;}
    
    void sendIntent(const ::android::content::Context&, int32_t, const ::android::content::Intent&, const ::android::content::IntentSender_OnFinished&, const ::android::os::Handler&) const;
    void sendIntent(const ::android::content::Context&, int32_t, const ::android::content::Intent&, const ::android::content::IntentSender_OnFinished&, const ::android::os::Handler&, const ::java::lang::String&) const;
    ::java::lang::String getTargetPackage() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    static void writeIntentSenderOrNullToParcel(const ::android::content::IntentSender&, const ::android::os::Parcel&);
    static ::android::content::IntentSender readIntentSenderOrNullFromParcel(const ::android::os::Parcel&);

};
}
}

#include "android.content.IntentSender_OnFinished.hpp"
#include "android.content.IntentSender_SendIntentException.hpp"

