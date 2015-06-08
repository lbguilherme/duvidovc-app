#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable_Creator.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace os {
class Parcelable_ClassLoaderCreator : public virtual ::java::lang::Object,
                                      public virtual ::android::os::Parcelable_Creator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Parcelable_ClassLoaderCreator(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable_Creator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Parcelable_ClassLoaderCreator(const ::android::os::Parcelable_ClassLoaderCreator& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable_Creator((jobject)0) {obj = x.obj;}
    Parcelable_ClassLoaderCreator(::android::os::Parcelable_ClassLoaderCreator&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable_Creator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Parcelable_ClassLoaderCreator& operator=(const ::android::os::Parcelable_ClassLoaderCreator& x) {obj = x.obj; return *this;}
    ::android::os::Parcelable_ClassLoaderCreator& operator=(::android::os::Parcelable_ClassLoaderCreator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object createFromParcel(const ::android::os::Parcel&, const ::java::lang::ClassLoader&) const;

};
}
}


