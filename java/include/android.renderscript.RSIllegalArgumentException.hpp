#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.RSRuntimeException.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class RSIllegalArgumentException : public virtual ::java::lang::Object,
                                   public virtual ::android::renderscript::RSRuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSIllegalArgumentException(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::RSRuntimeException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSIllegalArgumentException(const ::android::renderscript::RSIllegalArgumentException& x) : ::java::lang::Object((jobject)0), ::android::renderscript::RSRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    RSIllegalArgumentException(::android::renderscript::RSIllegalArgumentException&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::RSRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::RSIllegalArgumentException& operator=(const ::android::renderscript::RSIllegalArgumentException& x) {obj = x.obj; return *this;}
    ::android::renderscript::RSIllegalArgumentException& operator=(::android::renderscript::RSIllegalArgumentException&& x) {obj = std::move(x.obj); return *this;}
    
    RSIllegalArgumentException(const ::java::lang::String&);

};
}
}


