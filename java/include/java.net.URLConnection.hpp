#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class ContentHandlerFactory; } }
namespace java { namespace net { class FileNameMap; } }
namespace java { namespace net { class URL; } }
namespace java { namespace security { class Permission; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace net {
class URLConnection : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URLConnection(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URLConnection(const ::java::net::URLConnection& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    URLConnection(::java::net::URLConnection&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::URLConnection& operator=(const ::java::net::URLConnection& x) {obj = x.obj; return *this;}
    ::java::net::URLConnection& operator=(::java::net::URLConnection&& x) {obj = std::move(x.obj); return *this;}
    
    void connect() const ;
    bool getAllowUserInteraction() const ;
    ::java::lang::Object getContent() const ;
    ::java::lang::Object getContent(const std::vector< ::java::lang::Class>&) const ;
    ::java::lang::String getContentEncoding() const ;
    int32_t getContentLength() const ;
    ::java::lang::String getContentType() const ;
    int64_t getDate() const ;
    static bool getDefaultAllowUserInteraction();
    static ::java::lang::String getDefaultRequestProperty(const ::java::lang::String&);
    bool getDefaultUseCaches() const ;
    bool getDoInput() const ;
    bool getDoOutput() const ;
    int64_t getExpiration() const ;
    static ::java::net::FileNameMap getFileNameMap();
    ::java::lang::String getHeaderField(int32_t) const ;
    ::java::util::Map getHeaderFields() const ;
    ::java::util::Map getRequestProperties() const ;
    void addRequestProperty(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String getHeaderField(const ::java::lang::String&) const ;
    int64_t getHeaderFieldDate(const ::java::lang::String&, int64_t) const ;
    int32_t getHeaderFieldInt(const ::java::lang::String&, int32_t) const ;
    ::java::lang::String getHeaderFieldKey(int32_t) const ;
    int64_t getIfModifiedSince() const ;
    ::java::io::InputStream getInputStream() const ;
    int64_t getLastModified() const ;
    ::java::io::OutputStream getOutputStream() const ;
    ::java::security::Permission getPermission() const ;
    ::java::lang::String getRequestProperty(const ::java::lang::String&) const ;
    ::java::net::URL getURL() const ;
    bool getUseCaches() const ;
    static ::java::lang::String guessContentTypeFromName(const ::java::lang::String&);
    static ::java::lang::String guessContentTypeFromStream(const ::java::io::InputStream&);
    void setAllowUserInteraction(bool) const ;
    static void setContentHandlerFactory(const ::java::net::ContentHandlerFactory&);
    static void setDefaultAllowUserInteraction(bool);
    static void setDefaultRequestProperty(const ::java::lang::String&, const ::java::lang::String&);
    void setDefaultUseCaches(bool) const ;
    void setDoInput(bool) const ;
    void setDoOutput(bool) const ;
    static void setFileNameMap(const ::java::net::FileNameMap&);
    void setIfModifiedSince(int64_t) const ;
    void setRequestProperty(const ::java::lang::String&, const ::java::lang::String&) const ;
    void setUseCaches(bool) const ;
    void setConnectTimeout(int32_t) const ;
    int32_t getConnectTimeout() const ;
    void setReadTimeout(int32_t) const ;
    int32_t getReadTimeout() const ;
    ::java::lang::String toString() const ;

};
}
}


