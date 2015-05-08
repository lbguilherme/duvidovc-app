#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace util { class SparseIntArray; } }

namespace android {
namespace util {
class SparseIntArray : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SparseIntArray(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SparseIntArray(const ::android::util::SparseIntArray& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    SparseIntArray(::android::util::SparseIntArray&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::SparseIntArray& operator=(const ::android::util::SparseIntArray& x) {obj = x.obj; return *this;}
    ::android::util::SparseIntArray& operator=(::android::util::SparseIntArray&& x) {obj = std::move(x.obj); return *this;}
    
    SparseIntArray();
    SparseIntArray(int32_t);
    ::android::util::SparseIntArray clone() const ;
    int32_t get(int32_t) const ;
    int32_t get(int32_t, int32_t) const ;
    void delete_(int32_t) const ;
    void removeAt(int32_t) const ;
    void put(int32_t, int32_t) const ;
    int32_t size() const ;
    int32_t keyAt(int32_t) const ;
    int32_t valueAt(int32_t) const ;
    int32_t indexOfKey(int32_t) const ;
    int32_t indexOfValue(int32_t) const ;
    void clear() const ;
    void append(int32_t, int32_t) const ;

};
}
}


