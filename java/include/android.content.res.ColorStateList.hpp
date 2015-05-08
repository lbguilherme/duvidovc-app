#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { namespace res { class ColorStateList; } } }
namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace content {
namespace res {
class ColorStateList : public virtual ::java::lang::Object,
                       public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ColorStateList(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ColorStateList(const ::android::content::res::ColorStateList& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ColorStateList(::android::content::res::ColorStateList&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::ColorStateList& operator=(const ::android::content::res::ColorStateList& x) {obj = x.obj; return *this;}
    ::android::content::res::ColorStateList& operator=(::android::content::res::ColorStateList&& x) {obj = std::move(x.obj); return *this;}
    
    ColorStateList(const std::vector< int32_t>&, const std::vector< int32_t>&);
    static ::android::content::res::ColorStateList valueOf(int32_t);
    static ::android::content::res::ColorStateList createFromXml(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&);
    ::android::content::res::ColorStateList withAlpha(int32_t) const ;
    bool isStateful() const ;
    int32_t getColorForState(const std::vector< int32_t>&, int32_t) const ;
    int32_t getDefaultColor() const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}


