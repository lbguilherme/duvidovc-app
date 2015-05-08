#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace java {
namespace net {
class HttpCookie : public virtual ::java::lang::Object,
                   public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpCookie(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpCookie(const ::java::net::HttpCookie& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    HttpCookie(::java::net::HttpCookie&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::HttpCookie& operator=(const ::java::net::HttpCookie& x) {obj = x.obj; return *this;}
    ::java::net::HttpCookie& operator=(::java::net::HttpCookie&& x) {obj = std::move(x.obj); return *this;}
    
    HttpCookie(const ::java::lang::String&, const ::java::lang::String&);
    static bool domainMatches(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::util::List parse(const ::java::lang::String&);
    ::java::lang::String getComment() const ;
    ::java::lang::String getCommentURL() const ;
    bool getDiscard() const ;
    ::java::lang::String getDomain() const ;
    int64_t getMaxAge() const ;
    ::java::lang::String getName() const ;
    ::java::lang::String getPath() const ;
    ::java::lang::String getPortlist() const ;
    bool getSecure() const ;
    ::java::lang::String getValue() const ;
    int32_t getVersion() const ;
    bool hasExpired() const ;
    void setComment(const ::java::lang::String&) const ;
    void setCommentURL(const ::java::lang::String&) const ;
    void setDiscard(bool) const ;
    void setDomain(const ::java::lang::String&) const ;
    void setMaxAge(int64_t) const ;
    void setPath(const ::java::lang::String&) const ;
    void setPortlist(const ::java::lang::String&) const ;
    void setSecure(bool) const ;
    void setValue(const ::java::lang::String&) const ;
    void setVersion(int32_t) const ;
    ::java::lang::Object clone() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;

};
}
}


