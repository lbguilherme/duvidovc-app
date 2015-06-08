#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.FacebookException.hpp"

namespace com { namespace facebook { class GraphResponse; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
class FacebookGraphResponseException : public virtual ::java::lang::Object,
                                       public virtual ::com::facebook::FacebookException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookGraphResponseException(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::FacebookException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookGraphResponseException(const ::com::facebook::FacebookGraphResponseException& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    FacebookGraphResponseException(::com::facebook::FacebookGraphResponseException&& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookGraphResponseException& operator=(const ::com::facebook::FacebookGraphResponseException& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookGraphResponseException& operator=(::com::facebook::FacebookGraphResponseException&& x) {obj = std::move(x.obj); return *this;}
    
    FacebookGraphResponseException(const ::com::facebook::GraphResponse&, const ::java::lang::String&);
    ::com::facebook::GraphResponse getGraphResponse() const;
    ::java::lang::String toString() const;

};
}
}


