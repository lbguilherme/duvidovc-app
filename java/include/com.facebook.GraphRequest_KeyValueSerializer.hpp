#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
class GraphRequest_KeyValueSerializer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequest_KeyValueSerializer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequest_KeyValueSerializer(const ::com::facebook::GraphRequest_KeyValueSerializer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GraphRequest_KeyValueSerializer(::com::facebook::GraphRequest_KeyValueSerializer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequest_KeyValueSerializer& operator=(const ::com::facebook::GraphRequest_KeyValueSerializer& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequest_KeyValueSerializer& operator=(::com::facebook::GraphRequest_KeyValueSerializer&& x) {obj = std::move(x.obj); return *this;}
    
    void writeString(const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}


