#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class GraphRequest; } }
namespace java { namespace lang { class Object; } }

namespace com {
namespace facebook {
class GraphRequest_Attachment : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequest_Attachment(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequest_Attachment(const ::com::facebook::GraphRequest_Attachment& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GraphRequest_Attachment(::com::facebook::GraphRequest_Attachment&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequest_Attachment& operator=(const ::com::facebook::GraphRequest_Attachment& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequest_Attachment& operator=(::com::facebook::GraphRequest_Attachment&& x) {obj = std::move(x.obj); return *this;}
    
    GraphRequest_Attachment(const ::com::facebook::GraphRequest&, const ::java::lang::Object&);
    ::com::facebook::GraphRequest getRequest() const ;
    ::java::lang::Object getValue() const ;

};
}
}


