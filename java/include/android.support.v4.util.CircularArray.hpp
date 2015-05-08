#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class CircularArray : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CircularArray(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CircularArray(const ::android::support::v4::util::CircularArray& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CircularArray(::android::support::v4::util::CircularArray&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::CircularArray& operator=(const ::android::support::v4::util::CircularArray& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::CircularArray& operator=(::android::support::v4::util::CircularArray&& x) {obj = std::move(x.obj); return *this;}
    
    CircularArray();
    CircularArray(int32_t);
    void addFirst(const ::java::lang::Object&) const ;
    void addLast(const ::java::lang::Object&) const ;
    ::java::lang::Object popFirst() const ;
    ::java::lang::Object popLast() const ;
    ::java::lang::Object getFirst() const ;
    ::java::lang::Object getLast() const ;
    ::java::lang::Object get(int32_t) const ;
    int32_t size() const ;
    bool isEmpty() const ;

};
}
}
}
}


