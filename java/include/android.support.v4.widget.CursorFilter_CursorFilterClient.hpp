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
namespace support {
namespace v4 {
namespace widget {
class CursorFilter_CursorFilterClient : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CursorFilter_CursorFilterClient(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CursorFilter_CursorFilterClient(const ::android::support::v4::widget::CursorFilter_CursorFilterClient& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CursorFilter_CursorFilterClient(::android::support::v4::widget::CursorFilter_CursorFilterClient&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::CursorFilter_CursorFilterClient& operator=(const ::android::support::v4::widget::CursorFilter_CursorFilterClient& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::CursorFilter_CursorFilterClient& operator=(::android::support::v4::widget::CursorFilter_CursorFilterClient&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::CharSequence convertToString(const ::android::database::Cursor&) const ;
    ::android::database::Cursor runQueryOnBackgroundThread(const ::java::lang::CharSequence&) const ;
    ::android::database::Cursor getCursor() const ;
    void changeCursor(const ::android::database::Cursor&) const ;

};
}
}
}
}


