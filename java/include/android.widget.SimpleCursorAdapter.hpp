#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ResourceCursorAdapter.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class ImageView; } }
namespace android { namespace widget { class SimpleCursorAdapter_CursorToStringConverter; } }
namespace android { namespace widget { class SimpleCursorAdapter_ViewBinder; } }
namespace android { namespace widget { class TextView; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class SimpleCursorAdapter : public virtual ::java::lang::Object,
                            public virtual ::android::widget::ResourceCursorAdapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SimpleCursorAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::Adapter(_obj), ::android::widget::BaseAdapter(_obj), ::android::widget::CursorAdapter(_obj), ::android::widget::Filterable(_obj), ::android::widget::ListAdapter(_obj), ::android::widget::ResourceCursorAdapter(_obj), ::android::widget::SpinnerAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SimpleCursorAdapter(const ::android::widget::SimpleCursorAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::CursorAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::ResourceCursorAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj;}
    SimpleCursorAdapter(::android::widget::SimpleCursorAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::CursorAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::ResourceCursorAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SimpleCursorAdapter& operator=(const ::android::widget::SimpleCursorAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::SimpleCursorAdapter& operator=(::android::widget::SimpleCursorAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    SimpleCursorAdapter(const ::android::content::Context&, int32_t, const ::android::database::Cursor&, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&);
    SimpleCursorAdapter(const ::android::content::Context&, int32_t, const ::android::database::Cursor&, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&, int32_t);
    void bindView(const ::android::view::View&, const ::android::content::Context&, const ::android::database::Cursor&) const ;
    ::android::widget::SimpleCursorAdapter_ViewBinder getViewBinder() const ;
    void setViewBinder(const ::android::widget::SimpleCursorAdapter_ViewBinder&) const ;
    void setViewImage(const ::android::widget::ImageView&, const ::java::lang::String&) const ;
    void setViewText(const ::android::widget::TextView&, const ::java::lang::String&) const ;
    int32_t getStringConversionColumn() const ;
    void setStringConversionColumn(int32_t) const ;
    ::android::widget::SimpleCursorAdapter_CursorToStringConverter getCursorToStringConverter() const ;
    void setCursorToStringConverter(const ::android::widget::SimpleCursorAdapter_CursorToStringConverter&) const ;
    ::java::lang::CharSequence convertToString(const ::android::database::Cursor&) const ;
    ::android::database::Cursor swapCursor(const ::android::database::Cursor&) const ;
    void changeCursorAndColumns(const ::android::database::Cursor&, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&) const ;

};
}
}

#include "android.widget.SimpleCursorAdapter_CursorToStringConverter.hpp"
#include "android.widget.SimpleCursorAdapter_ViewBinder.hpp"

