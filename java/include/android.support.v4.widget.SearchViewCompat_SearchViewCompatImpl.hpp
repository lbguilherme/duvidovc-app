#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace support { namespace v4 { namespace widget { class SearchViewCompat_OnCloseListenerCompat; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class SearchViewCompat_OnQueryTextListenerCompat; } } } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SearchViewCompat_SearchViewCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchViewCompat_SearchViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchViewCompat_SearchViewCompatImpl(const ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SearchViewCompat_SearchViewCompatImpl(::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl& operator=(const ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl& operator=(::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View newSearchView(const ::android::content::Context&) const ;
    void setSearchableInfo(const ::android::view::View&, const ::android::content::ComponentName&) const ;
    void setImeOptions(const ::android::view::View&, int32_t) const ;
    void setInputType(const ::android::view::View&, int32_t) const ;
    ::java::lang::Object newOnQueryTextListener(const ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat&) const ;
    void setOnQueryTextListener(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    ::java::lang::Object newOnCloseListener(const ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat&) const ;
    void setOnCloseListener(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    ::java::lang::CharSequence getQuery(const ::android::view::View&) const ;
    void setQuery(const ::android::view::View&, const ::java::lang::CharSequence&, bool) const ;
    void setQueryHint(const ::android::view::View&, const ::java::lang::CharSequence&) const ;
    void setIconified(const ::android::view::View&, bool) const ;
    bool isIconified(const ::android::view::View&) const ;
    void setSubmitButtonEnabled(const ::android::view::View&, bool) const ;
    bool isSubmitButtonEnabled(const ::android::view::View&) const ;
    void setQueryRefinementEnabled(const ::android::view::View&, bool) const ;
    bool isQueryRefinementEnabled(const ::android::view::View&) const ;
    void setMaxWidth(const ::android::view::View&, int32_t) const ;

};
}
}
}
}


