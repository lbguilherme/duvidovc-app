#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace util {
class LruCache : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LruCache(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LruCache(const ::android::util::LruCache& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LruCache(::android::util::LruCache&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::LruCache& operator=(const ::android::util::LruCache& x) {obj = x.obj; return *this;}
    ::android::util::LruCache& operator=(::android::util::LruCache&& x) {obj = std::move(x.obj); return *this;}
    
    LruCache(int32_t);
    ::java::lang::Object get(const ::java::lang::Object&) const;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::lang::Object remove(const ::java::lang::Object&) const;
    void evictAll() const;
    int32_t size() const;
    int32_t maxSize() const;
    int32_t hitCount() const;
    int32_t missCount() const;
    int32_t createCount() const;
    int32_t putCount() const;
    int32_t evictionCount() const;
    ::java::util::Map snapshot() const;
    ::java::lang::String toString() const;

};
}
}


