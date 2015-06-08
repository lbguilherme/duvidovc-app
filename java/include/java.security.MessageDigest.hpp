#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.MessageDigestSpi.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { class ByteBuffer; } }
namespace java { namespace security { class MessageDigest; } }
namespace java { namespace security { class Provider; } }

namespace java {
namespace security {
class MessageDigest : public virtual ::java::lang::Object,
                      public virtual ::java::security::MessageDigestSpi {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MessageDigest(jobject _obj) : ::java::lang::Object(_obj), ::java::security::MessageDigestSpi(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MessageDigest(const ::java::security::MessageDigest& x) : ::java::lang::Object((jobject)0), ::java::security::MessageDigestSpi((jobject)0) {obj = x.obj;}
    MessageDigest(::java::security::MessageDigest&& x) : ::java::lang::Object((jobject)0), ::java::security::MessageDigestSpi((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::MessageDigest& operator=(const ::java::security::MessageDigest& x) {obj = x.obj; return *this;}
    ::java::security::MessageDigest& operator=(::java::security::MessageDigest&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::security::MessageDigest getInstance(const ::java::lang::String&);
    static ::java::security::MessageDigest getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::security::MessageDigest getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    void reset() const;
    void update(int8_t) const;
    void update(const std::vector< int8_t>&, int32_t, int32_t) const;
    void update(const std::vector< int8_t>&) const;
    std::vector< int8_t> digest() const;
    int32_t digest(const std::vector< int8_t>&, int32_t, int32_t) const;
    std::vector< int8_t> digest(const std::vector< int8_t>&) const;
    ::java::lang::String toString() const;
    static bool isEqual(const std::vector< int8_t>&, const std::vector< int8_t>&);
    ::java::lang::String getAlgorithm() const;
    ::java::security::Provider getProvider() const;
    int32_t getDigestLength() const;
    ::java::lang::Object clone() const;
    void update(const ::java::nio::ByteBuffer&) const;

};
}
}


