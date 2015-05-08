#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace security {
class Provider_Service : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Provider_Service(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Provider_Service(const ::java::security::Provider_Service& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Provider_Service(::java::security::Provider_Service&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Provider_Service& operator=(const ::java::security::Provider_Service& x) {obj = x.obj; return *this;}
    ::java::security::Provider_Service& operator=(::java::security::Provider_Service&& x) {obj = std::move(x.obj); return *this;}
    
    Provider_Service(const ::java::security::Provider&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::util::List&, const ::java::util::Map&);
    ::java::lang::String getType() const ;
    ::java::lang::String getAlgorithm() const ;
    ::java::security::Provider getProvider() const ;
    ::java::lang::String getClassName() const ;
    ::java::lang::String getAttribute(const ::java::lang::String&) const ;
    ::java::lang::Object newInstance(const ::java::lang::Object&) const ;
    bool supportsParameter(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;

};
}
}


