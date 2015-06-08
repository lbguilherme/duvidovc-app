#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Fragment.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace view { class LayoutInflater; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace widget { class ListAdapter; } }
namespace android { namespace widget { class ListView; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace app {
class ListFragment : public virtual ::java::lang::Object,
                     public virtual ::android::app::Fragment {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListFragment(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Fragment(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListFragment(const ::android::app::ListFragment& x) : ::java::lang::Object((jobject)0), ::android::app::Fragment((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj;}
    ListFragment(::android::app::ListFragment&& x) : ::java::lang::Object((jobject)0), ::android::app::Fragment((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ListFragment& operator=(const ::android::app::ListFragment& x) {obj = x.obj; return *this;}
    ::android::app::ListFragment& operator=(::android::app::ListFragment&& x) {obj = std::move(x.obj); return *this;}
    
    ListFragment();
    ::android::view::View onCreateView(const ::android::view::LayoutInflater&, const ::android::view::ViewGroup&, const ::android::os::Bundle&) const;
    void onViewCreated(const ::android::view::View&, const ::android::os::Bundle&) const;
    void onDestroyView() const;
    void onListItemClick(const ::android::widget::ListView&, const ::android::view::View&, int32_t, int64_t) const;
    void setListAdapter(const ::android::widget::ListAdapter&) const;
    void setSelection(int32_t) const;
    int32_t getSelectedItemPosition() const;
    int64_t getSelectedItemId() const;
    ::android::widget::ListView getListView() const;
    void setEmptyText(const ::java::lang::CharSequence&) const;
    void setListShown(bool) const;
    void setListShownNoAnimation(bool) const;
    ::android::widget::ListAdapter getListAdapter() const;

};
}
}


