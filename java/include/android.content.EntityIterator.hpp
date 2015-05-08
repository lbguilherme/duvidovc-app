#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Iterator.hpp"


namespace android {
namespace content {
class EntityIterator : public virtual ::java::lang::Object,
                       public virtual ::java::util::Iterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EntityIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Iterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EntityIterator(const ::android::content::EntityIterator& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj;}
    EntityIterator(::android::content::EntityIterator&& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::EntityIterator& operator=(const ::android::content::EntityIterator& x) {obj = x.obj; return *this;}
    ::android::content::EntityIterator& operator=(::android::content::EntityIterator&& x) {obj = std::move(x.obj); return *this;}
    
    void reset() const ;
    void close() const ;

};
}
}


