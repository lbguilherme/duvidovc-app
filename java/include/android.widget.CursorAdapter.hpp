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
namespace android { namespace database { class Cursor; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace widget { class Filter; } }
namespace android { namespace widget { class FilterQueryProvider; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace widget {
class CursorAdapter : public virtual ::java::lang::Object,
                      public virtual ::android::widget::BaseAdapter,
                      public virtual ::android::widget::Filterable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CursorAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::Adapter(_obj), ::android::widget::BaseAdapter(_obj), ::android::widget::Filterable(_obj), ::android::widget::ListAdapter(_obj), ::android::widget::SpinnerAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CursorAdapter(const ::android::widget::CursorAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj;}
    CursorAdapter(::android::widget::CursorAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::CursorAdapter& operator=(const ::android::widget::CursorAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::CursorAdapter& operator=(::android::widget::CursorAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    CursorAdapter(const ::android::content::Context&, const ::android::database::Cursor&);
    CursorAdapter(const ::android::content::Context&, const ::android::database::Cursor&, bool);
    CursorAdapter(const ::android::content::Context&, const ::android::database::Cursor&, int32_t);
    ::android::database::Cursor getCursor() const ;
    int32_t getCount() const ;
    ::java::lang::Object getItem(int32_t) const ;
    int64_t getItemId(int32_t) const ;
    bool hasStableIds() const ;
    ::android::view::View getView(int32_t, const ::android::view::View&, const ::android::view::ViewGroup&) const ;
    ::android::view::View getDropDownView(int32_t, const ::android::view::View&, const ::android::view::ViewGroup&) const ;
    ::android::view::View newView(const ::android::content::Context&, const ::android::database::Cursor&, const ::android::view::ViewGroup&) const ;
    ::android::view::View newDropDownView(const ::android::content::Context&, const ::android::database::Cursor&, const ::android::view::ViewGroup&) const ;
    void bindView(const ::android::view::View&, const ::android::content::Context&, const ::android::database::Cursor&) const ;
    void changeCursor(const ::android::database::Cursor&) const ;
    ::android::database::Cursor swapCursor(const ::android::database::Cursor&) const ;
    ::java::lang::CharSequence convertToString(const ::android::database::Cursor&) const ;
    ::android::database::Cursor runQueryOnBackgroundThread(const ::java::lang::CharSequence&) const ;
    ::android::widget::Filter getFilter() const ;
    ::android::widget::FilterQueryProvider getFilterQueryProvider() const ;
    void setFilterQueryProvider(const ::android::widget::FilterQueryProvider&) const ;

};
}
}


