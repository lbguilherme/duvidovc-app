#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class Spannable; } }
namespace android { namespace text { namespace util { class Linkify_MatchFilter; } } }
namespace android { namespace text { namespace util { class Linkify_TransformFilter; } } }
namespace android { namespace widget { class TextView; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace regex { class Pattern; } } }

namespace android {
namespace text {
namespace util {
class Linkify : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Linkify(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Linkify(const ::android::text::util::Linkify& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Linkify(::android::text::util::Linkify&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::util::Linkify& operator=(const ::android::text::util::Linkify& x) {obj = x.obj; return *this;}
    ::android::text::util::Linkify& operator=(::android::text::util::Linkify&& x) {obj = std::move(x.obj); return *this;}
    
    Linkify();
    static bool addLinks(const ::android::text::Spannable&, int32_t);
    static bool addLinks(const ::android::widget::TextView&, int32_t);
    static void addLinks(const ::android::widget::TextView&, const ::java::util::regex::Pattern&, const ::java::lang::String&);
    static void addLinks(const ::android::widget::TextView&, const ::java::util::regex::Pattern&, const ::java::lang::String&, const ::android::text::util::Linkify_MatchFilter&, const ::android::text::util::Linkify_TransformFilter&);
    static bool addLinks(const ::android::text::Spannable&, const ::java::util::regex::Pattern&, const ::java::lang::String&);
    static bool addLinks(const ::android::text::Spannable&, const ::java::util::regex::Pattern&, const ::java::lang::String&, const ::android::text::util::Linkify_MatchFilter&, const ::android::text::util::Linkify_TransformFilter&);

};
}
}
}

#include "android.text.util.Linkify_MatchFilter.hpp"
#include "android.text.util.Linkify_TransformFilter.hpp"

