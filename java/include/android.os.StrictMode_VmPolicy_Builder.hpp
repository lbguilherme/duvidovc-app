#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class StrictMode_VmPolicy; } }
namespace android { namespace os { class StrictMode_VmPolicy_Builder; } }
namespace java { namespace lang { class Class; } }

namespace android {
namespace os {
class StrictMode_VmPolicy_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StrictMode_VmPolicy_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StrictMode_VmPolicy_Builder(const ::android::os::StrictMode_VmPolicy_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StrictMode_VmPolicy_Builder(::android::os::StrictMode_VmPolicy_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::StrictMode_VmPolicy_Builder& operator=(const ::android::os::StrictMode_VmPolicy_Builder& x) {obj = x.obj; return *this;}
    ::android::os::StrictMode_VmPolicy_Builder& operator=(::android::os::StrictMode_VmPolicy_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    StrictMode_VmPolicy_Builder();
    StrictMode_VmPolicy_Builder(const ::android::os::StrictMode_VmPolicy&);
    ::android::os::StrictMode_VmPolicy_Builder setClassInstanceLimit(const ::java::lang::Class&, int32_t) const;
    ::android::os::StrictMode_VmPolicy_Builder detectActivityLeaks() const;
    ::android::os::StrictMode_VmPolicy_Builder detectAll() const;
    ::android::os::StrictMode_VmPolicy_Builder detectLeakedSqlLiteObjects() const;
    ::android::os::StrictMode_VmPolicy_Builder detectLeakedClosableObjects() const;
    ::android::os::StrictMode_VmPolicy_Builder penaltyDeath() const;
    ::android::os::StrictMode_VmPolicy_Builder penaltyLog() const;
    ::android::os::StrictMode_VmPolicy_Builder penaltyDropBox() const;
    ::android::os::StrictMode_VmPolicy build() const;

};
}
}


