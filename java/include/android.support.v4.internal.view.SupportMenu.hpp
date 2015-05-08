#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.Menu.hpp"


namespace android {
namespace support {
namespace v4 {
namespace internal {
namespace view {
class SupportMenu : public virtual ::java::lang::Object,
                    public virtual ::android::view::Menu {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SupportMenu(jobject _obj) : ::java::lang::Object(_obj), ::android::view::Menu(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SupportMenu(const ::android::support::v4::internal::view::SupportMenu& x) : ::java::lang::Object((jobject)0), ::android::view::Menu((jobject)0) {obj = x.obj;}
    SupportMenu(::android::support::v4::internal::view::SupportMenu&& x) : ::java::lang::Object((jobject)0), ::android::view::Menu((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::internal::view::SupportMenu& operator=(const ::android::support::v4::internal::view::SupportMenu& x) {obj = x.obj; return *this;}
    ::android::support::v4::internal::view::SupportMenu& operator=(::android::support::v4::internal::view::SupportMenu&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}


