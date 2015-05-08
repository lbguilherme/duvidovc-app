#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace util { class SparseArray; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace util {
class SparseArray : public virtual ::java::lang::Object,
                    public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SparseArray(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SparseArray(const ::android::util::SparseArray& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    SparseArray(::android::util::SparseArray&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::SparseArray& operator=(const ::android::util::SparseArray& x) {obj = x.obj; return *this;}
    ::android::util::SparseArray& operator=(::android::util::SparseArray&& x) {obj = std::move(x.obj); return *this;}
    
    SparseArray();
    SparseArray(int32_t);
    ::android::util::SparseArray clone() const ;
    ::java::lang::Object get(int32_t) const ;
    ::java::lang::Object get(int32_t, const ::java::lang::Object&) const ;
    void delete_(int32_t) const ;
    void remove(int32_t) const ;
    void removeAt(int32_t) const ;
    void put(int32_t, const ::java::lang::Object&) const ;
    int32_t size() const ;
    int32_t keyAt(int32_t) const ;
    ::java::lang::Object valueAt(int32_t) const ;
    void setValueAt(int32_t, const ::java::lang::Object&) const ;
    int32_t indexOfKey(int32_t) const ;
    int32_t indexOfValue(const ::java::lang::Object&) const ;
    void clear() const ;
    void append(int32_t, const ::java::lang::Object&) const ;

};
}
}


