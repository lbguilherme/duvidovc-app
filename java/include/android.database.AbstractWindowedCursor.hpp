#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.AbstractCursor.hpp"

namespace android { namespace database { class CharArrayBuffer; } }
namespace android { namespace database { class CursorWindow; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
class AbstractWindowedCursor : public virtual ::java::lang::Object,
                               public virtual ::android::database::AbstractCursor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractWindowedCursor(jobject _obj) : ::java::lang::Object(_obj), ::android::database::AbstractCursor(_obj), ::android::database::CrossProcessCursor(_obj), ::android::database::Cursor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractWindowedCursor(const ::android::database::AbstractWindowedCursor& x) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj;}
    AbstractWindowedCursor(::android::database::AbstractWindowedCursor&& x) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::AbstractWindowedCursor& operator=(const ::android::database::AbstractWindowedCursor& x) {obj = x.obj; return *this;}
    ::android::database::AbstractWindowedCursor& operator=(::android::database::AbstractWindowedCursor&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractWindowedCursor();
    std::vector< int8_t> getBlob(int32_t) const;
    ::java::lang::String getString(int32_t) const;
    void copyStringToBuffer(int32_t, const ::android::database::CharArrayBuffer&) const;
    int16_t getShort(int32_t) const;
    int32_t getInt(int32_t) const;
    int64_t getLong(int32_t) const;
    float getFloat(int32_t) const;
    double getDouble(int32_t) const;
    bool isNull(int32_t) const;
    bool isBlob(int32_t) const;
    bool isString(int32_t) const;
    bool isLong(int32_t) const;
    bool isFloat(int32_t) const;
    int32_t getType(int32_t) const;
    ::android::database::CursorWindow getWindow() const;
    void setWindow(const ::android::database::CursorWindow&) const;
    bool hasWindow() const;

};
}
}


