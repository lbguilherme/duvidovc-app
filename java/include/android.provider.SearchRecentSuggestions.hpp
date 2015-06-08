#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class SearchRecentSuggestions : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchRecentSuggestions(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchRecentSuggestions(const ::android::provider::SearchRecentSuggestions& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SearchRecentSuggestions(::android::provider::SearchRecentSuggestions&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::SearchRecentSuggestions& operator=(const ::android::provider::SearchRecentSuggestions& x) {obj = x.obj; return *this;}
    ::android::provider::SearchRecentSuggestions& operator=(::android::provider::SearchRecentSuggestions&& x) {obj = std::move(x.obj); return *this;}
    
    SearchRecentSuggestions(const ::android::content::Context&, const ::java::lang::String&, int32_t);
    void saveRecentQuery(const ::java::lang::String&, const ::java::lang::String&) const;
    void clearHistory() const;

};
}
}


