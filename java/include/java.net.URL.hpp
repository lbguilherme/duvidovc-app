#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class Proxy; } }
namespace java { namespace net { class URI; } }
namespace java { namespace net { class URL; } }
namespace java { namespace net { class URLConnection; } }
namespace java { namespace net { class URLStreamHandler; } }
namespace java { namespace net { class URLStreamHandlerFactory; } }

namespace java {
namespace net {
class URL : public virtual ::java::lang::Object,
            public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URL(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URL(const ::java::net::URL& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    URL(::java::net::URL&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::URL& operator=(const ::java::net::URL& x) {obj = x.obj; return *this;}
    ::java::net::URL& operator=(::java::net::URL&& x) {obj = std::move(x.obj); return *this;}
    
    URL(const ::java::lang::String&);
    URL(const ::java::net::URL&, const ::java::lang::String&);
    URL(const ::java::net::URL&, const ::java::lang::String&, const ::java::net::URLStreamHandler&);
    URL(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    URL(const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::java::lang::String&);
    URL(const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::java::lang::String&, const ::java::net::URLStreamHandler&);
    static void setURLStreamHandlerFactory(const ::java::net::URLStreamHandlerFactory&);
    bool equals(const ::java::lang::Object&) const ;
    bool sameFile(const ::java::net::URL&) const ;
    int32_t hashCode() const ;
    ::java::lang::Object getContent() const ;
    ::java::lang::Object getContent(const std::vector< ::java::lang::Class>&) const ;
    ::java::io::InputStream openStream() const ;
    ::java::net::URLConnection openConnection() const ;
    ::java::net::URLConnection openConnection(const ::java::net::Proxy&) const ;
    ::java::net::URI toURI() const ;
    ::java::lang::String toString() const ;
    ::java::lang::String toExternalForm() const ;
    ::java::lang::String getProtocol() const ;
    ::java::lang::String getAuthority() const ;
    ::java::lang::String getUserInfo() const ;
    ::java::lang::String getHost() const ;
    int32_t getPort() const ;
    int32_t getDefaultPort() const ;
    ::java::lang::String getFile() const ;
    ::java::lang::String getPath() const ;
    ::java::lang::String getQuery() const ;
    ::java::lang::String getRef() const ;

};
}
}


