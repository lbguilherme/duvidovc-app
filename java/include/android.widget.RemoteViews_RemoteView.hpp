#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"


namespace android {
namespace widget {
class RemoteViews_RemoteView : public virtual ::java::lang::Object,
                               public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteViews_RemoteView(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteViews_RemoteView(const ::android::widget::RemoteViews_RemoteView& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    RemoteViews_RemoteView(::android::widget::RemoteViews_RemoteView&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RemoteViews_RemoteView& operator=(const ::android::widget::RemoteViews_RemoteView& x) {obj = x.obj; return *this;}
    ::android::widget::RemoteViews_RemoteView& operator=(::android::widget::RemoteViews_RemoteView&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


