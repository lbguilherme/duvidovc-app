#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace os { class AsyncTask_Status; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class AsyncTask_Status : public virtual ::java::lang::Object,
                         public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AsyncTask_Status(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AsyncTask_Status(const ::android::os::AsyncTask_Status& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    AsyncTask_Status(::android::os::AsyncTask_Status&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::AsyncTask_Status& operator=(const ::android::os::AsyncTask_Status& x) {obj = x.obj; return *this;}
    ::android::os::AsyncTask_Status& operator=(::android::os::AsyncTask_Status&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::os::AsyncTask_Status> values();
    static ::android::os::AsyncTask_Status valueOf(const ::java::lang::String&);

};
}
}


