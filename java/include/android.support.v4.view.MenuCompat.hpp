#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class MenuItem; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class MenuCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MenuCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MenuCompat(const ::android::support::v4::view::MenuCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MenuCompat(::android::support::v4::view::MenuCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::MenuCompat& operator=(const ::android::support::v4::view::MenuCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::MenuCompat& operator=(::android::support::v4::view::MenuCompat&& x) {obj = std::move(x.obj); return *this;}
    
    MenuCompat();
    static void setShowAsAction(const ::android::view::MenuItem&, int32_t);

};
}
}
}
}


