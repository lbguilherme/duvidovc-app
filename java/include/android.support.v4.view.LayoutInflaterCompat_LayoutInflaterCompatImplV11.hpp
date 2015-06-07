#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.LayoutInflaterCompat_LayoutInflaterCompatImplBase.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class LayoutInflaterCompat_LayoutInflaterCompatImplV11 : public virtual ::java::lang::Object,
                                                         public virtual ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutInflaterCompat_LayoutInflaterCompatImplV11(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl(_obj), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutInflaterCompat_LayoutInflaterCompatImplV11(const ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV11& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl((jobject)0), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplBase((jobject)0) {obj = x.obj;}
    LayoutInflaterCompat_LayoutInflaterCompatImplV11(::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV11&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl((jobject)0), ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV11& operator=(const ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV11& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV11& operator=(::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImplV11&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


