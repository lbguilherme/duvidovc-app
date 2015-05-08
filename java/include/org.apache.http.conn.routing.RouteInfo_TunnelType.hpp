#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class RouteInfo_TunnelType; } } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace routing {
class RouteInfo_TunnelType : public virtual ::java::lang::Object,
                             public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RouteInfo_TunnelType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RouteInfo_TunnelType(const ::org::apache::http::conn::routing::RouteInfo_TunnelType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    RouteInfo_TunnelType(::org::apache::http::conn::routing::RouteInfo_TunnelType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::routing::RouteInfo_TunnelType& operator=(const ::org::apache::http::conn::routing::RouteInfo_TunnelType& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::routing::RouteInfo_TunnelType& operator=(::org::apache::http::conn::routing::RouteInfo_TunnelType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::org::apache::http::conn::routing::RouteInfo_TunnelType> values();
    static ::org::apache::http::conn::routing::RouteInfo_TunnelType valueOf(const ::java::lang::String&);

};
}
}
}
}
}


