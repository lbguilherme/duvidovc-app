#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.lang.Comparable.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class ComponentName : public virtual ::java::lang::Object,
                      public virtual ::android::os::Parcelable,
                      public virtual ::java::lang::Cloneable,
                      public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ComponentName(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ComponentName(const ::android::content::ComponentName& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    ComponentName(::android::content::ComponentName&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ComponentName& operator=(const ::android::content::ComponentName& x) {obj = x.obj; return *this;}
    ::android::content::ComponentName& operator=(::android::content::ComponentName&& x) {obj = std::move(x.obj); return *this;}
    
    ComponentName(const ::java::lang::String&, const ::java::lang::String&);
    ComponentName(const ::android::content::Context&, const ::java::lang::String&);
    ComponentName(const ::android::content::Context&, const ::java::lang::Class&);
    ComponentName(const ::android::os::Parcel&);
    ::android::content::ComponentName clone() const;
    ::java::lang::String getPackageName() const;
    ::java::lang::String getClassName() const;
    ::java::lang::String getShortClassName() const;
    ::java::lang::String flattenToString() const;
    ::java::lang::String flattenToShortString() const;
    static ::android::content::ComponentName unflattenFromString(const ::java::lang::String&);
    ::java::lang::String toShortString() const;
    ::java::lang::String toString() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    int32_t compareTo(const ::android::content::ComponentName&) const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    static void writeToParcel(const ::android::content::ComponentName&, const ::android::os::Parcel&);
    static ::android::content::ComponentName readFromParcel(const ::android::os::Parcel&);
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}


