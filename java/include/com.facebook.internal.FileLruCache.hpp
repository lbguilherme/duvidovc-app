#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace internal { class FileLruCache_Limits; } } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class FileLruCache : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileLruCache(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileLruCache(const ::com::facebook::internal::FileLruCache& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileLruCache(::com::facebook::internal::FileLruCache&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FileLruCache& operator=(const ::com::facebook::internal::FileLruCache& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FileLruCache& operator=(::com::facebook::internal::FileLruCache&& x) {obj = std::move(x.obj); return *this;}
    
    FileLruCache(const ::java::lang::String&, const ::com::facebook::internal::FileLruCache_Limits&);
    ::java::io::InputStream get(const ::java::lang::String&) const;
    ::java::io::InputStream get(const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::io::OutputStream openPutStream(const ::java::lang::String&) const;
    ::java::io::OutputStream openPutStream(const ::java::lang::String&, const ::java::lang::String&) const;
    void clearCache() const;
    ::java::lang::String getLocation() const;
    ::java::io::InputStream interceptAndPut(const ::java::lang::String&, const ::java::io::InputStream&) const;
    ::java::lang::String toString() const;

};
}
}
}

#include "com.facebook.internal.FileLruCache_BufferFile.hpp"
#include "com.facebook.internal.FileLruCache_CloseCallbackOutputStream.hpp"
#include "com.facebook.internal.FileLruCache_CopyingInputStream.hpp"
#include "com.facebook.internal.FileLruCache_Limits.hpp"
#include "com.facebook.internal.FileLruCache_ModifiedFile.hpp"
#include "com.facebook.internal.FileLruCache_StreamCloseCallback.hpp"
#include "com.facebook.internal.FileLruCache_StreamHeader.hpp"

