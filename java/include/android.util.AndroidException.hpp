#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace android {
namespace util {
class AndroidException : public virtual ::java::lang::Object,
                         public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AndroidException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AndroidException(const ::android::util::AndroidException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    AndroidException(::android::util::AndroidException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::AndroidException& operator=(const ::android::util::AndroidException& x) {obj = x.obj; return *this;}
    ::android::util::AndroidException& operator=(::android::util::AndroidException&& x) {obj = std::move(x.obj); return *this;}
    
    AndroidException();
    AndroidException(const ::java::lang::String&);
    AndroidException(const ::java::lang::String&, const ::java::lang::Throwable&);
    AndroidException(const ::java::lang::Exception&);

};
}
}


