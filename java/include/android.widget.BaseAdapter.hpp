#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ListAdapter.hpp"
#include "android.widget.SpinnerAdapter.hpp"

namespace android { namespace database { class DataSetObserver; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace widget {
class BaseAdapter : public virtual ::java::lang::Object,
                    public virtual ::android::widget::ListAdapter,
                    public virtual ::android::widget::SpinnerAdapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BaseAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::Adapter(_obj), ::android::widget::ListAdapter(_obj), ::android::widget::SpinnerAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BaseAdapter(const ::android::widget::BaseAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj;}
    BaseAdapter(::android::widget::BaseAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::BaseAdapter& operator=(const ::android::widget::BaseAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::BaseAdapter& operator=(::android::widget::BaseAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    BaseAdapter();
    bool hasStableIds() const;
    void registerDataSetObserver(const ::android::database::DataSetObserver&) const;
    void unregisterDataSetObserver(const ::android::database::DataSetObserver&) const;
    void notifyDataSetChanged() const;
    void notifyDataSetInvalidated() const;
    bool areAllItemsEnabled() const;
    bool isEnabled(int32_t) const;
    ::android::view::View getDropDownView(int32_t, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    int32_t getItemViewType(int32_t) const;
    int32_t getViewTypeCount() const;
    bool isEmpty() const;

};
}
}


