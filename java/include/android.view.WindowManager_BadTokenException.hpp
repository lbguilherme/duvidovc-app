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
class WindowManager_BadTokenException : public virtual ::java::lang::Object,
                                        public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WindowManager_BadTokenException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WindowManager_BadTokenException(const ::android::view::WindowManager_BadTokenException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    WindowManager_BadTokenException(::android::view::WindowManager_BadTokenException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::WindowManager_BadTokenException& operator=(const ::android::view::WindowManager_BadTokenException& x) {obj = x.obj; return *this;}
    ::android::view::WindowManager_BadTokenException& operator=(::android::view::WindowManager_BadTokenException&& x) {obj = std::move(x.obj); return *this;}
    
    WindowManager_BadTokenException();
    WindowManager_BadTokenException(const ::java::lang::String&);

};
}
}


