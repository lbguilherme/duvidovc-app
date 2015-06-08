#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ContextWrapper.hpp"

namespace android { namespace content { class ContentProvider; } }
namespace android { namespace content { class Context; } }
namespace android { namespace database { class DatabaseErrorHandler; } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase_CursorFactory; } } }
namespace java { namespace io { class File; } }
namespace java { namespace io { class FileInputStream; } }
namespace java { namespace io { class FileOutputStream; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace test {
class RenamingDelegatingContext : public virtual ::java::lang::Object,
                                  public virtual ::android::content::ContextWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RenamingDelegatingContext(jobject _obj) : ::java::lang::Object(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RenamingDelegatingContext(const ::android::test::RenamingDelegatingContext& x) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    RenamingDelegatingContext(::android::test::RenamingDelegatingContext&& x) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::RenamingDelegatingContext& operator=(const ::android::test::RenamingDelegatingContext& x) {obj = x.obj; return *this;}
    ::android::test::RenamingDelegatingContext& operator=(::android::test::RenamingDelegatingContext&& x) {obj = std::move(x.obj); return *this;}
    
    RenamingDelegatingContext(const ::android::content::Context&, const ::java::lang::String&);
    RenamingDelegatingContext(const ::android::content::Context&, const ::android::content::Context&, const ::java::lang::String&);
    static ::android::content::ContentProvider providerWithRenamedContext(const ::java::lang::Class&, const ::android::content::Context&, const ::java::lang::String&);
    static ::android::content::ContentProvider providerWithRenamedContext(const ::java::lang::Class&, const ::android::content::Context&, const ::java::lang::String&, bool);
    void makeExistingFilesAndDbsAccessible() const;
    ::java::lang::String getDatabasePrefix() const;
    ::android::database::sqlite::SQLiteDatabase openOrCreateDatabase(const ::java::lang::String&, int32_t, const ::android::database::sqlite::SQLiteDatabase_CursorFactory&) const;
    ::android::database::sqlite::SQLiteDatabase openOrCreateDatabase(const ::java::lang::String&, int32_t, const ::android::database::sqlite::SQLiteDatabase_CursorFactory&, const ::android::database::DatabaseErrorHandler&) const;
    bool deleteDatabase(const ::java::lang::String&) const;
    ::java::io::File getDatabasePath(const ::java::lang::String&) const;
    std::vector< ::java::lang::String> databaseList() const;
    ::java::io::FileInputStream openFileInput(const ::java::lang::String&) const;
    ::java::io::FileOutputStream openFileOutput(const ::java::lang::String&, int32_t) const;
    ::java::io::File getFileStreamPath(const ::java::lang::String&) const;
    bool deleteFile(const ::java::lang::String&) const;
    std::vector< ::java::lang::String> fileList() const;
    ::java::io::File getCacheDir() const;

};
}
}


