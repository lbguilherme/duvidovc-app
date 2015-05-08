#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace widget {
class SearchViewCompat_OnCloseListenerCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchViewCompat_OnCloseListenerCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchViewCompat_OnCloseListenerCompat(const ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SearchViewCompat_OnCloseListenerCompat(::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat& operator=(const ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat& operator=(::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat&& x) {obj = std::move(x.obj); return *this;}
    
    SearchViewCompat_OnCloseListenerCompat();
    bool onClose() const ;

};
}
}
}
}


