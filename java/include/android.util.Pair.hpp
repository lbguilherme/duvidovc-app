#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace util { class Pair; } }
namespace java { namespace lang { class Object; } }

namespace android {
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
    Pair(const ::android::util::Pair& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Pair(::android::util::Pair&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::Pair& operator=(const ::android::util::Pair& x) {obj = x.obj; return *this;}
    ::android::util::Pair& operator=(::android::util::Pair&& x) {obj = std::move(x.obj); return *this;}
    
    Pair(const ::java::lang::Object&, const ::java::lang::Object&);
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    static ::android::util::Pair create(const ::java::lang::Object&, const ::java::lang::Object&);

};
}
}


