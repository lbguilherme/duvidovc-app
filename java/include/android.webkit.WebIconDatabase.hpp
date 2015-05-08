#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace webkit { class WebIconDatabase; } }
namespace android { namespace webkit { class WebIconDatabase_IconListener; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebIconDatabase : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebIconDatabase(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebIconDatabase(const ::android::webkit::WebIconDatabase& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebIconDatabase(::android::webkit::WebIconDatabase&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebIconDatabase& operator=(const ::android::webkit::WebIconDatabase& x) {obj = x.obj; return *this;}
    ::android::webkit::WebIconDatabase& operator=(::android::webkit::WebIconDatabase&& x) {obj = std::move(x.obj); return *this;}
    
    void open(const ::java::lang::String&) const ;
    void close() const ;
    void removeAllIcons() const ;
    void requestIconForPageUrl(const ::java::lang::String&, const ::android::webkit::WebIconDatabase_IconListener&) const ;
    void retainIconForPageUrl(const ::java::lang::String&) const ;
    void releaseIconForPageUrl(const ::java::lang::String&) const ;
    static ::android::webkit::WebIconDatabase getInstance();

};
}
}

#include "android.webkit.WebIconDatabase_IconListener.hpp"

