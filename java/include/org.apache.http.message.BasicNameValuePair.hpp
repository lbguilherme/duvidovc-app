#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.NameValuePair.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicNameValuePair : public virtual ::java::lang::Object,
                           public virtual ::java::lang::Cloneable,
                           public virtual ::org::apache::http::NameValuePair {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicNameValuePair(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::NameValuePair(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicNameValuePair(const ::org::apache::http::message::BasicNameValuePair& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::NameValuePair((jobject)0) {obj = x.obj;}
    BasicNameValuePair(::org::apache::http::message::BasicNameValuePair&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::NameValuePair((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicNameValuePair& operator=(const ::org::apache::http::message::BasicNameValuePair& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicNameValuePair& operator=(::org::apache::http::message::BasicNameValuePair&& x) {obj = std::move(x.obj); return *this;}
    
    BasicNameValuePair(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getName() const ;
    ::java::lang::String getValue() const ;
    ::java::lang::String toString() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::Object clone() const ;

};
}
}
}
}


