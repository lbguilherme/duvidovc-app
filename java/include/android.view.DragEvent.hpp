#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class ClipData; } }
namespace android { namespace content { class ClipDescription; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class DragEvent : public virtual ::java::lang::Object,
                  public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DragEvent(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DragEvent(const ::android::view::DragEvent& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    DragEvent(::android::view::DragEvent&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::DragEvent& operator=(const ::android::view::DragEvent& x) {obj = x.obj; return *this;}
    ::android::view::DragEvent& operator=(::android::view::DragEvent&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getAction() const ;
    float getX() const ;
    float getY() const ;
    ::android::content::ClipData getClipData() const ;
    ::android::content::ClipDescription getClipDescription() const ;
    ::java::lang::Object getLocalState() const ;
    bool getResult() const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}


