#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Set.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class MapCollections_KeySet : public virtual ::java::lang::Object,
                              public virtual ::java::util::Set {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MapCollections_KeySet(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::Collection(_obj), ::java::util::Set(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MapCollections_KeySet(const ::android::support::v4::util::MapCollections_KeySet& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj;}
    MapCollections_KeySet(::android::support::v4::util::MapCollections_KeySet&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::MapCollections_KeySet& operator=(const ::android::support::v4::util::MapCollections_KeySet& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::MapCollections_KeySet& operator=(::android::support::v4::util::MapCollections_KeySet&& x) {obj = std::move(x.obj); return *this;}
    
    bool addAll(const ::java::util::Collection&) const ;
    void clear() const ;
    bool contains(const ::java::lang::Object&) const ;
    bool containsAll(const ::java::util::Collection&) const ;
    bool isEmpty() const ;
    ::java::util::Iterator iterator() const ;
    bool remove(const ::java::lang::Object&) const ;
    bool removeAll(const ::java::util::Collection&) const ;
    bool retainAll(const ::java::util::Collection&) const ;
    int32_t size() const ;
    std::vector< ::java::lang::Object> toArray() const ;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;

};
}
}
}
}


