#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Iterable.hpp"
#include "java.util.Iterator.hpp"

namespace android { namespace database { class Cursor; } }
namespace android { namespace database { class CursorJoiner_Result; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Iterator; } }

namespace android {
namespace database {
class CursorJoiner : public virtual ::java::lang::Object,
                     public virtual ::java::lang::Iterable,
                     public virtual ::java::util::Iterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CursorJoiner(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::Iterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CursorJoiner(const ::android::database::CursorJoiner& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj;}
    CursorJoiner(::android::database::CursorJoiner&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::CursorJoiner& operator=(const ::android::database::CursorJoiner& x) {obj = x.obj; return *this;}
    ::android::database::CursorJoiner& operator=(::android::database::CursorJoiner&& x) {obj = std::move(x.obj); return *this;}
    
    CursorJoiner(const ::android::database::Cursor&, const std::vector< ::java::lang::String>&, const ::android::database::Cursor&, const std::vector< ::java::lang::String>&);
    ::java::util::Iterator iterator() const ;
    bool hasNext() const ;
    ::android::database::CursorJoiner_Result next() const ;
    void remove() const ;

};
}
}

#include "android.database.CursorJoiner_Result.hpp"

