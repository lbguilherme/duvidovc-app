#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.FragmentManager_OnBackStackChangedListener.hpp"
#include "android.view.ViewGroup.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace app { class FragmentBreadCrumbs_OnBreadCrumbClickListener; } }
namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View_OnClickListener; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace app {
class FragmentBreadCrumbs : public virtual ::java::lang::Object,
                            public virtual ::android::app::FragmentManager_OnBackStackChangedListener,
                            public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentBreadCrumbs(jobject _obj) : ::java::lang::Object(_obj), ::android::app::FragmentManager_OnBackStackChangedListener(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentBreadCrumbs(const ::android::app::FragmentBreadCrumbs& x) : ::java::lang::Object((jobject)0), ::android::app::FragmentManager_OnBackStackChangedListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    FragmentBreadCrumbs(::android::app::FragmentBreadCrumbs&& x) : ::java::lang::Object((jobject)0), ::android::app::FragmentManager_OnBackStackChangedListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::FragmentBreadCrumbs& operator=(const ::android::app::FragmentBreadCrumbs& x) {obj = x.obj; return *this;}
    ::android::app::FragmentBreadCrumbs& operator=(::android::app::FragmentBreadCrumbs&& x) {obj = std::move(x.obj); return *this;}
    
    FragmentBreadCrumbs(const ::android::content::Context&);
    FragmentBreadCrumbs(const ::android::content::Context&, const ::android::util::AttributeSet&);
    FragmentBreadCrumbs(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setActivity(const ::android::app::Activity&) const ;
    void setMaxVisible(int32_t) const ;
    void setParentTitle(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&, const ::android::view::View_OnClickListener&) const ;
    void setOnBreadCrumbClickListener(const ::android::app::FragmentBreadCrumbs_OnBreadCrumbClickListener&) const ;
    void setTitle(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&) const ;
    void onBackStackChanged() const ;

};
}
}

#include "android.app.FragmentBreadCrumbs_OnBreadCrumbClickListener.hpp"

