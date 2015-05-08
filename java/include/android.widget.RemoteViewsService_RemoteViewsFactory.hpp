#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class RemoteViews; } }

namespace android {
namespace widget {
class RemoteViewsService_RemoteViewsFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteViewsService_RemoteViewsFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteViewsService_RemoteViewsFactory(const ::android::widget::RemoteViewsService_RemoteViewsFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RemoteViewsService_RemoteViewsFactory(::android::widget::RemoteViewsService_RemoteViewsFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RemoteViewsService_RemoteViewsFactory& operator=(const ::android::widget::RemoteViewsService_RemoteViewsFactory& x) {obj = x.obj; return *this;}
    ::android::widget::RemoteViewsService_RemoteViewsFactory& operator=(::android::widget::RemoteViewsService_RemoteViewsFactory&& x) {obj = std::move(x.obj); return *this;}
    
    void onCreate() const ;
    void onDataSetChanged() const ;
    void onDestroy() const ;
    int32_t getCount() const ;
    ::android::widget::RemoteViews getViewAt(int32_t) const ;
    ::android::widget::RemoteViews getLoadingView() const ;
    int32_t getViewTypeCount() const ;
    int64_t getItemId(int32_t) const ;
    bool hasStableIds() const ;

};
}
}


