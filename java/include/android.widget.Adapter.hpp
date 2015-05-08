#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace database { class DataSetObserver; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace widget {
class Adapter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Adapter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Adapter(const ::android::widget::Adapter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Adapter(::android::widget::Adapter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Adapter& operator=(const ::android::widget::Adapter& x) {obj = x.obj; return *this;}
    ::android::widget::Adapter& operator=(::android::widget::Adapter&& x) {obj = std::move(x.obj); return *this;}
    
    void registerDataSetObserver(const ::android::database::DataSetObserver&) const ;
    void unregisterDataSetObserver(const ::android::database::DataSetObserver&) const ;
    int32_t getCount() const ;
    ::java::lang::Object getItem(int32_t) const ;
    int64_t getItemId(int32_t) const ;
    bool hasStableIds() const ;
    ::android::view::View getView(int32_t, const ::android::view::View&, const ::android::view::ViewGroup&) const ;
    int32_t getItemViewType(int32_t) const ;
    int32_t getViewTypeCount() const ;
    bool isEmpty() const ;

};
}
}


