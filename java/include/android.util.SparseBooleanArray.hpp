#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace util { class SparseBooleanArray; } }

namespace android {
namespace util {
class SparseBooleanArray : public virtual ::java::lang::Object,
                           public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SparseBooleanArray(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SparseBooleanArray(const ::android::util::SparseBooleanArray& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    SparseBooleanArray(::android::util::SparseBooleanArray&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::SparseBooleanArray& operator=(const ::android::util::SparseBooleanArray& x) {obj = x.obj; return *this;}
    ::android::util::SparseBooleanArray& operator=(::android::util::SparseBooleanArray&& x) {obj = std::move(x.obj); return *this;}
    
    SparseBooleanArray();
    SparseBooleanArray(int32_t);
    ::android::util::SparseBooleanArray clone() const;
    bool get(int32_t) const;
    bool get(int32_t, bool) const;
    void delete_(int32_t) const;
    void put(int32_t, bool) const;
    int32_t size() const;
    int32_t keyAt(int32_t) const;
    bool valueAt(int32_t) const;
    int32_t indexOfKey(int32_t) const;
    int32_t indexOfValue(bool) const;
    void clear() const;
    void append(int32_t, bool) const;

};
}
}


