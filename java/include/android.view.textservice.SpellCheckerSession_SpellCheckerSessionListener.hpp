#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { namespace textservice { class SuggestionsInfo; } } }

namespace android {
namespace view {
namespace textservice {
class SpellCheckerSession_SpellCheckerSessionListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpellCheckerSession_SpellCheckerSessionListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpellCheckerSession_SpellCheckerSessionListener(const ::android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SpellCheckerSession_SpellCheckerSessionListener(::android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener& operator=(const ::android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener& x) {obj = x.obj; return *this;}
    ::android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener& operator=(::android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onGetSuggestions(const std::vector< ::android::view::textservice::SuggestionsInfo>&) const;

};
}
}
}


