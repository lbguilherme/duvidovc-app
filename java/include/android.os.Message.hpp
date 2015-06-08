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
namespace android { namespace os { class Message; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class Message : public virtual ::java::lang::Object,
                public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Message(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Message(const ::android::os::Message& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Message(::android::os::Message&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Message& operator=(const ::android::os::Message& x) {obj = x.obj; return *this;}
    ::android::os::Message& operator=(::android::os::Message&& x) {obj = std::move(x.obj); return *this;}
    
    Message();
    static ::android::os::Message obtain();
    static ::android::os::Message obtain(const ::android::os::Message&);
    static ::android::os::Message obtain(const ::android::os::Handler&);
    static ::android::os::Message obtain(const ::android::os::Handler&, const ::java::lang::Runnable&);
    static ::android::os::Message obtain(const ::android::os::Handler&, int32_t);
    static ::android::os::Message obtain(const ::android::os::Handler&, int32_t, const ::java::lang::Object&);
    static ::android::os::Message obtain(const ::android::os::Handler&, int32_t, int32_t, int32_t);
    static ::android::os::Message obtain(const ::android::os::Handler&, int32_t, int32_t, int32_t, const ::java::lang::Object&);
    void recycle() const;
    void copyFrom(const ::android::os::Message&) const;
    int64_t getWhen() const;
    void setTarget(const ::android::os::Handler&) const;
    ::android::os::Handler getTarget() const;
    ::java::lang::Runnable getCallback() const;
    ::android::os::Bundle getData() const;
    ::android::os::Bundle peekData() const;
    void setData(const ::android::os::Bundle&) const;
    void sendToTarget() const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}


