#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class SearchView_OnSuggestionListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchView_OnSuggestionListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchView_OnSuggestionListener(const ::android::widget::SearchView_OnSuggestionListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SearchView_OnSuggestionListener(::android::widget::SearchView_OnSuggestionListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SearchView_OnSuggestionListener& operator=(const ::android::widget::SearchView_OnSuggestionListener& x) {obj = x.obj; return *this;}
    ::android::widget::SearchView_OnSuggestionListener& operator=(::android::widget::SearchView_OnSuggestionListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onSuggestionSelect(int32_t) const ;
    bool onSuggestionClick(int32_t) const ;

};
}
}


