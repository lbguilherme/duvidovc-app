#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class SearchView_OnQueryTextListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchView_OnQueryTextListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchView_OnQueryTextListener(const ::android::widget::SearchView_OnQueryTextListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SearchView_OnQueryTextListener(::android::widget::SearchView_OnQueryTextListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SearchView_OnQueryTextListener& operator=(const ::android::widget::SearchView_OnQueryTextListener& x) {obj = x.obj; return *this;}
    ::android::widget::SearchView_OnQueryTextListener& operator=(::android::widget::SearchView_OnQueryTextListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onQueryTextSubmit(const ::java::lang::String&) const;
    bool onQueryTextChange(const ::java::lang::String&) const;

};
}
}


