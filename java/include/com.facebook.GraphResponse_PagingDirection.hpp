#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { class GraphResponse_PagingDirection; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
class GraphResponse_PagingDirection : public virtual ::java::lang::Object,
                                      public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphResponse_PagingDirection(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphResponse_PagingDirection(const ::com::facebook::GraphResponse_PagingDirection& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    GraphResponse_PagingDirection(::com::facebook::GraphResponse_PagingDirection&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphResponse_PagingDirection& operator=(const ::com::facebook::GraphResponse_PagingDirection& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphResponse_PagingDirection& operator=(::com::facebook::GraphResponse_PagingDirection&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::GraphResponse_PagingDirection> values();
    static ::com::facebook::GraphResponse_PagingDirection valueOf(const ::java::lang::String&);

};
}
}


