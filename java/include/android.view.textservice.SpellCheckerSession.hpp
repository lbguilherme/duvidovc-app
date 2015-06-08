#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { namespace textservice { class SpellCheckerInfo; } } }
namespace android { namespace view { namespace textservice { class TextInfo; } } }

namespace android {
namespace view {
namespace textservice {
class SpellCheckerSession : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpellCheckerSession(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpellCheckerSession(const ::android::view::textservice::SpellCheckerSession& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SpellCheckerSession(::android::view::textservice::SpellCheckerSession&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::textservice::SpellCheckerSession& operator=(const ::android::view::textservice::SpellCheckerSession& x) {obj = x.obj; return *this;}
    ::android::view::textservice::SpellCheckerSession& operator=(::android::view::textservice::SpellCheckerSession&& x) {obj = std::move(x.obj); return *this;}
    
    bool isSessionDisconnected() const;
    ::android::view::textservice::SpellCheckerInfo getSpellChecker() const;
    void cancel() const;
    void close() const;
    void getSuggestions(const ::android::view::textservice::TextInfo&, int32_t) const;
    void getSuggestions(const std::vector< ::android::view::textservice::TextInfo>&, int32_t, bool) const;

};
}
}
}

#include "android.view.textservice.SpellCheckerSession_SpellCheckerSessionListener.hpp"

