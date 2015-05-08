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

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SearchViewCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchViewCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchViewCompat(const ::android::support::v4::widget::SearchViewCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SearchViewCompat(::android::support::v4::widget::SearchViewCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SearchViewCompat& operator=(const ::android::support::v4::widget::SearchViewCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SearchViewCompat& operator=(::android::support::v4::widget::SearchViewCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::view::View newSearchView(const ::android::content::Context&);
    static void setSearchableInfo(const ::android::view::View&, const ::android::content::ComponentName&);
    static void setImeOptions(const ::android::view::View&, int32_t);
    static void setInputType(const ::android::view::View&, int32_t);
    static void setOnQueryTextListener(const ::android::view::View&, const ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat&);
    static void setOnCloseListener(const ::android::view::View&, const ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat&);
    static ::java::lang::CharSequence getQuery(const ::android::view::View&);
    static void setQuery(const ::android::view::View&, const ::java::lang::CharSequence&, bool);
    static void setQueryHint(const ::android::view::View&, const ::java::lang::CharSequence&);
    static void setIconified(const ::android::view::View&, bool);
    static bool isIconified(const ::android::view::View&);
    static void setSubmitButtonEnabled(const ::android::view::View&, bool);
    static bool isSubmitButtonEnabled(const ::android::view::View&);
    static void setQueryRefinementEnabled(const ::android::view::View&, bool);
    static bool isQueryRefinementEnabled(const ::android::view::View&);
    static void setMaxWidth(const ::android::view::View&, int32_t);

};
}
}
}
}

#include "android.support.v4.widget.SearchViewCompat_OnCloseListenerCompat.hpp"
#include "android.support.v4.widget.SearchViewCompat_OnQueryTextListenerCompat.hpp"
#include "android.support.v4.widget.SearchViewCompat_SearchViewCompatHoneycombImpl.hpp"
#include "android.support.v4.widget.SearchViewCompat_SearchViewCompatIcsImpl.hpp"
#include "android.support.v4.widget.SearchViewCompat_SearchViewCompatImpl.hpp"
#include "android.support.v4.widget.SearchViewCompat_SearchViewCompatStubImpl.hpp"

