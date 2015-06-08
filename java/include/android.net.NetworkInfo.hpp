#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace net { class NetworkInfo_DetailedState; } }
namespace android { namespace net { class NetworkInfo_State; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
class NetworkInfo : public virtual ::java::lang::Object,
                    public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NetworkInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NetworkInfo(const ::android::net::NetworkInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    NetworkInfo(::android::net::NetworkInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::NetworkInfo& operator=(const ::android::net::NetworkInfo& x) {obj = x.obj; return *this;}
    ::android::net::NetworkInfo& operator=(::android::net::NetworkInfo&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getType() const;
    int32_t getSubtype() const;
    ::java::lang::String getTypeName() const;
    ::java::lang::String getSubtypeName() const;
    bool isConnectedOrConnecting() const;
    bool isConnected() const;
    bool isAvailable() const;
    bool isFailover() const;
    bool isRoaming() const;
    ::android::net::NetworkInfo_State getState() const;
    ::android::net::NetworkInfo_DetailedState getDetailedState() const;
    ::java::lang::String getReason() const;
    ::java::lang::String getExtraInfo() const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}

#include "android.net.NetworkInfo_DetailedState.hpp"
#include "android.net.NetworkInfo_State.hpp"

