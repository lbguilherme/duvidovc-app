#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace regex { class Matcher; } } }
namespace java { namespace util { namespace regex { class Pattern; } } }

namespace java {
namespace util {
namespace regex {
class Pattern : public virtual ::java::lang::Object,
                public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pattern(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pattern(const ::java::util::regex::Pattern& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Pattern(::java::util::regex::Pattern&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::regex::Pattern& operator=(const ::java::util::regex::Pattern& x) {obj = x.obj; return *this;}
    ::java::util::regex::Pattern& operator=(::java::util::regex::Pattern&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::regex::Matcher matcher(const ::java::lang::CharSequence&) const;
    std::vector< ::java::lang::String> split(const ::java::lang::CharSequence&, int32_t) const;
    std::vector< ::java::lang::String> split(const ::java::lang::CharSequence&) const;
    ::java::lang::String pattern() const;
    ::java::lang::String toString() const;
    int32_t flags() const;
    static ::java::util::regex::Pattern compile(const ::java::lang::String&, int32_t);
    static ::java::util::regex::Pattern compile(const ::java::lang::String&);
    static bool matches(const ::java::lang::String&, const ::java::lang::CharSequence&);
    static ::java::lang::String quote(const ::java::lang::String&);

};
}
}
}


