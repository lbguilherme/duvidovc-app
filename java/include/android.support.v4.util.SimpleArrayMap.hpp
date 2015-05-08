#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace util { class SimpleArrayMap; } } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class SimpleArrayMap : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SimpleArrayMap(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SimpleArrayMap(const ::android::support::v4::util::SimpleArrayMap& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SimpleArrayMap(::android::support::v4::util::SimpleArrayMap&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::SimpleArrayMap& operator=(const ::android::support::v4::util::SimpleArrayMap& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::SimpleArrayMap& operator=(::android::support::v4::util::SimpleArrayMap&& x) {obj = std::move(x.obj); return *this;}
    
    SimpleArrayMap();
    SimpleArrayMap(int32_t);
    void clear() const ;
    void ensureCapacity(int32_t) const ;
    bool containsKey(const ::java::lang::Object&) const ;
    int32_t indexOfKey(const ::java::lang::Object&) const ;
    bool containsValue(const ::java::lang::Object&) const ;
    ::java::lang::Object get(const ::java::lang::Object&) const ;
    ::java::lang::Object keyAt(int32_t) const ;
    ::java::lang::Object valueAt(int32_t) const ;
    ::java::lang::Object setValueAt(int32_t, const ::java::lang::Object&) const ;
    bool isEmpty() const ;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    void putAll(const ::android::support::v4::util::SimpleArrayMap&) const ;
    ::java::lang::Object remove(const ::java::lang::Object&) const ;
    ::java::lang::Object removeAt(int32_t) const ;
    int32_t size() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;

};
}
}
}
}


