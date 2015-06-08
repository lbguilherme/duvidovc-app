#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.auth.Credentials.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Principal; } }

namespace org {
namespace apache {
namespace http {
namespace auth {
class NTCredentials : public virtual ::java::lang::Object,
                      public virtual ::org::apache::http::auth::Credentials {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NTCredentials(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::auth::Credentials(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NTCredentials(const ::org::apache::http::auth::NTCredentials& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::Credentials((jobject)0) {obj = x.obj;}
    NTCredentials(::org::apache::http::auth::NTCredentials&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::Credentials((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::NTCredentials& operator=(const ::org::apache::http::auth::NTCredentials& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::NTCredentials& operator=(::org::apache::http::auth::NTCredentials&& x) {obj = std::move(x.obj); return *this;}
    
    NTCredentials(const ::java::lang::String&);
    NTCredentials(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    ::java::security::Principal getUserPrincipal() const;
    ::java::lang::String getUserName() const;
    ::java::lang::String getPassword() const;
    ::java::lang::String getDomain() const;
    ::java::lang::String getWorkstation() const;
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String toString() const;

};
}
}
}
}


