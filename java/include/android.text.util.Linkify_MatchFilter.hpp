#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
namespace util {
class Linkify_MatchFilter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Linkify_MatchFilter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Linkify_MatchFilter(const ::android::text::util::Linkify_MatchFilter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Linkify_MatchFilter(::android::text::util::Linkify_MatchFilter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::util::Linkify_MatchFilter& operator=(const ::android::text::util::Linkify_MatchFilter& x) {obj = x.obj; return *this;}
    ::android::text::util::Linkify_MatchFilter& operator=(::android::text::util::Linkify_MatchFilter&& x) {obj = std::move(x.obj); return *this;}
    
    bool acceptMatch(const ::java::lang::CharSequence&, int32_t, int32_t) const ;

};
}
}
}


