#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace com { namespace facebook { namespace login { class LoginClient_Result_Code; } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace login {
class LoginClient_Result_Code : public virtual ::java::lang::Object,
                                public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginClient_Result_Code(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginClient_Result_Code(const ::com::facebook::login::LoginClient_Result_Code& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    LoginClient_Result_Code(::com::facebook::login::LoginClient_Result_Code&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::LoginClient_Result_Code& operator=(const ::com::facebook::login::LoginClient_Result_Code& x) {obj = x.obj; return *this;}
    ::com::facebook::login::LoginClient_Result_Code& operator=(::com::facebook::login::LoginClient_Result_Code&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::com::facebook::login::LoginClient_Result_Code> values();
    static ::com::facebook::login::LoginClient_Result_Code valueOf(const ::java::lang::String&);

};
}
}
}


