#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.ReasonPhraseCatalog.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }

namespace org {
namespace apache {
namespace http {
namespace impl {
class EnglishReasonPhraseCatalog : public virtual ::java::lang::Object,
                                   public virtual ::org::apache::http::ReasonPhraseCatalog {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EnglishReasonPhraseCatalog(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::ReasonPhraseCatalog(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EnglishReasonPhraseCatalog(const ::org::apache::http::impl::EnglishReasonPhraseCatalog& x) : ::java::lang::Object((jobject)0), ::org::apache::http::ReasonPhraseCatalog((jobject)0) {obj = x.obj;}
    EnglishReasonPhraseCatalog(::org::apache::http::impl::EnglishReasonPhraseCatalog&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::ReasonPhraseCatalog((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::EnglishReasonPhraseCatalog& operator=(const ::org::apache::http::impl::EnglishReasonPhraseCatalog& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::EnglishReasonPhraseCatalog& operator=(::org::apache::http::impl::EnglishReasonPhraseCatalog&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getReason(int32_t, const ::java::util::Locale&) const;

};
}
}
}
}


