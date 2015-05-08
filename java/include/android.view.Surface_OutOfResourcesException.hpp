#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class Surface_OutOfResourcesException : public virtual ::java::lang::Object,
                                        public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Surface_OutOfResourcesException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Surface_OutOfResourcesException(const ::android::view::Surface_OutOfResourcesException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    Surface_OutOfResourcesException(::android::view::Surface_OutOfResourcesException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::Surface_OutOfResourcesException& operator=(const ::android::view::Surface_OutOfResourcesException& x) {obj = x.obj; return *this;}
    ::android::view::Surface_OutOfResourcesException& operator=(::android::view::Surface_OutOfResourcesException&& x) {obj = std::move(x.obj); return *this;}
    
    Surface_OutOfResourcesException();
    Surface_OutOfResourcesException(const ::java::lang::String&);

};
}
}


