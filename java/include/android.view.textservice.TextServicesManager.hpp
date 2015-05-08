#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace view { namespace textservice { class SpellCheckerSession; } } }
namespace android { namespace view { namespace textservice { class SpellCheckerSession_SpellCheckerSessionListener; } } }
namespace java { namespace util { class Locale; } }

namespace android {
namespace view {
namespace textservice {
class TextServicesManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextServicesManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextServicesManager(const ::android::view::textservice::TextServicesManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextServicesManager(::android::view::textservice::TextServicesManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::textservice::TextServicesManager& operator=(const ::android::view::textservice::TextServicesManager& x) {obj = x.obj; return *this;}
    ::android::view::textservice::TextServicesManager& operator=(::android::view::textservice::TextServicesManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::textservice::SpellCheckerSession newSpellCheckerSession(const ::android::os::Bundle&, const ::java::util::Locale&, const ::android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener&, bool) const ;

};
}
}
}


