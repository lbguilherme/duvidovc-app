#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace pm { class ApplicationInfo; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
namespace inputmethod {
class InputMethodSubtype : public virtual ::java::lang::Object,
                           public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputMethodSubtype(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputMethodSubtype(const ::android::view::inputmethod::InputMethodSubtype& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    InputMethodSubtype(::android::view::inputmethod::InputMethodSubtype&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::InputMethodSubtype& operator=(const ::android::view::inputmethod::InputMethodSubtype& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::InputMethodSubtype& operator=(::android::view::inputmethod::InputMethodSubtype&& x) {obj = std::move(x.obj); return *this;}
    
    InputMethodSubtype(int32_t, int32_t, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, bool, bool);
    int32_t getNameResId() const;
    int32_t getIconResId() const;
    ::java::lang::String getLocale() const;
    ::java::lang::String getMode() const;
    ::java::lang::String getExtraValue() const;
    bool isAuxiliary() const;
    bool overridesImplicitlyEnabledSubtype() const;
    ::java::lang::CharSequence getDisplayName(const ::android::content::Context&, const ::java::lang::String&, const ::android::content::pm::ApplicationInfo&) const;
    bool containsExtraValueKey(const ::java::lang::String&) const;
    ::java::lang::String getExtraValueOf(const ::java::lang::String&) const;
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}


