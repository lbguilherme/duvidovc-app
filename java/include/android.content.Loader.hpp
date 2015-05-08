#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Loader_OnLoadCompleteListener; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class Loader : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Loader(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Loader(const ::android::content::Loader& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Loader(::android::content::Loader&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::Loader& operator=(const ::android::content::Loader& x) {obj = x.obj; return *this;}
    ::android::content::Loader& operator=(::android::content::Loader&& x) {obj = std::move(x.obj); return *this;}
    
    Loader(const ::android::content::Context&);
    void deliverResult(const ::java::lang::Object&) const ;
    ::android::content::Context getContext() const ;
    int32_t getId() const ;
    void registerListener(int32_t, const ::android::content::Loader_OnLoadCompleteListener&) const ;
    void unregisterListener(const ::android::content::Loader_OnLoadCompleteListener&) const ;
    bool isStarted() const ;
    bool isAbandoned() const ;
    bool isReset() const ;
    void startLoading() const ;
    void forceLoad() const ;
    void stopLoading() const ;
    void abandon() const ;
    void reset() const ;
    bool takeContentChanged() const ;
    void onContentChanged() const ;
    ::java::lang::String dataToString(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;
    void dump(const ::java::lang::String&, const ::java::io::FileDescriptor&, const ::java::io::PrintWriter&, const std::vector< ::java::lang::String>&) const ;

};
}
}

#include "android.content.Loader_ForceLoadContentObserver.hpp"
#include "android.content.Loader_OnLoadCompleteListener.hpp"

