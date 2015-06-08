#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace widget {
class SectionIndexer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SectionIndexer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SectionIndexer(const ::android::widget::SectionIndexer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SectionIndexer(::android::widget::SectionIndexer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SectionIndexer& operator=(const ::android::widget::SectionIndexer& x) {obj = x.obj; return *this;}
    ::android::widget::SectionIndexer& operator=(::android::widget::SectionIndexer&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::java::lang::Object> getSections() const;
    int32_t getPositionForSection(int32_t) const;
    int32_t getSectionForPosition(int32_t) const;

};
}
}


