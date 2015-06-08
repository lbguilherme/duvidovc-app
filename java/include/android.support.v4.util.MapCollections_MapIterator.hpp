#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.Map_Entry.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map_Entry; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class MapCollections_MapIterator : public virtual ::java::lang::Object,
                                   public virtual ::java::util::Iterator,
                                   public virtual ::java::util::Map_Entry {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MapCollections_MapIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Iterator(_obj), ::java::util::Map_Entry(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MapCollections_MapIterator(const ::android::support::v4::util::MapCollections_MapIterator& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::java::util::Map_Entry((jobject)0) {obj = x.obj;}
    MapCollections_MapIterator(::android::support::v4::util::MapCollections_MapIterator&& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::java::util::Map_Entry((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::MapCollections_MapIterator& operator=(const ::android::support::v4::util::MapCollections_MapIterator& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::MapCollections_MapIterator& operator=(::android::support::v4::util::MapCollections_MapIterator&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasNext() const;
    ::java::util::Map_Entry next() const;
    void remove() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;

};
}
}
}
}


