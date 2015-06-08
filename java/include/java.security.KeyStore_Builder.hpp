#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class KeyStore; } }
namespace java { namespace security { class KeyStore_Builder; } }
namespace java { namespace security { class KeyStore_ProtectionParameter; } }
namespace java { namespace security { class Provider; } }

namespace java {
namespace security {
class KeyStore_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStore_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStore_Builder(const ::java::security::KeyStore_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyStore_Builder(::java::security::KeyStore_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyStore_Builder& operator=(const ::java::security::KeyStore_Builder& x) {obj = x.obj; return *this;}
    ::java::security::KeyStore_Builder& operator=(::java::security::KeyStore_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::security::KeyStore getKeyStore() const;
    ::java::security::KeyStore_ProtectionParameter getProtectionParameter(const ::java::lang::String&) const;
    static ::java::security::KeyStore_Builder newInstance(const ::java::security::KeyStore&, const ::java::security::KeyStore_ProtectionParameter&);
    static ::java::security::KeyStore_Builder newInstance(const ::java::lang::String&, const ::java::security::Provider&, const ::java::io::File&, const ::java::security::KeyStore_ProtectionParameter&);
    static ::java::security::KeyStore_Builder newInstance(const ::java::lang::String&, const ::java::security::Provider&, const ::java::security::KeyStore_ProtectionParameter&);

};
}
}


