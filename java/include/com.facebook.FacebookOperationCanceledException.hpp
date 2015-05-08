#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.FacebookException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace com {
namespace facebook {
class FacebookOperationCanceledException : public virtual ::java::lang::Object,
                                           public virtual ::com::facebook::FacebookException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookOperationCanceledException(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::FacebookException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookOperationCanceledException(const ::com::facebook::FacebookOperationCanceledException& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    FacebookOperationCanceledException(::com::facebook::FacebookOperationCanceledException&& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookOperationCanceledException& operator=(const ::com::facebook::FacebookOperationCanceledException& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookOperationCanceledException& operator=(::com::facebook::FacebookOperationCanceledException&& x) {obj = std::move(x.obj); return *this;}
    
    FacebookOperationCanceledException();
    FacebookOperationCanceledException(const ::java::lang::String&);
    FacebookOperationCanceledException(const ::java::lang::String&, const ::java::lang::Throwable&);
    FacebookOperationCanceledException(const ::java::lang::Throwable&);

};
}
}


