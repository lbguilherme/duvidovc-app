#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace regex {
class MatchResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MatchResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MatchResult(const ::java::util::regex::MatchResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MatchResult(::java::util::regex::MatchResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::regex::MatchResult& operator=(const ::java::util::regex::MatchResult& x) {obj = x.obj; return *this;}
    ::java::util::regex::MatchResult& operator=(::java::util::regex::MatchResult&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t end() const ;
    int32_t end(int32_t) const ;
    ::java::lang::String group() const ;
    ::java::lang::String group(int32_t) const ;
    int32_t groupCount() const ;
    int32_t start() const ;
    int32_t start(int32_t) const ;

};
}
}
}


