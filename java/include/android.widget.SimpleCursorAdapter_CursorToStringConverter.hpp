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
class SimpleCursorAdapter_CursorToStringConverter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SimpleCursorAdapter_CursorToStringConverter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SimpleCursorAdapter_CursorToStringConverter(const ::android::widget::SimpleCursorAdapter_CursorToStringConverter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SimpleCursorAdapter_CursorToStringConverter(::android::widget::SimpleCursorAdapter_CursorToStringConverter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SimpleCursorAdapter_CursorToStringConverter& operator=(const ::android::widget::SimpleCursorAdapter_CursorToStringConverter& x) {obj = x.obj; return *this;}
    ::android::widget::SimpleCursorAdapter_CursorToStringConverter& operator=(::android::widget::SimpleCursorAdapter_CursorToStringConverter&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::CharSequence convertToString(const ::android::database::Cursor&) const;

};
}
}


