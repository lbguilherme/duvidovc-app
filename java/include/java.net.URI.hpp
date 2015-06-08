#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class URI; } }
namespace java { namespace net { class URL; } }

namespace java {
namespace net {
class URI : public virtual ::java::lang::Object,
            public virtual ::java::io::Serializable,
            public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URI(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URI(const ::java::net::URI& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    URI(::java::net::URI&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::URI& operator=(const ::java::net::URI& x) {obj = x.obj; return *this;}
    ::java::net::URI& operator=(::java::net::URI&& x) {obj = std::move(x.obj); return *this;}
    
    URI(const ::java::lang::String&);
    URI(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    URI(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    URI(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    URI(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    int32_t compareTo(const ::java::net::URI&) const;
    static ::java::net::URI create(const ::java::lang::String&);
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String getScheme() const;
    ::java::lang::String getSchemeSpecificPart() const;
    ::java::lang::String getRawSchemeSpecificPart() const;
    ::java::lang::String getAuthority() const;
    ::java::lang::String getRawAuthority() const;
    ::java::lang::String getUserInfo() const;
    ::java::lang::String getRawUserInfo() const;
    ::java::lang::String getHost() const;
    int32_t getPort() const;
    ::java::lang::String getPath() const;
    ::java::lang::String getRawPath() const;
    ::java::lang::String getQuery() const;
    ::java::lang::String getRawQuery() const;
    ::java::lang::String getFragment() const;
    ::java::lang::String getRawFragment() const;
    int32_t hashCode() const;
    bool isAbsolute() const;
    bool isOpaque() const;
    ::java::net::URI normalize() const;
    ::java::net::URI parseServerAuthority() const;
    ::java::net::URI relativize(const ::java::net::URI&) const;
    ::java::net::URI resolve(const ::java::net::URI&) const;
    ::java::net::URI resolve(const ::java::lang::String&) const;
    ::java::lang::String toASCIIString() const;
    ::java::lang::String toString() const;
    ::java::net::URL toURL() const;
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}


