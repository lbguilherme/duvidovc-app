#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SearchViewCompat_OnQueryTextListenerCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchViewCompat_OnQueryTextListenerCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchViewCompat_OnQueryTextListenerCompat(const ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SearchViewCompat_OnQueryTextListenerCompat(::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat& operator=(const ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat& operator=(::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat&& x) {obj = std::move(x.obj); return *this;}
    
    SearchViewCompat_OnQueryTextListenerCompat();
    bool onQueryTextSubmit(const ::java::lang::String&) const ;
    bool onQueryTextChange(const ::java::lang::String&) const ;

};
}
}
}
}


