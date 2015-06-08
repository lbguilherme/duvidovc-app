#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Handler; } }
namespace android { namespace os { class IBinder; } }
namespace android { namespace os { class Message; } }
namespace android { namespace os { class Messenger; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace os {
class Messenger : public virtual ::java::lang::Object,
                  public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Messenger(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Messenger(const ::android::os::Messenger& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Messenger(::android::os::Messenger&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Messenger& operator=(const ::android::os::Messenger& x) {obj = x.obj; return *this;}
    ::android::os::Messenger& operator=(::android::os::Messenger&& x) {obj = std::move(x.obj); return *this;}
    
    Messenger(const ::android::os::Handler&);
    Messenger(const ::android::os::IBinder&);
    void send(const ::android::os::Message&) const;
    ::android::os::IBinder getBinder() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    static void writeMessengerOrNullToParcel(const ::android::os::Messenger&, const ::android::os::Parcel&);
    static ::android::os::Messenger readMessengerOrNullFromParcel(const ::android::os::Parcel&);

};
}
}


