#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.util.SimpleArrayMap.hpp"
#include "java.util.Map.hpp"

namespace android { namespace support { namespace v4 { namespace util { class SimpleArrayMap; } } } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class ArrayMap : public virtual ::java::lang::Object,
                 public virtual ::android::support::v4::util::SimpleArrayMap,
                 public virtual ::java::util::Map {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ArrayMap(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::util::SimpleArrayMap(_obj), ::java::util::Map(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ArrayMap(const ::android::support::v4::util::ArrayMap& x) : ::java::lang::Object((jobject)0), ::android::support::v4::util::SimpleArrayMap((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj;}
    ArrayMap(::android::support::v4::util::ArrayMap&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::util::SimpleArrayMap((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::ArrayMap& operator=(const ::android::support::v4::util::ArrayMap& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::ArrayMap& operator=(::android::support::v4::util::ArrayMap&& x) {obj = std::move(x.obj); return *this;}
    
    ArrayMap();
    ArrayMap(int32_t);
    ArrayMap(const ::android::support::v4::util::SimpleArrayMap&);
    bool containsAll(const ::java::util::Collection&) const ;
    void putAll(const ::java::util::Map&) const ;
    bool removeAll(const ::java::util::Collection&) const ;
    bool retainAll(const ::java::util::Collection&) const ;
    ::java::util::Set entrySet() const ;
    ::java::util::Set keySet() const ;
    ::java::util::Collection values() const ;

};
}
}
}
}


