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
namespace textservice {
class SpellCheckerSubtype : public virtual ::java::lang::Object,
                            public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpellCheckerSubtype(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpellCheckerSubtype(const ::android::view::textservice::SpellCheckerSubtype& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    SpellCheckerSubtype(::android::view::textservice::SpellCheckerSubtype&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::textservice::SpellCheckerSubtype& operator=(const ::android::view::textservice::SpellCheckerSubtype& x) {obj = x.obj; return *this;}
    ::android::view::textservice::SpellCheckerSubtype& operator=(::android::view::textservice::SpellCheckerSubtype&& x) {obj = std::move(x.obj); return *this;}
    
    SpellCheckerSubtype(int32_t, const ::java::lang::String&, const ::java::lang::String&);
    int32_t getNameResId() const ;
    ::java::lang::String getLocale() const ;
    ::java::lang::String getExtraValue() const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::CharSequence getDisplayName(const ::android::content::Context&, const ::java::lang::String&, const ::android::content::pm::ApplicationInfo&) const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}


