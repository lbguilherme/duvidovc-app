#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace support { namespace v4 { namespace util { class LongSparseArray; } } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class LongSparseArray : public virtual ::java::lang::Object,
                        public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LongSparseArray(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LongSparseArray(const ::android::support::v4::util::LongSparseArray& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    LongSparseArray(::android::support::v4::util::LongSparseArray&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::LongSparseArray& operator=(const ::android::support::v4::util::LongSparseArray& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::LongSparseArray& operator=(::android::support::v4::util::LongSparseArray&& x) {obj = std::move(x.obj); return *this;}
    
    LongSparseArray();
    LongSparseArray(int32_t);
    ::android::support::v4::util::LongSparseArray clone() const;
    ::java::lang::Object get(int64_t) const;
    ::java::lang::Object get(int64_t, const ::java::lang::Object&) const;
    void delete_(int64_t) const;
    void remove(int64_t) const;
    void removeAt(int32_t) const;
    void put(int64_t, const ::java::lang::Object&) const;
    int32_t size() const;
    int64_t keyAt(int32_t) const;
    ::java::lang::Object valueAt(int32_t) const;
    void setValueAt(int32_t, const ::java::lang::Object&) const;
    int32_t indexOfKey(int64_t) const;
    int32_t indexOfValue(const ::java::lang::Object&) const;
    void clear() const;
    void append(int64_t, const ::java::lang::Object&) const;
    ::java::lang::String toString() const;

};
}
}
}
}


