#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Date; } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class DateUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DateUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DateUtils(const ::org::apache::http::impl::cookie::DateUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DateUtils(::org::apache::http::impl::cookie::DateUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::DateUtils& operator=(const ::org::apache::http::impl::cookie::DateUtils& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::DateUtils& operator=(::org::apache::http::impl::cookie::DateUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::Date parseDate(const ::java::lang::String&);
    static ::java::util::Date parseDate(const ::java::lang::String&, const std::vector< ::java::lang::String>&);
    static ::java::util::Date parseDate(const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::util::Date&);
    static ::java::lang::String formatDate(const ::java::util::Date&);
    static ::java::lang::String formatDate(const ::java::util::Date&, const ::java::lang::String&);

};
}
}
}
}
}


