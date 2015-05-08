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
namespace content {
namespace res {
class Resources_NotFoundException : public virtual ::java::lang::Object,
                                    public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Resources_NotFoundException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Resources_NotFoundException(const ::android::content::res::Resources_NotFoundException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    Resources_NotFoundException(::android::content::res::Resources_NotFoundException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::Resources_NotFoundException& operator=(const ::android::content::res::Resources_NotFoundException& x) {obj = x.obj; return *this;}
    ::android::content::res::Resources_NotFoundException& operator=(::android::content::res::Resources_NotFoundException&& x) {obj = std::move(x.obj); return *this;}
    
    Resources_NotFoundException();
    Resources_NotFoundException(const ::java::lang::String&);

};
}
}
}


