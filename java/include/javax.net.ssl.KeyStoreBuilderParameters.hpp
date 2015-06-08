#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.net.ssl.ManagerFactoryParameters.hpp"

namespace java { namespace security { class KeyStore_Builder; } }
namespace java { namespace util { class List; } }

namespace javax {
namespace net {
namespace ssl {
class KeyStoreBuilderParameters : public virtual ::java::lang::Object,
                                  public virtual ::javax::net::ssl::ManagerFactoryParameters {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStoreBuilderParameters(jobject _obj) : ::java::lang::Object(_obj), ::javax::net::ssl::ManagerFactoryParameters(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStoreBuilderParameters(const ::javax::net::ssl::KeyStoreBuilderParameters& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::ManagerFactoryParameters((jobject)0) {obj = x.obj;}
    KeyStoreBuilderParameters(::javax::net::ssl::KeyStoreBuilderParameters&& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::ManagerFactoryParameters((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::KeyStoreBuilderParameters& operator=(const ::javax::net::ssl::KeyStoreBuilderParameters& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::KeyStoreBuilderParameters& operator=(::javax::net::ssl::KeyStoreBuilderParameters&& x) {obj = std::move(x.obj); return *this;}
    
    KeyStoreBuilderParameters(const ::java::security::KeyStore_Builder&);
    KeyStoreBuilderParameters(const ::java::util::List&);
    ::java::util::List getParameters() const;

};
}
}
}


