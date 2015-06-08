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
namespace view {
namespace textservice {
class TextInfo : public virtual ::java::lang::Object,
                 public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextInfo(const ::android::view::textservice::TextInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    TextInfo(::android::view::textservice::TextInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::textservice::TextInfo& operator=(const ::android::view::textservice::TextInfo& x) {obj = x.obj; return *this;}
    ::android::view::textservice::TextInfo& operator=(::android::view::textservice::TextInfo&& x) {obj = std::move(x.obj); return *this;}
    
    TextInfo(const ::java::lang::String&);
    TextInfo(const ::java::lang::String&, int32_t, int32_t);
    TextInfo(const ::android::os::Parcel&);
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    ::java::lang::String getText() const;
    int32_t getCookie() const;
    int32_t getSequence() const;
    int32_t describeContents() const;

};
}
}
}


