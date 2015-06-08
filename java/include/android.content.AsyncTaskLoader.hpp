#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.Loader.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class AsyncTaskLoader : public virtual ::java::lang::Object,
                        public virtual ::android::content::Loader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AsyncTaskLoader(jobject _obj) : ::java::lang::Object(_obj), ::android::content::Loader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AsyncTaskLoader(const ::android::content::AsyncTaskLoader& x) : ::java::lang::Object((jobject)0), ::android::content::Loader((jobject)0) {obj = x.obj;}
    AsyncTaskLoader(::android::content::AsyncTaskLoader&& x) : ::java::lang::Object((jobject)0), ::android::content::Loader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::AsyncTaskLoader& operator=(const ::android::content::AsyncTaskLoader& x) {obj = x.obj; return *this;}
    ::android::content::AsyncTaskLoader& operator=(::android::content::AsyncTaskLoader&& x) {obj = std::move(x.obj); return *this;}
    
    AsyncTaskLoader(const ::android::content::Context&);
    void setUpdateThrottle(int64_t) const;
    bool cancelLoad() const;
    void onCanceled(const ::java::lang::Object&) const;
    ::java::lang::Object loadInBackground() const;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const;

};
}
}


