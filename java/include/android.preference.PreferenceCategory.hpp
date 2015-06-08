#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.preference.PreferenceGroup.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace preference {
class PreferenceCategory : public virtual ::java::lang::Object,
                           public virtual ::android::preference::PreferenceGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreferenceCategory(jobject _obj) : ::java::lang::Object(_obj), ::android::preference::Preference(_obj), ::android::preference::PreferenceGroup(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreferenceCategory(const ::android::preference::PreferenceCategory& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceGroup((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    PreferenceCategory(::android::preference::PreferenceCategory&& x) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceGroup((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::preference::PreferenceCategory& operator=(const ::android::preference::PreferenceCategory& x) {obj = x.obj; return *this;}
    ::android::preference::PreferenceCategory& operator=(::android::preference::PreferenceCategory&& x) {obj = std::move(x.obj); return *this;}
    
    PreferenceCategory(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    PreferenceCategory(const ::android::content::Context&, const ::android::util::AttributeSet&);
    PreferenceCategory(const ::android::content::Context&);
    bool isEnabled() const;

};
}
}


