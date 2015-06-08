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
namespace util {
class CircularIntArray : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CircularIntArray(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CircularIntArray(const ::android::support::v4::util::CircularIntArray& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CircularIntArray(::android::support::v4::util::CircularIntArray&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::CircularIntArray& operator=(const ::android::support::v4::util::CircularIntArray& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::CircularIntArray& operator=(::android::support::v4::util::CircularIntArray&& x) {obj = std::move(x.obj); return *this;}
    
    CircularIntArray();
    CircularIntArray(int32_t);
    void addFirst(int32_t) const;
    void addLast(int32_t) const;
    int32_t popFirst() const;
    int32_t popLast() const;
    void clear() const;
    void removeFromStart(int32_t) const;
    void removeFromEnd(int32_t) const;
    int32_t getFirst() const;
    int32_t getLast() const;
    int32_t get(int32_t) const;
    int32_t size() const;
    bool isEmpty() const;

};
}
}
}
}


