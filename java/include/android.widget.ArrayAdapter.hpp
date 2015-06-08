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
namespace android { namespace widget { class ArrayAdapter; } }
namespace android { namespace widget { class Filter; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Comparator; } }
namespace java { namespace util { class List; } }

namespace android {
namespace widget {
class ArrayAdapter : public virtual ::java::lang::Object,
                     public virtual ::android::widget::BaseAdapter,
                     public virtual ::android::widget::Filterable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ArrayAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::Adapter(_obj), ::android::widget::BaseAdapter(_obj), ::android::widget::Filterable(_obj), ::android::widget::ListAdapter(_obj), ::android::widget::SpinnerAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ArrayAdapter(const ::android::widget::ArrayAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj;}
    ArrayAdapter(::android::widget::ArrayAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ArrayAdapter& operator=(const ::android::widget::ArrayAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::ArrayAdapter& operator=(::android::widget::ArrayAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    ArrayAdapter(const ::android::content::Context&, int32_t);
    ArrayAdapter(const ::android::content::Context&, int32_t, int32_t);
    ArrayAdapter(const ::android::content::Context&, int32_t, const std::vector< ::java::lang::Object>&);
    ArrayAdapter(const ::android::content::Context&, int32_t, int32_t, const std::vector< ::java::lang::Object>&);
    ArrayAdapter(const ::android::content::Context&, int32_t, const ::java::util::List&);
    ArrayAdapter(const ::android::content::Context&, int32_t, int32_t, const ::java::util::List&);
    void add(const ::java::lang::Object&) const;
    void addAll(const ::java::util::Collection&) const;
    void addAll(const std::vector< ::java::lang::Object>&) const;
    void insert(const ::java::lang::Object&, int32_t) const;
    void remove(const ::java::lang::Object&) const;
    void clear() const;
    void sort(const ::java::util::Comparator&) const;
    void notifyDataSetChanged() const;
    void setNotifyOnChange(bool) const;
    ::android::content::Context getContext() const;
    int32_t getCount() const;
    ::java::lang::Object getItem(int32_t) const;
    int32_t getPosition(const ::java::lang::Object&) const;
    int64_t getItemId(int32_t) const;
    ::android::view::View getView(int32_t, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    void setDropDownViewResource(int32_t) const;
    ::android::view::View getDropDownView(int32_t, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    static ::android::widget::ArrayAdapter createFromResource(const ::android::content::Context&, int32_t, int32_t);
    ::android::widget::Filter getFilter() const;

};
}
}


