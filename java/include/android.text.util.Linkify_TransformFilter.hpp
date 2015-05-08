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
namespace text {
namespace util {
class Linkify_TransformFilter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Linkify_TransformFilter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Linkify_TransformFilter(const ::android::text::util::Linkify_TransformFilter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Linkify_TransformFilter(::android::text::util::Linkify_TransformFilter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::util::Linkify_TransformFilter& operator=(const ::android::text::util::Linkify_TransformFilter& x) {obj = x.obj; return *this;}
    ::android::text::util::Linkify_TransformFilter& operator=(::android::text::util::Linkify_TransformFilter&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String transformUrl(const ::java::util::regex::Matcher&, const ::java::lang::String&) const ;

};
}
}
}


