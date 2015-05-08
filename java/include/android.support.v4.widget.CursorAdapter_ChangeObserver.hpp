#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.ContentObserver.hpp"

namespace android { namespace support { namespace v4 { namespace widget { class CursorAdapter; } } } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class CursorAdapter_ChangeObserver : public virtual ::java::lang::Object,
                                     public virtual ::android::database::ContentObserver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CursorAdapter_ChangeObserver(jobject _obj) : ::java::lang::Object(_obj), ::android::database::ContentObserver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CursorAdapter_ChangeObserver(const ::android::support::v4::widget::CursorAdapter_ChangeObserver& x) : ::java::lang::Object((jobject)0), ::android::database::ContentObserver((jobject)0) {obj = x.obj;}
    CursorAdapter_ChangeObserver(::android::support::v4::widget::CursorAdapter_ChangeObserver&& x) : ::java::lang::Object((jobject)0), ::android::database::ContentObserver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::CursorAdapter_ChangeObserver& operator=(const ::android::support::v4::widget::CursorAdapter_ChangeObserver& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::CursorAdapter_ChangeObserver& operator=(::android::support::v4::widget::CursorAdapter_ChangeObserver&& x) {obj = std::move(x.obj); return *this;}
    
    CursorAdapter_ChangeObserver(const ::android::support::v4::widget::CursorAdapter&);
    bool deliverSelfNotifications() const ;
    void onChange(bool) const ;

};
}
}
}
}


