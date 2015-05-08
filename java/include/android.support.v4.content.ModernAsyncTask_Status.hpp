#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace support { namespace v4 { namespace content { class ModernAsyncTask_Status; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class ModernAsyncTask_Status : public virtual ::java::lang::Object,
                               public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ModernAsyncTask_Status(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ModernAsyncTask_Status(const ::android::support::v4::content::ModernAsyncTask_Status& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    ModernAsyncTask_Status(::android::support::v4::content::ModernAsyncTask_Status&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::ModernAsyncTask_Status& operator=(const ::android::support::v4::content::ModernAsyncTask_Status& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::ModernAsyncTask_Status& operator=(::android::support::v4::content::ModernAsyncTask_Status&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::support::v4::content::ModernAsyncTask_Status> values();
    static ::android::support::v4::content::ModernAsyncTask_Status valueOf(const ::java::lang::String&);

};
}
}
}
}


