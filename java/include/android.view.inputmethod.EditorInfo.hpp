#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "android.text.InputType.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace util { class Printer; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
namespace inputmethod {
class EditorInfo : public virtual ::java::lang::Object,
                   public virtual ::android::os::Parcelable,
                   public virtual ::android::text::InputType {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EditorInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::text::InputType(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EditorInfo(const ::android::view::inputmethod::EditorInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::InputType((jobject)0) {obj = x.obj;}
    EditorInfo(::android::view::inputmethod::EditorInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::InputType((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::EditorInfo& operator=(const ::android::view::inputmethod::EditorInfo& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::EditorInfo& operator=(::android::view::inputmethod::EditorInfo&& x) {obj = std::move(x.obj); return *this;}
    
    EditorInfo();
    void makeCompatible(int32_t) const;
    void dump(const ::android::util::Printer&, const ::java::lang::String&) const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t describeContents() const;

};
}
}
}


