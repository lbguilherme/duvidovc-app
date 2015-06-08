#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.AbstractCursor.hpp"

namespace android { namespace database { class ContentObserver; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace database { class DataSetObserver; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
class MergeCursor : public virtual ::java::lang::Object,
                    public virtual ::android::database::AbstractCursor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MergeCursor(jobject _obj) : ::java::lang::Object(_obj), ::android::database::AbstractCursor(_obj), ::android::database::CrossProcessCursor(_obj), ::android::database::Cursor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MergeCursor(const ::android::database::MergeCursor& x) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj;}
    MergeCursor(::android::database::MergeCursor&& x) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::MergeCursor& operator=(const ::android::database::MergeCursor& x) {obj = x.obj; return *this;}
    ::android::database::MergeCursor& operator=(::android::database::MergeCursor&& x) {obj = std::move(x.obj); return *this;}
    
    MergeCursor(const std::vector< ::android::database::Cursor>&);
    int32_t getCount() const;
    bool onMove(int32_t, int32_t) const;
    ::java::lang::String getString(int32_t) const;
    int16_t getShort(int32_t) const;
    int32_t getInt(int32_t) const;
    int64_t getLong(int32_t) const;
    float getFloat(int32_t) const;
    double getDouble(int32_t) const;
    int32_t getType(int32_t) const;
    bool isNull(int32_t) const;
    std::vector< int8_t> getBlob(int32_t) const;
    std::vector< ::java::lang::String> getColumnNames() const;
    void deactivate() const;
    void close() const;
    void registerContentObserver(const ::android::database::ContentObserver&) const;
    void unregisterContentObserver(const ::android::database::ContentObserver&) const;
    void registerDataSetObserver(const ::android::database::DataSetObserver&) const;
    void unregisterDataSetObserver(const ::android::database::DataSetObserver&) const;
    bool requery() const;

};
}
}


