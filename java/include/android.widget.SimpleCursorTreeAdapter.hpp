#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ResourceCursorTreeAdapter.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace widget { class SimpleCursorTreeAdapter_ViewBinder; } }
namespace android { namespace widget { class TextView; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class SimpleCursorTreeAdapter : public virtual ::java::lang::Object,
                                public virtual ::android::widget::ResourceCursorTreeAdapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SimpleCursorTreeAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::BaseExpandableListAdapter(_obj), ::android::widget::CursorTreeAdapter(_obj), ::android::widget::ExpandableListAdapter(_obj), ::android::widget::Filterable(_obj), ::android::widget::HeterogeneousExpandableList(_obj), ::android::widget::ResourceCursorTreeAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SimpleCursorTreeAdapter(const ::android::widget::SimpleCursorTreeAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::CursorTreeAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0), ::android::widget::ResourceCursorTreeAdapter((jobject)0) {obj = x.obj;}
    SimpleCursorTreeAdapter(::android::widget::SimpleCursorTreeAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::CursorTreeAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0), ::android::widget::ResourceCursorTreeAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SimpleCursorTreeAdapter& operator=(const ::android::widget::SimpleCursorTreeAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::SimpleCursorTreeAdapter& operator=(::android::widget::SimpleCursorTreeAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    SimpleCursorTreeAdapter(const ::android::content::Context&, const ::android::database::Cursor&, int32_t, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&, int32_t, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&);
    SimpleCursorTreeAdapter(const ::android::content::Context&, const ::android::database::Cursor&, int32_t, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&);
    SimpleCursorTreeAdapter(const ::android::content::Context&, const ::android::database::Cursor&, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&, int32_t, const std::vector< ::java::lang::String>&, const std::vector< int32_t>&);
    ::android::widget::SimpleCursorTreeAdapter_ViewBinder getViewBinder() const;
    void setViewBinder(const ::android::widget::SimpleCursorTreeAdapter_ViewBinder&) const;
    void setViewText(const ::android::widget::TextView&, const ::java::lang::String&) const;

};
}
}

#include "android.widget.SimpleCursorTreeAdapter_ViewBinder.hpp"

