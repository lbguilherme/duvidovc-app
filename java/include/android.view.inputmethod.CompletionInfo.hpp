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
class CompletionInfo : public virtual ::java::lang::Object,
                       public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CompletionInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CompletionInfo(const ::android::view::inputmethod::CompletionInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    CompletionInfo(::android::view::inputmethod::CompletionInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::CompletionInfo& operator=(const ::android::view::inputmethod::CompletionInfo& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::CompletionInfo& operator=(::android::view::inputmethod::CompletionInfo&& x) {obj = std::move(x.obj); return *this;}
    
    CompletionInfo(int64_t, int32_t, const ::java::lang::CharSequence&);
    CompletionInfo(int64_t, int32_t, const ::java::lang::CharSequence&, const ::java::lang::CharSequence&);
    int64_t getId() const ;
    int32_t getPosition() const ;
    ::java::lang::CharSequence getText() const ;
    ::java::lang::CharSequence getLabel() const ;
    ::java::lang::String toString() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t describeContents() const ;

};
}
}
}


