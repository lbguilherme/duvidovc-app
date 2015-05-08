#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class URLUtil : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URLUtil(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URLUtil(const ::android::webkit::URLUtil& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    URLUtil(::android::webkit::URLUtil&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::URLUtil& operator=(const ::android::webkit::URLUtil& x) {obj = x.obj; return *this;}
    ::android::webkit::URLUtil& operator=(::android::webkit::URLUtil&& x) {obj = std::move(x.obj); return *this;}
    
    URLUtil();
    static ::java::lang::String guessUrl(const ::java::lang::String&);
    static ::java::lang::String composeSearchUrl(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static std::vector< int8_t> decode(const std::vector< int8_t>&);
    static bool isAssetUrl(const ::java::lang::String&);
    static bool isCookielessProxyUrl(const ::java::lang::String&);
    static bool isFileUrl(const ::java::lang::String&);
    static bool isAboutUrl(const ::java::lang::String&);
    static bool isDataUrl(const ::java::lang::String&);
    static bool isJavaScriptUrl(const ::java::lang::String&);
    static bool isHttpUrl(const ::java::lang::String&);
    static bool isHttpsUrl(const ::java::lang::String&);
    static bool isNetworkUrl(const ::java::lang::String&);
    static bool isContentUrl(const ::java::lang::String&);
    static bool isValidUrl(const ::java::lang::String&);
    static ::java::lang::String stripAnchor(const ::java::lang::String&);
    static ::java::lang::String guessFileName(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);

};
}
}


