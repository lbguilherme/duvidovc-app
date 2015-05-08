#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class UriPatternMatcher : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UriPatternMatcher(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UriPatternMatcher(const ::org::apache::http::protocol::UriPatternMatcher& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UriPatternMatcher(::org::apache::http::protocol::UriPatternMatcher&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::UriPatternMatcher& operator=(const ::org::apache::http::protocol::UriPatternMatcher& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::UriPatternMatcher& operator=(::org::apache::http::protocol::UriPatternMatcher&& x) {obj = std::move(x.obj); return *this;}
    
    UriPatternMatcher();
    void register_(const ::java::lang::String&, const ::java::lang::Object&) const ;
    void unregister(const ::java::lang::String&) const ;
    void setHandlers(const ::java::util::Map&) const ;
    ::java::lang::Object lookup(const ::java::lang::String&) const ;

};
}
}
}
}


