#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.DialogInterface_OnCancelListener.hpp"
#include "android.content.DialogInterface_OnDismissListener.hpp"

namespace android { namespace app { class SearchManager_OnCancelListener; } }
namespace android { namespace app { class SearchManager_OnDismissListener; } }
namespace android { namespace app { class SearchableInfo; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class DialogInterface; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace app {
class SearchManager : public virtual ::java::lang::Object,
                      public virtual ::android::content::DialogInterface_OnCancelListener,
                      public virtual ::android::content::DialogInterface_OnDismissListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchManager(jobject _obj) : ::java::lang::Object(_obj), ::android::content::DialogInterface_OnCancelListener(_obj), ::android::content::DialogInterface_OnDismissListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchManager(const ::android::app::SearchManager& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnCancelListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0) {obj = x.obj;}
    SearchManager(::android::app::SearchManager&& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnCancelListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::SearchManager& operator=(const ::android::app::SearchManager& x) {obj = x.obj; return *this;}
    ::android::app::SearchManager& operator=(::android::app::SearchManager&& x) {obj = std::move(x.obj); return *this;}
    
    void startSearch(const ::java::lang::String&, bool, const ::android::content::ComponentName&, const ::android::os::Bundle&, bool) const ;
    void triggerSearch(const ::java::lang::String&, const ::android::content::ComponentName&, const ::android::os::Bundle&) const ;
    void stopSearch() const ;
    void setOnDismissListener(const ::android::app::SearchManager_OnDismissListener&) const ;
    void setOnCancelListener(const ::android::app::SearchManager_OnCancelListener&) const ;
    void onCancel(const ::android::content::DialogInterface&) const ;
    void onDismiss(const ::android::content::DialogInterface&) const ;
    ::android::app::SearchableInfo getSearchableInfo(const ::android::content::ComponentName&) const ;
    ::java::util::List getSearchablesInGlobalSearch() const ;

};
}
}

#include "android.app.SearchManager_OnCancelListener.hpp"
#include "android.app.SearchManager_OnDismissListener.hpp"

