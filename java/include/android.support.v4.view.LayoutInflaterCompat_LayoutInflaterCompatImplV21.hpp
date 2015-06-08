#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.LayoutInflaterCompat_LayoutInflaterCompatImplV11.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class LayoutInflaterCompat_LayoutInflaterCompatImplV21 : public virtual ::java::lang::Object,
                                                         public virtual ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV11 {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutInflaterCompat_LayoutInflaterCompatImplV21(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl(_obj), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplBase(_obj), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV11(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutInflaterCompat_LayoutInflaterCompatImplV21(const ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV21& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl((jobject)0), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplBase((jobject)0), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV11((jobject)0) {obj = x.obj;}
    LayoutInflaterCompat_LayoutInflaterCompatImplV21(::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV21&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl((jobject)0), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplBase((jobject)0), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV11((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV21& operator=(const ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV21& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV21& operator=(::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV21&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}

