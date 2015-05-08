#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.regex.MatchResult.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuffer; } }
namespace java { namespace util { namespace regex { class MatchResult; } } }
namespace java { namespace util { namespace regex { class Matcher; } } }
namespace java { namespace util { namespace regex { class Pattern; } } }

namespace java {
namespace util {
namespace regex {
class Matcher : public virtual ::java::lang::Object,
                public virtual ::java::util::regex::MatchResult {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Matcher(jobject _obj) : ::java::lang::Object(_obj), ::java::util::regex::MatchResult(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Matcher(const ::java::util::regex::Matcher& x) : ::java::lang::Object((jobject)0), ::java::util::regex::MatchResult((jobject)0) {obj = x.obj;}
    Matcher(::java::util::regex::Matcher&& x) : ::java::lang::Object((jobject)0), ::java::util::regex::MatchResult((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::regex::Matcher& operator=(const ::java::util::regex::Matcher& x) {obj = x.obj; return *this;}
    ::java::util::regex::Matcher& operator=(::java::util::regex::Matcher&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::regex::Matcher appendReplacement(const ::java::lang::StringBuffer&, const ::java::lang::String&) const ;
    ::java::util::regex::Matcher reset() const ;
    ::java::util::regex::Matcher reset(const ::java::lang::CharSequence&) const ;
    ::java::util::regex::Matcher usePattern(const ::java::util::regex::Pattern&) const ;
    ::java::util::regex::Matcher region(int32_t, int32_t) const ;
    ::java::lang::StringBuffer appendTail(const ::java::lang::StringBuffer&) const ;
    ::java::lang::String replaceFirst(const ::java::lang::String&) const ;
    ::java::lang::String replaceAll(const ::java::lang::String&) const ;
    ::java::util::regex::Pattern pattern() const ;
    ::java::lang::String group(int32_t) const ;
    ::java::lang::String group() const ;
    bool find(int32_t) const ;
    bool find() const ;
    bool lookingAt() const ;
    bool matches() const ;
    int32_t start(int32_t) const ;
    int32_t end(int32_t) const ;
    static ::java::lang::String quoteReplacement(const ::java::lang::String&);
    int32_t start() const ;
    int32_t groupCount() const ;
    int32_t end() const ;
    ::java::util::regex::MatchResult toMatchResult() const ;
    ::java::util::regex::Matcher useAnchoringBounds(bool) const ;
    bool hasAnchoringBounds() const ;
    ::java::util::regex::Matcher useTransparentBounds(bool) const ;
    bool hasTransparentBounds() const ;
    int32_t regionStart() const ;
    int32_t regionEnd() const ;
    bool requireEnd() const ;
    bool hitEnd() const ;

};
}
}
}


