#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace support { namespace v4 { namespace util { class SparseArrayCompat; } } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class SparseArrayCompat : public virtual ::java::lang::Object,
                          public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SparseArrayCompat(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SparseArrayCompat(const ::android::support::v4::util::SparseArrayCompat& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    SparseArrayCompat(::android::support::v4::util::SparseArrayCompat&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::SparseArrayCompat& operator=(const ::android::support::v4::util::SparseArrayCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::SparseArrayCompat& operator=(::android::support::v4::util::SparseArrayCompat&& x) {obj = std::move(x.obj); return *this;}
    
    SparseArrayCompat();
    SparseArrayCompat(int32_t);
    ::android::support::v4::util::SparseArrayCompat clone() const;
    ::java::lang::Object get(int32_t) const;
    ::java::lang::Object get(int32_t, const ::java::lang::Object&) const;
    void delete_(int32_t) const;
    void remove(int32_t) const;
    void removeAt(int32_t) const;
    void removeAtRange(int32_t, int32_t) const;
    void put(int32_t, const ::java::lang::Object&) const;
    int32_t size() const;
    int32_t keyAt(int32_t) const;
    ::java::lang::Object valueAt(int32_t) const;
    void setValueAt(int32_t, const ::java::lang::Object&) const;
    int32_t indexOfKey(int32_t) const;
    int32_t indexOfValue(const ::java::lang::Object&) const;
    void clear() const;
    void append(int32_t, const ::java::lang::Object&) const;
    ::java::lang::String toString() const;

};
}
}
}
}


