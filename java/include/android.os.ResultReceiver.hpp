#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Handler; } }
namespace android { namespace os { class Parcel; } }

namespace android {
namespace os {
class ResultReceiver : public virtual ::java::lang::Object,
                       public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResultReceiver(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResultReceiver(const ::android::os::ResultReceiver& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ResultReceiver(::android::os::ResultReceiver&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::ResultReceiver& operator=(const ::android::os::ResultReceiver& x) {obj = x.obj; return *this;}
    ::android::os::ResultReceiver& operator=(::android::os::ResultReceiver&& x) {obj = std::move(x.obj); return *this;}
    
    ResultReceiver(const ::android::os::Handler&);
    void send(int32_t, const ::android::os::Bundle&) const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}


