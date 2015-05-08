#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.Comparator.hpp"

namespace java { namespace lang { class Object; } }
namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } }

namespace org {
namespace apache {
namespace http {
namespace cookie {
class CookieIdentityComparator : public virtual ::java::lang::Object,
                                 public virtual ::java::io::Serializable,
                                 public virtual ::java::util::Comparator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieIdentityComparator(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::Comparator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieIdentityComparator(const ::org::apache::http::cookie::CookieIdentityComparator& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj;}
    CookieIdentityComparator(::org::apache::http::cookie::CookieIdentityComparator&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Comparator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::CookieIdentityComparator& operator=(const ::org::apache::http::cookie::CookieIdentityComparator& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::CookieIdentityComparator& operator=(::org::apache::http::cookie::CookieIdentityComparator&& x) {obj = std::move(x.obj); return *this;}
    
    CookieIdentityComparator();
    int32_t compare(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::Cookie&) const ;
    int32_t compare(const ::java::lang::Object&, const ::java::lang::Object&) const ;

};
}
}
}
}


