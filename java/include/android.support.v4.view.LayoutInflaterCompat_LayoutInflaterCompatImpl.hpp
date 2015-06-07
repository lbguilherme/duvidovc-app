#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class LayoutInflaterCompat_LayoutInflaterCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutInflaterCompat_LayoutInflaterCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutInflaterCompat_LayoutInflaterCompatImpl(const ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LayoutInflaterCompat_LayoutInflaterCompatImpl(::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl& operator=(const ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl& operator=(::android::support::v4::view::LayoutInflaterCompat_LayoutInflaterCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


