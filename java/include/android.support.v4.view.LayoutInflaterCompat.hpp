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
class LayoutInflaterCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutInflaterCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutInflaterCompat(const ::android::support::v4::view::LayoutInflaterCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LayoutInflaterCompat(::android::support::v4::view::LayoutInflaterCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::LayoutInflaterCompat& operator=(const ::android::support::v4::view::LayoutInflaterCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::LayoutInflaterCompat& operator=(::android::support::v4::view::LayoutInflaterCompat&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}

#include "android.support.v4.view.LayoutInflaterCompat_LayoutInflaterCompatImpl.hpp"
#include "android.support.v4.view.LayoutInflaterCompat_LayoutInflaterCompatImplBase.hpp"
#include "android.support.v4.view.LayoutInflaterCompat_LayoutInflaterCompatImplV11.hpp"
#include "android.support.v4.view.LayoutInflaterCompat_LayoutInflaterCompatImplV21.hpp"

