#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class Filter; } }

namespace android {
namespace widget {
class Filterable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Filterable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Filterable(const ::android::widget::Filterable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Filterable(::android::widget::Filterable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Filterable& operator=(const ::android::widget::Filterable& x) {obj = x.obj; return *this;}
    ::android::widget::Filterable& operator=(::android::widget::Filterable&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::widget::Filter getFilter() const ;

};
}
}


