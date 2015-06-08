#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace view { namespace textservice { class SuggestionsInfo; } } }
namespace android { namespace view { namespace textservice { class TextInfo; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace service {
namespace textservice {
class SpellCheckerService_Session : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpellCheckerService_Session(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpellCheckerService_Session(const ::android::service::textservice::SpellCheckerService_Session& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SpellCheckerService_Session(::android::service::textservice::SpellCheckerService_Session&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::service::textservice::SpellCheckerService_Session& operator=(const ::android::service::textservice::SpellCheckerService_Session& x) {obj = x.obj; return *this;}
    ::android::service::textservice::SpellCheckerService_Session& operator=(::android::service::textservice::SpellCheckerService_Session&& x) {obj = std::move(x.obj); return *this;}
    
    SpellCheckerService_Session();
    void onCreate() const;
    ::android::view::textservice::SuggestionsInfo onGetSuggestions(const ::android::view::textservice::TextInfo&, int32_t) const;
    std::vector< ::android::view::textservice::SuggestionsInfo> onGetSuggestionsMultiple(const std::vector< ::android::view::textservice::TextInfo>&, int32_t, bool) const;
    void onCancel() const;
    void onClose() const;
    ::java::lang::String getLocale() const;
    ::android::os::Bundle getBundle() const;

};
}
}
}


