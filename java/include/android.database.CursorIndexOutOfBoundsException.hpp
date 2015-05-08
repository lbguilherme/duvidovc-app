#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.IndexOutOfBoundsException.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace database {
class CursorIndexOutOfBoundsException : public virtual ::java::lang::Object,
                                        public virtual ::java::lang::IndexOutOfBoundsException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CursorIndexOutOfBoundsException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::IndexOutOfBoundsException(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CursorIndexOutOfBoundsException(const ::android::database::CursorIndexOutOfBoundsException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    CursorIndexOutOfBoundsException(::android::database::CursorIndexOutOfBoundsException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::CursorIndexOutOfBoundsException& operator=(const ::android::database::CursorIndexOutOfBoundsException& x) {obj = x.obj; return *this;}
    ::android::database::CursorIndexOutOfBoundsException& operator=(::android::database::CursorIndexOutOfBoundsException&& x) {obj = std::move(x.obj); return *this;}
    
    CursorIndexOutOfBoundsException(int32_t, int32_t);
    CursorIndexOutOfBoundsException(const ::java::lang::String&);

};
}
}


