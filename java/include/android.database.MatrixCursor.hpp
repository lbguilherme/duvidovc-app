#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.AbstractCursor.hpp"

namespace android { namespace database { class MatrixCursor_RowBuilder; } }
namespace java { namespace lang { class Iterable; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
class MatrixCursor : public virtual ::java::lang::Object,
                     public virtual ::android::database::AbstractCursor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MatrixCursor(jobject _obj) : ::java::lang::Object(_obj), ::android::database::AbstractCursor(_obj), ::android::database::CrossProcessCursor(_obj), ::android::database::Cursor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MatrixCursor(const ::android::database::MatrixCursor& x) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj;}
    MatrixCursor(::android::database::MatrixCursor&& x) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::MatrixCursor& operator=(const ::android::database::MatrixCursor& x) {obj = x.obj; return *this;}
    ::android::database::MatrixCursor& operator=(::android::database::MatrixCursor&& x) {obj = std::move(x.obj); return *this;}
    
    MatrixCursor(const std::vector< ::java::lang::String>&, int32_t);
    MatrixCursor(const std::vector< ::java::lang::String>&);
    ::android::database::MatrixCursor_RowBuilder newRow() const;
    void addRow(const std::vector< ::java::lang::Object>&) const;
    void addRow(const ::java::lang::Iterable&) const;
    int32_t getCount() const;
    std::vector< ::java::lang::String> getColumnNames() const;
    ::java::lang::String getString(int32_t) const;
    int16_t getShort(int32_t) const;
    int32_t getInt(int32_t) const;
    int64_t getLong(int32_t) const;
    float getFloat(int32_t) const;
    double getDouble(int32_t) const;
    std::vector< int8_t> getBlob(int32_t) const;
    int32_t getType(int32_t) const;
    bool isNull(int32_t) const;

};
}
}

#include "android.database.MatrixCursor_RowBuilder.hpp"

