#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace view {
class ViewGroup_OnHierarchyChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewGroup_OnHierarchyChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewGroup_OnHierarchyChangeListener(const ::android::view::ViewGroup_OnHierarchyChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewGroup_OnHierarchyChangeListener(::android::view::ViewGroup_OnHierarchyChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewGroup_OnHierarchyChangeListener& operator=(const ::android::view::ViewGroup_OnHierarchyChangeListener& x) {obj = x.obj; return *this;}
    ::android::view::ViewGroup_OnHierarchyChangeListener& operator=(::android::view::ViewGroup_OnHierarchyChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onChildViewAdded(const ::android::view::View&, const ::android::view::View&) const ;
    void onChildViewRemoved(const ::android::view::View&, const ::android::view::View&) const ;

};
}
}


