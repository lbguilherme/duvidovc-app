#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Iterator.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class MapCollections_ArrayIterator : public virtual ::java::lang::Object,
                                     public virtual ::java::util::Iterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MapCollections_ArrayIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Iterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MapCollections_ArrayIterator(const ::android::support::v4::util::MapCollections_ArrayIterator& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj;}
    MapCollections_ArrayIterator(::android::support::v4::util::MapCollections_ArrayIterator&& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::MapCollections_ArrayIterator& operator=(const ::android::support::v4::util::MapCollections_ArrayIterator& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::MapCollections_ArrayIterator& operator=(::android::support::v4::util::MapCollections_ArrayIterator&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasNext() const ;
    ::java::lang::Object next() const ;
    void remove() const ;

};
}
}
}
}


