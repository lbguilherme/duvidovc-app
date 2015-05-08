#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class MapCollections : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MapCollections(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MapCollections(const ::android::support::v4::util::MapCollections& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MapCollections(::android::support::v4::util::MapCollections&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::MapCollections& operator=(const ::android::support::v4::util::MapCollections& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::MapCollections& operator=(::android::support::v4::util::MapCollections&& x) {obj = std::move(x.obj); return *this;}
    
    static bool containsAllHelper(const ::java::util::Map&, const ::java::util::Collection&);
    static bool removeAllHelper(const ::java::util::Map&, const ::java::util::Collection&);
    static bool retainAllHelper(const ::java::util::Map&, const ::java::util::Collection&);
    std::vector< ::java::lang::Object> toArrayHelper(int32_t) const ;
    std::vector< ::java::lang::Object> toArrayHelper(const std::vector< ::java::lang::Object>&, int32_t) const ;
    static bool equalsSetHelper(const ::java::util::Set&, const ::java::lang::Object&);
    ::java::util::Set getEntrySet() const ;
    ::java::util::Set getKeySet() const ;
    ::java::util::Collection getValues() const ;

};
}
}
}
}

#include "android.support.v4.util.MapCollections_ArrayIterator.hpp"
#include "android.support.v4.util.MapCollections_EntrySet.hpp"
#include "android.support.v4.util.MapCollections_KeySet.hpp"
#include "android.support.v4.util.MapCollections_MapIterator.hpp"
#include "android.support.v4.util.MapCollections_ValuesCollection.hpp"

