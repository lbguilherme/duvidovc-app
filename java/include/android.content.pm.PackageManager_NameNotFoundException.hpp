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
namespace pm {
class PackageManager_NameNotFoundException : public virtual ::java::lang::Object,
                                             public virtual ::android::util::AndroidException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PackageManager_NameNotFoundException(jobject _obj) : ::java::lang::Object(_obj), ::android::util::AndroidException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PackageManager_NameNotFoundException(const ::android::content::pm::PackageManager_NameNotFoundException& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    PackageManager_NameNotFoundException(::android::content::pm::PackageManager_NameNotFoundException&& x) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::PackageManager_NameNotFoundException& operator=(const ::android::content::pm::PackageManager_NameNotFoundException& x) {obj = x.obj; return *this;}
    ::android::content::pm::PackageManager_NameNotFoundException& operator=(::android::content::pm::PackageManager_NameNotFoundException&& x) {obj = std::move(x.obj); return *this;}
    
    PackageManager_NameNotFoundException();
    PackageManager_NameNotFoundException(const ::java::lang::String&);

};
}
}
}


