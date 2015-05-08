#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace regex { class Matcher; } } }

namespace android {
namespace util {
class Patterns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Patterns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Patterns(const ::android::util::Patterns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Patterns(::android::util::Patterns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::Patterns& operator=(const ::android::util::Patterns& x) {obj = x.obj; return *this;}
    ::android::util::Patterns& operator=(::android::util::Patterns&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String concatGroups(const ::java::util::regex::Matcher&);
    static ::java::lang::String digitsAndPlusOnly(const ::java::util::regex::Matcher&);

};
}
}


