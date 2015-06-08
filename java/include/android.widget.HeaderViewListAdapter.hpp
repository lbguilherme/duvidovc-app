#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.Filterable.hpp"
#include "android.widget.WrapperListAdapter.hpp"

namespace android { namespace database { class DataSetObserver; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace widget { class Filter; } }
namespace android { namespace widget { class ListAdapter; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace widget {
class HeaderViewListAdapter : public virtual ::java::lang::Object,
                              public virtual ::android::widget::Filterable,
                              public virtual ::android::widget::WrapperListAdapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HeaderViewListAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::Adapter(_obj), ::android::widget::Filterable(_obj), ::android::widget::ListAdapter(_obj), ::android::widget::WrapperListAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HeaderViewListAdapter(const ::android::widget::HeaderViewListAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::WrapperListAdapter((jobject)0) {obj = x.obj;}
    HeaderViewListAdapter(::android::widget::HeaderViewListAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::WrapperListAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::HeaderViewListAdapter& operator=(const ::android::widget::HeaderViewListAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::HeaderViewListAdapter& operator=(::android::widget::HeaderViewListAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    HeaderViewListAdapter(const ::java::util::ArrayList&, const ::java::util::ArrayList&, const ::android::widget::ListAdapter&);
    int32_t getHeadersCount() const;
    int32_t getFootersCount() const;
    bool isEmpty() const;
    bool removeHeader(const ::android::view::View&) const;
    bool removeFooter(const ::android::view::View&) const;
    int32_t getCount() const;
    bool areAllItemsEnabled() const;
    bool isEnabled(int32_t) const;
    ::java::lang::Object getItem(int32_t) const;
    int64_t getItemId(int32_t) const;
    bool hasStableIds() const;
    ::android::view::View getView(int32_t, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    int32_t getItemViewType(int32_t) const;
    int32_t getViewTypeCount() const;
    void registerDataSetObserver(const ::android::database::DataSetObserver&) const;
    void unregisterDataSetObserver(const ::android::database::DataSetObserver&) const;
    ::android::widget::Filter getFilter() const;
    ::android::widget::ListAdapter getWrappedAdapter() const;

};
}
}


