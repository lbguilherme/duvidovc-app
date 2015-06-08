#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.BaseAdapter.hpp"
#include "android.widget.Filterable.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace widget { class Filter; } }
namespace android { namespace widget { class ImageView; } }
namespace android { namespace widget { class SimpleAdapter_ViewBinder; } }
namespace android { namespace widget { class TextView; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace widget {
class SimpleAdapter : public virtual ::java::lang::Object,
                      public virtual ::android::widget::BaseAdapter,
                      public virtual ::android::widget::Filterable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SimpleAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::Adapter(_obj), ::android::widget::BaseAdapter(_obj), ::android::widget::Filterable(_obj), ::android::widget::ListAdapter(_obj), ::android::widget::SpinnerAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SimpleAdapter(const ::android::widget::SimpleAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj;}
    SimpleAdapter(::android::widget::SimpleAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SimpleAdapter& operator=(const ::android::widget::SimpleAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::SimpleAdapter& operator=(::android::widget::SimpleAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    SimpleAdapter(const ::android::content::Context&, const ::java::util::List&, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&);
    int32_t getCount() const;
    ::java::lang::Object getItem(int32_t) const;
    int64_t getItemId(int32_t) const;
    ::android::view::View getView(int32_t, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    void setDropDownViewResource(int32_t) const;
    ::android::view::View getDropDownView(int32_t, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    ::android::widget::SimpleAdapter_ViewBinder getViewBinder() const;
    void setViewBinder(const ::android::widget::SimpleAdapter_ViewBinder&) const;
    void setViewImage(const ::android::widget::ImageView&, int32_t) const;
    void setViewImage(const ::android::widget::ImageView&, const ::java::lang::String&) const;
    void setViewText(const ::android::widget::TextView&, const ::java::lang::String&) const;
    ::android::widget::Filter getFilter() const;

};
}
}

#include "android.widget.SimpleAdapter_ViewBinder.hpp"

