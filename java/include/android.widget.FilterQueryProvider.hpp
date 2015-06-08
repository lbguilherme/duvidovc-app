#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace database { class Cursor; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace widget {
class FilterQueryProvider : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FilterQueryProvider(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FilterQueryProvider(const ::android::widget::FilterQueryProvider& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FilterQueryProvider(::android::widget::FilterQueryProvider&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::FilterQueryProvider& operator=(const ::android::widget::FilterQueryProvider& x) {obj = x.obj; return *this;}
    ::android::widget::FilterQueryProvider& operator=(::android::widget::FilterQueryProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::database::Cursor runQuery(const ::java::lang::CharSequence&) const;

};
}
}


