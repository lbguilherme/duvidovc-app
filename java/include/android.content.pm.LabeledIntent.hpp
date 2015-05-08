#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.Intent.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace pm {
class LabeledIntent : public virtual ::java::lang::Object,
                      public virtual ::android::content::Intent {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LabeledIntent(jobject _obj) : ::java::lang::Object(_obj), ::android::content::Intent(_obj), ::android::os::Parcelable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LabeledIntent(const ::android::content::pm::LabeledIntent& x) : ::java::lang::Object((jobject)0), ::android::content::Intent((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    LabeledIntent(::android::content::pm::LabeledIntent&& x) : ::java::lang::Object((jobject)0), ::android::content::Intent((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::LabeledIntent& operator=(const ::android::content::pm::LabeledIntent& x) {obj = x.obj; return *this;}
    ::android::content::pm::LabeledIntent& operator=(::android::content::pm::LabeledIntent&& x) {obj = std::move(x.obj); return *this;}
    
    LabeledIntent(const ::android::content::Intent&, const ::java::lang::String&, int32_t, int32_t);
    LabeledIntent(const ::android::content::Intent&, const ::java::lang::String&, const ::java::lang::CharSequence&, int32_t);
    LabeledIntent(const ::java::lang::String&, int32_t, int32_t);
    LabeledIntent(const ::java::lang::String&, const ::java::lang::CharSequence&, int32_t);
    ::java::lang::String getSourcePackage() const ;
    int32_t getLabelResource() const ;
    ::java::lang::CharSequence getNonLocalizedLabel() const ;
    int32_t getIconResource() const ;
    ::java::lang::CharSequence loadLabel(const ::android::content::pm::PackageManager&) const ;
    ::android::graphics::drawable::Drawable loadIcon(const ::android::content::pm::PackageManager&) const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void readFromParcel(const ::android::os::Parcel&) const ;

};
}
}
}


