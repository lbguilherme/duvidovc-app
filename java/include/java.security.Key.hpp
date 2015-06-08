#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace security {
class Key : public virtual ::java::lang::Object,
            public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Key(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Key(const ::java::security::Key& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Key(::java::security::Key&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Key& operator=(const ::java::security::Key& x) {obj = x.obj; return *this;}
    ::java::security::Key& operator=(::java::security::Key&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAlgorithm() const;
    ::java::lang::String getFormat() const;
    std::vector< int8_t> getEncoded() const;

};
}
}


