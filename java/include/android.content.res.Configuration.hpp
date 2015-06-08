#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "java.lang.Comparable.hpp"

namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace res {
class Configuration : public virtual ::java::lang::Object,
                      public virtual ::android::os::Parcelable,
                      public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Configuration(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Configuration(const ::android::content::res::Configuration& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    Configuration(::android::content::res::Configuration&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::Configuration& operator=(const ::android::content::res::Configuration& x) {obj = x.obj; return *this;}
    ::android::content::res::Configuration& operator=(::android::content::res::Configuration&& x) {obj = std::move(x.obj); return *this;}
    
    Configuration();
    bool isLayoutSizeAtLeast(int32_t) const;
    void setTo(const ::android::content::res::Configuration&) const;
    ::java::lang::String toString() const;
    void setToDefaults() const;
    int32_t updateFrom(const ::android::content::res::Configuration&) const;
    int32_t diff(const ::android::content::res::Configuration&) const;
    static bool needNewResources(int32_t, int32_t);
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    void readFromParcel(const ::android::os::Parcel&) const;
    int32_t compareTo(const ::android::content::res::Configuration&) const;
    bool equals(const ::android::content::res::Configuration&) const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}
}


