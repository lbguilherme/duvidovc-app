#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Enumeration.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace util {
class StringTokenizer : public virtual ::java::lang::Object,
                        public virtual ::java::util::Enumeration {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StringTokenizer(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Enumeration(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StringTokenizer(const ::java::util::StringTokenizer& x) : ::java::lang::Object((jobject)0), ::java::util::Enumeration((jobject)0) {obj = x.obj;}
    StringTokenizer(::java::util::StringTokenizer&& x) : ::java::lang::Object((jobject)0), ::java::util::Enumeration((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::StringTokenizer& operator=(const ::java::util::StringTokenizer& x) {obj = x.obj; return *this;}
    ::java::util::StringTokenizer& operator=(::java::util::StringTokenizer&& x) {obj = std::move(x.obj); return *this;}
    
    StringTokenizer(const ::java::lang::String&);
    StringTokenizer(const ::java::lang::String&, const ::java::lang::String&);
    StringTokenizer(const ::java::lang::String&, const ::java::lang::String&, bool);
    int32_t countTokens() const;
    bool hasMoreElements() const;
    bool hasMoreTokens() const;
    ::java::lang::Object nextElement() const;
    ::java::lang::String nextToken() const;
    ::java::lang::String nextToken(const ::java::lang::String&) const;

};
}
}


