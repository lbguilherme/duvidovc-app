#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent_ShortcutIconResource; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class Intent_ShortcutIconResource : public virtual ::java::lang::Object,
                                    public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Intent_ShortcutIconResource(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Intent_ShortcutIconResource(const ::android::content::Intent_ShortcutIconResource& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Intent_ShortcutIconResource(::android::content::Intent_ShortcutIconResource&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::Intent_ShortcutIconResource& operator=(const ::android::content::Intent_ShortcutIconResource& x) {obj = x.obj; return *this;}
    ::android::content::Intent_ShortcutIconResource& operator=(::android::content::Intent_ShortcutIconResource&& x) {obj = std::move(x.obj); return *this;}
    
    Intent_ShortcutIconResource();
    static ::android::content::Intent_ShortcutIconResource fromContext(const ::android::content::Context&, int32_t);
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    ::java::lang::String toString() const ;

};
}
}


