#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.content.AsyncTaskLoader.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class CursorLoader : public virtual ::java::lang::Object,
                     public virtual ::android::support::v4::content::AsyncTaskLoader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CursorLoader(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::content::AsyncTaskLoader(_obj), ::android::support::v4::content::Loader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CursorLoader(const ::android::support::v4::content::CursorLoader& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::AsyncTaskLoader((jobject)0), ::android::support::v4::content::Loader((jobject)0) {obj = x.obj;}
    CursorLoader(::android::support::v4::content::CursorLoader&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::AsyncTaskLoader((jobject)0), ::android::support::v4::content::Loader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::CursorLoader& operator=(const ::android::support::v4::content::CursorLoader& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::CursorLoader& operator=(::android::support::v4::content::CursorLoader&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::database::Cursor loadInBackground() const;
    void deliverResult(const ::android::database::Cursor&) const;
    CursorLoader(const ::android::content::Context&);
    CursorLoader(const ::android::content::Context&, const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&);
    void onCanceled(const ::android::database::Cursor&) const;
    ::android::net::Uri getUri() const;
    void setUri(const ::android::net::Uri&) const;
    std::vector< ::java::lang::String> getProjection() const;
    void setProjection(const std::vector< ::java::lang::String>&) const;
    ::java::lang::String getSelection() const;
    void setSelection(const ::java::lang::String&) const;
    std::vector< ::java::lang::String> getSelectionArgs() const;
    void setSelectionArgs(const std::vector< ::java::lang::String>&) const;
    ::java::lang::String getSortOrder() const;
    void setSortOrder(const ::java::lang::String&) const;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const;
    void onCanceled(const ::java::lang::Object&) const;
    void deliverResult(const ::java::lang::Object&) const;

};
}
}
}
}


