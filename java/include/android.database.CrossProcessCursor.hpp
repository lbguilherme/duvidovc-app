#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.Cursor.hpp"

namespace android { namespace database { class CursorWindow; } }

namespace android {
namespace database {
class CrossProcessCursor : public virtual ::java::lang::Object,
                           public virtual ::android::database::Cursor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CrossProcessCursor(jobject _obj) : ::java::lang::Object(_obj), ::android::database::Cursor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CrossProcessCursor(const ::android::database::CrossProcessCursor& x) : ::java::lang::Object((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj;}
    CrossProcessCursor(::android::database::CrossProcessCursor&& x) : ::java::lang::Object((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::CrossProcessCursor& operator=(const ::android::database::CrossProcessCursor& x) {obj = x.obj; return *this;}
    ::android::database::CrossProcessCursor& operator=(::android::database::CrossProcessCursor&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::database::CursorWindow getWindow() const;
    void fillWindow(int32_t, const ::android::database::CursorWindow&) const;
    bool onMove(int32_t, int32_t) const;

};
}
}


