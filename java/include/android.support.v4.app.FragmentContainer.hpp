#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class FragmentContainer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentContainer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentContainer(const ::android::support::v4::app::FragmentContainer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FragmentContainer(::android::support::v4::app::FragmentContainer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentContainer& operator=(const ::android::support::v4::app::FragmentContainer& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentContainer& operator=(::android::support::v4::app::FragmentContainer&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View findViewById(int32_t) const;
    bool hasView() const;

};
}
}
}
}


