#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Observable.hpp"

namespace android { namespace content { class ContentValues; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace os { class Handler; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace content {
class ContentQueryMap : public virtual ::java::lang::Object,
                        public virtual ::java::util::Observable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentQueryMap(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Observable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentQueryMap(const ::android::content::ContentQueryMap& x) : ::java::lang::Object((jobject)0), ::java::util::Observable((jobject)0) {obj = x.obj;}
    ContentQueryMap(::android::content::ContentQueryMap&& x) : ::java::lang::Object((jobject)0), ::java::util::Observable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ContentQueryMap& operator=(const ::android::content::ContentQueryMap& x) {obj = x.obj; return *this;}
    ::android::content::ContentQueryMap& operator=(::android::content::ContentQueryMap&& x) {obj = std::move(x.obj); return *this;}
    
    ContentQueryMap(const ::android::database::Cursor&, const ::java::lang::String&, bool, const ::android::os::Handler&);
    void setKeepUpdated(bool) const;
    ::android::content::ContentValues getValues(const ::java::lang::String&) const;
    void requery() const;
    ::java::util::Map getRows() const;
    void close() const;

};
}
}


