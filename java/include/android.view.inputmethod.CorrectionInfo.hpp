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
namespace view {
namespace inputmethod {
class CorrectionInfo : public virtual ::java::lang::Object,
                       public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CorrectionInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CorrectionInfo(const ::android::view::inputmethod::CorrectionInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    CorrectionInfo(::android::view::inputmethod::CorrectionInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::CorrectionInfo& operator=(const ::android::view::inputmethod::CorrectionInfo& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::CorrectionInfo& operator=(::android::view::inputmethod::CorrectionInfo&& x) {obj = std::move(x.obj); return *this;}
    
    CorrectionInfo(int32_t, const ::java::lang::CharSequence&, const ::java::lang::CharSequence&);
    int32_t getOffset() const;
    ::java::lang::CharSequence getOldText() const;
    ::java::lang::CharSequence getNewText() const;
    ::java::lang::String toString() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t describeContents() const;

};
}
}
}


