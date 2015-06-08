#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace preference {
class PreferenceActivity_Header : public virtual ::java::lang::Object,
                                  public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceActivity_Header(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceActivity_Header(const ::android::preference::PreferenceActivity_Header& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    PreferenceActivity_Header(::android::preference::PreferenceActivity_Header&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::PreferenceActivity_Header& operator=(const ::android::preference::PreferenceActivity_Header& x) {obj = x.obj; return *this;}
    ::android::preference::PreferenceActivity_Header& operator=(::android::preference::PreferenceActivity_Header&& x) {obj = std::move(x.obj); return *this;}
    
    PreferenceActivity_Header();
    ::java::lang::CharSequence getTitle(const ::android::content::res::Resources&) const;
    ::java::lang::CharSequence getSummary(const ::android::content::res::Resources&) const;
    ::java::lang::CharSequence getBreadCrumbTitle(const ::android::content::res::Resources&) const;
    ::java::lang::CharSequence getBreadCrumbShortTitle(const ::android::content::res::Resources&) const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    void readFromParcel(const ::android::os::Parcel&) const;

};
}
}


