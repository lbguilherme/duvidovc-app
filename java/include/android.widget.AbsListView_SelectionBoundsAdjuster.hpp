#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Rect; } }

namespace android {
namespace widget {
class AbsListView_SelectionBoundsAdjuster : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbsListView_SelectionBoundsAdjuster(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbsListView_SelectionBoundsAdjuster(const ::android::widget::AbsListView_SelectionBoundsAdjuster& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AbsListView_SelectionBoundsAdjuster(::android::widget::AbsListView_SelectionBoundsAdjuster&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AbsListView_SelectionBoundsAdjuster& operator=(const ::android::widget::AbsListView_SelectionBoundsAdjuster& x) {obj = x.obj; return *this;}
    ::android::widget::AbsListView_SelectionBoundsAdjuster& operator=(::android::widget::AbsListView_SelectionBoundsAdjuster&& x) {obj = std::move(x.obj); return *this;}
    
    void adjustListItemSelectionBounds(const ::android::graphics::Rect&) const ;

};
}
}


