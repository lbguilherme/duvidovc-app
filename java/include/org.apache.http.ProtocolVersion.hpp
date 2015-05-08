#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }

namespace org {
namespace apache {
namespace http {
class ProtocolVersion : public virtual ::java::lang::Object,
                        public virtual ::java::io::Serializable,
                        public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProtocolVersion(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProtocolVersion(const ::org::apache::http::ProtocolVersion& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    ProtocolVersion(::org::apache::http::ProtocolVersion&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::ProtocolVersion& operator=(const ::org::apache::http::ProtocolVersion& x) {obj = x.obj; return *this;}
    ::org::apache::http::ProtocolVersion& operator=(::org::apache::http::ProtocolVersion&& x) {obj = std::move(x.obj); return *this;}
    
    ProtocolVersion(const ::java::lang::String&, int32_t, int32_t);
    ::java::lang::String getProtocol() const ;
    int32_t getMajor() const ;
    int32_t getMinor() const ;
    ::org::apache::http::ProtocolVersion forVersion(int32_t, int32_t) const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;
    bool isComparable(const ::org::apache::http::ProtocolVersion&) const ;
    int32_t compareToVersion(const ::org::apache::http::ProtocolVersion&) const ;
    bool greaterEquals(const ::org::apache::http::ProtocolVersion&) const ;
    bool lessEquals(const ::org::apache::http::ProtocolVersion&) const ;
    ::java::lang::String toString() const ;
    ::java::lang::Object clone() const ;

};
}
}
}


