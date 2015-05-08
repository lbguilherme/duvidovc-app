#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "android.view.ViewGroup_LayoutParams.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace view { class WindowManager_LayoutParams; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class WindowManager_LayoutParams : public virtual ::java::lang::Object,
                                   public virtual ::android::os::Parcelable,
                                   public virtual ::android::view::ViewGroup_LayoutParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WindowManager_LayoutParams(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::view::ViewGroup_LayoutParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WindowManager_LayoutParams(const ::android::view::WindowManager_LayoutParams& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {obj = x.obj;}
    WindowManager_LayoutParams(::android::view::WindowManager_LayoutParams&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::WindowManager_LayoutParams& operator=(const ::android::view::WindowManager_LayoutParams& x) {obj = x.obj; return *this;}
    ::android::view::WindowManager_LayoutParams& operator=(::android::view::WindowManager_LayoutParams&& x) {obj = std::move(x.obj); return *this;}
    
    WindowManager_LayoutParams();
    WindowManager_LayoutParams(int32_t);
    WindowManager_LayoutParams(int32_t, int32_t);
    WindowManager_LayoutParams(int32_t, int32_t, int32_t);
    WindowManager_LayoutParams(int32_t, int32_t, int32_t, int32_t, int32_t);
    WindowManager_LayoutParams(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    WindowManager_LayoutParams(const ::android::os::Parcel&);
    static bool mayUseInputMethod(int32_t);
    void setTitle(const ::java::lang::CharSequence&) const ;
    ::java::lang::CharSequence getTitle() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t copyFrom(const ::android::view::WindowManager_LayoutParams&) const ;
    ::java::lang::String debug(const ::java::lang::String&) const ;
    ::java::lang::String toString() const ;

};
}
}


