#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.util.AndroidRuntimeException.hpp"

namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class Fragment_InstantiationException : public virtual ::java::lang::Object,
                                        public virtual ::android::util::AndroidRuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Fragment_InstantiationException(jobject _obj) : ::java::lang::Object(_obj), ::android::util::AndroidRuntimeException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Fragment_InstantiationException(const ::android::app::Fragment_InstantiationException& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    Fragment_InstantiationException(::android::app::Fragment_InstantiationException&& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Fragment_InstantiationException& operator=(const ::android::app::Fragment_InstantiationException& x) {obj = x.obj; return *this;}
    ::android::app::Fragment_InstantiationException& operator=(::android::app::Fragment_InstantiationException&& x) {obj = std::move(x.obj); return *this;}
    
    Fragment_InstantiationException(const ::java::lang::String&, const ::java::lang::Exception&);

};
}
}


