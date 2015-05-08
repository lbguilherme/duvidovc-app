#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.RuntimeException.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class SurfaceHolder_BadSurfaceTypeException : public virtual ::java::lang::Object,
                                              public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SurfaceHolder_BadSurfaceTypeException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SurfaceHolder_BadSurfaceTypeException(const ::android::view::SurfaceHolder_BadSurfaceTypeException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    SurfaceHolder_BadSurfaceTypeException(::android::view::SurfaceHolder_BadSurfaceTypeException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::SurfaceHolder_BadSurfaceTypeException& operator=(const ::android::view::SurfaceHolder_BadSurfaceTypeException& x) {obj = x.obj; return *this;}
    ::android::view::SurfaceHolder_BadSurfaceTypeException& operator=(::android::view::SurfaceHolder_BadSurfaceTypeException&& x) {obj = std::move(x.obj); return *this;}
    
    SurfaceHolder_BadSurfaceTypeException();
    SurfaceHolder_BadSurfaceTypeException(const ::java::lang::String&);

};
}
}


