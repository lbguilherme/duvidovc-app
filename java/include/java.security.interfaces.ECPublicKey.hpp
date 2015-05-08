#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.PublicKey.hpp"
#include "java.security.interfaces.ECKey.hpp"

namespace java { namespace security { namespace spec { class ECPoint; } } }

namespace java {
namespace security {
namespace interfaces {
class ECPublicKey : public virtual ::java::lang::Object,
                    public virtual ::java::security::PublicKey,
                    public virtual ::java::security::interfaces::ECKey {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ECPublicKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj), ::java::security::PublicKey(_obj), ::java::security::interfaces::ECKey(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ECPublicKey(const ::java::security::interfaces::ECPublicKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PublicKey((jobject)0), ::java::security::interfaces::ECKey((jobject)0) {obj = x.obj;}
    ECPublicKey(::java::security::interfaces::ECPublicKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PublicKey((jobject)0), ::java::security::interfaces::ECKey((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::interfaces::ECPublicKey& operator=(const ::java::security::interfaces::ECPublicKey& x) {obj = x.obj; return *this;}
    ::java::security::interfaces::ECPublicKey& operator=(::java::security::interfaces::ECPublicKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::security::spec::ECPoint getW() const ;

};
}
}
}


