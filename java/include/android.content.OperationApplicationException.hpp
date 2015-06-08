#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace android {
namespace content {
class OperationApplicationException : public virtual ::java::lang::Object,
                                      public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OperationApplicationException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OperationApplicationException(const ::android::content::OperationApplicationException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    OperationApplicationException(::android::content::OperationApplicationException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::OperationApplicationException& operator=(const ::android::content::OperationApplicationException& x) {obj = x.obj; return *this;}
    ::android::content::OperationApplicationException& operator=(::android::content::OperationApplicationException&& x) {obj = std::move(x.obj); return *this;}
    
    OperationApplicationException();
    OperationApplicationException(const ::java::lang::String&);
    OperationApplicationException(const ::java::lang::String&, const ::java::lang::Throwable&);
    OperationApplicationException(const ::java::lang::Throwable&);
    OperationApplicationException(int32_t);
    OperationApplicationException(const ::java::lang::String&, int32_t);
    int32_t getNumSuccessfulYieldPoints() const;

};
}
}


