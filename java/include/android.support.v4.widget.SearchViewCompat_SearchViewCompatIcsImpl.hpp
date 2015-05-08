#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.SearchViewCompat_SearchViewCompatHoneycombImpl.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SearchViewCompat_SearchViewCompatIcsImpl : public virtual ::java::lang::Object,
                                                 public virtual ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchViewCompat_SearchViewCompatIcsImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl(_obj), ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl(_obj), ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchViewCompat_SearchViewCompatIcsImpl(const ::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl((jobject)0), ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl((jobject)0), ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl((jobject)0) {obj = x.obj;}
    SearchViewCompat_SearchViewCompatIcsImpl(::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl((jobject)0), ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl((jobject)0), ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl& operator=(const ::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl& operator=(::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View newSearchView(const ::android::content::Context&) const ;
    void setImeOptions(const ::android::view::View&, int32_t) const ;
    void setInputType(const ::android::view::View&, int32_t) const ;

};
}
}
}
}


