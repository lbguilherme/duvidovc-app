#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.CrossProcessCursor.hpp"
#include "android.database.CursorWrapper.hpp"

namespace android { namespace database { class Cursor; } }
namespace android { namespace database { class CursorWindow; } }

namespace android {
namespace database {
class CrossProcessCursorWrapper : public virtual ::java::lang::Object,
                                  public virtual ::android::database::CrossProcessCursor,
                                  public virtual ::android::database::CursorWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CrossProcessCursorWrapper(jobject _obj) : ::java::lang::Object(_obj), ::android::database::CrossProcessCursor(_obj), ::android::database::Cursor(_obj), ::android::database::CursorWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CrossProcessCursorWrapper(const ::android::database::CrossProcessCursorWrapper& x) : ::java::lang::Object((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0), ::android::database::CursorWrapper((jobject)0) {obj = x.obj;}
    CrossProcessCursorWrapper(::android::database::CrossProcessCursorWrapper&& x) : ::java::lang::Object((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0), ::android::database::CursorWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::CrossProcessCursorWrapper& operator=(const ::android::database::CrossProcessCursorWrapper& x) {obj = x.obj; return *this;}
    ::android::database::CrossProcessCursorWrapper& operator=(::android::database::CrossProcessCursorWrapper&& x) {obj = std::move(x.obj); return *this;}
    
    CrossProcessCursorWrapper(const ::android::database::Cursor&);
    void fillWindow(int32_t, const ::android::database::CursorWindow&) const;
    ::android::database::CursorWindow getWindow() const;
    bool onMove(int32_t, int32_t) const;

};
}
}


