#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.util.AndroidException.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class IntentFilter_MalformedMimeTypeException : public virtual ::java::lang::Object,
                                                public virtual ::android::util::AndroidException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntentFilter_MalformedMimeTypeException(jobject _obj) : ::java::lang::Object(_obj), ::android::util::AndroidException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntentFilter_MalformedMimeTypeException(const ::android::content::IntentFilter_MalformedMimeTypeException& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    IntentFilter_MalformedMimeTypeException(::android::content::IntentFilter_MalformedMimeTypeException&& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::IntentFilter_MalformedMimeTypeException& operator=(const ::android::content::IntentFilter_MalformedMimeTypeException& x) {obj = x.obj; return *this;}
    ::android::content::IntentFilter_MalformedMimeTypeException& operator=(::android::content::IntentFilter_MalformedMimeTypeException&& x) {obj = std::move(x.obj); return *this;}
    
    IntentFilter_MalformedMimeTypeException();
    IntentFilter_MalformedMimeTypeException(const ::java::lang::String&);

};
}
}


