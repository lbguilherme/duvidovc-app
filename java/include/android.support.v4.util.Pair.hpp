#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace util { class Pair; } } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class Pair : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pair(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pair(const ::android::support::v4::util::Pair& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Pair(::android::support::v4::util::Pair&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::Pair& operator=(const ::android::support::v4::util::Pair& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::Pair& operator=(::android::support::v4::util::Pair&& x) {obj = std::move(x.obj); return *this;}
    
    Pair(const ::java::lang::Object&, const ::java::lang::Object&);
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    static ::android::support::v4::util::Pair create(const ::java::lang::Object&, const ::java::lang::Object&);

};
}
}
}
}


