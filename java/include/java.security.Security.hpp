#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace security {
class Security : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Security(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Security(const ::java::security::Security& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Security(::java::security::Security&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Security& operator=(const ::java::security::Security& x) {obj = x.obj; return *this;}
    ::java::security::Security& operator=(::java::security::Security&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String getAlgorithmProperty(const ::java::lang::String&, const ::java::lang::String&);
    static int32_t insertProviderAt(const ::java::security::Provider&, int32_t);
    static int32_t addProvider(const ::java::security::Provider&);
    static void removeProvider(const ::java::lang::String&);
    static std::vector< ::java::security::Provider> getProviders();
    static ::java::security::Provider getProvider(const ::java::lang::String&);
    static std::vector< ::java::security::Provider> getProviders(const ::java::lang::String&);
    static std::vector< ::java::security::Provider> getProviders(const ::java::util::Map&);
    static ::java::lang::String getProperty(const ::java::lang::String&);
    static void setProperty(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::util::Set getAlgorithms(const ::java::lang::String&);

};
}
}


