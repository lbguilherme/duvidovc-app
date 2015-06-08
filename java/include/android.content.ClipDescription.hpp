#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class ClipDescription : public virtual ::java::lang::Object,
                        public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClipDescription(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClipDescription(const ::android::content::ClipDescription& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ClipDescription(::android::content::ClipDescription&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ClipDescription& operator=(const ::android::content::ClipDescription& x) {obj = x.obj; return *this;}
    ::android::content::ClipDescription& operator=(::android::content::ClipDescription&& x) {obj = std::move(x.obj); return *this;}
    
    ClipDescription(const ::java::lang::CharSequence&, const std::vector< ::java::lang::String>&);
    static bool compareMimeTypes(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::CharSequence getLabel() const;
    bool hasMimeType(const ::java::lang::String&) const;
    std::vector< ::java::lang::String> filterMimeTypes(const ::java::lang::String&) const;
    int32_t getMimeTypeCount() const;
    ::java::lang::String getMimeType(int32_t) const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}


