#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace graphics { class Path; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { class Region; } }
namespace android { namespace graphics { class Region_Op; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Region : public virtual ::java::lang::Object,
               public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Region(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Region(const ::android::graphics::Region& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Region(::android::graphics::Region&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Region& operator=(const ::android::graphics::Region& x) {obj = x.obj; return *this;}
    ::android::graphics::Region& operator=(::android::graphics::Region&& x) {obj = std::move(x.obj); return *this;}
    
    Region();
    Region(const ::android::graphics::Rect&);
    Region(int32_t, int32_t, int32_t, int32_t);
    void setEmpty() const ;
    bool set(const ::android::graphics::Region&) const ;
    bool set(const ::android::graphics::Rect&) const ;
    bool set(int32_t, int32_t, int32_t, int32_t) const ;
    bool setPath(const ::android::graphics::Path&, const ::android::graphics::Region&) const ;
    bool isEmpty() const ;
    bool isRect() const ;
    bool isComplex() const ;
    ::android::graphics::Rect getBounds() const ;
    bool getBounds(const ::android::graphics::Rect&) const ;
    ::android::graphics::Path getBoundaryPath() const ;
    bool getBoundaryPath(const ::android::graphics::Path&) const ;
    bool contains(int32_t, int32_t) const ;
    bool quickContains(const ::android::graphics::Rect&) const ;
    bool quickContains(int32_t, int32_t, int32_t, int32_t) const ;
    bool quickReject(const ::android::graphics::Rect&) const ;
    bool quickReject(int32_t, int32_t, int32_t, int32_t) const ;
    bool quickReject(const ::android::graphics::Region&) const ;
    void translate(int32_t, int32_t) const ;
    void translate(int32_t, int32_t, const ::android::graphics::Region&) const ;
    bool union_(const ::android::graphics::Rect&) const ;
    bool op(const ::android::graphics::Rect&, const ::android::graphics::Region_Op&) const ;
    bool op(int32_t, int32_t, int32_t, int32_t, const ::android::graphics::Region_Op&) const ;
    bool op(const ::android::graphics::Region&, const ::android::graphics::Region_Op&) const ;
    bool op(const ::android::graphics::Rect&, const ::android::graphics::Region&, const ::android::graphics::Region_Op&) const ;
    bool op(const ::android::graphics::Region&, const ::android::graphics::Region&, const ::android::graphics::Region_Op&) const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    bool equals(const ::java::lang::Object&) const ;

};
}
}

#include "android.graphics.Region_Op.hpp"

