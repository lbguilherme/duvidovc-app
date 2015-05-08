#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace webkit { class ValueCallback; } }
namespace android { namespace webkit { class WebStorage; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebStorage : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebStorage(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebStorage(const ::android::webkit::WebStorage& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebStorage(::android::webkit::WebStorage&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebStorage& operator=(const ::android::webkit::WebStorage& x) {obj = x.obj; return *this;}
    ::android::webkit::WebStorage& operator=(::android::webkit::WebStorage&& x) {obj = std::move(x.obj); return *this;}
    
    WebStorage();
    void getOrigins(const ::android::webkit::ValueCallback&) const ;
    void getUsageForOrigin(const ::java::lang::String&, const ::android::webkit::ValueCallback&) const ;
    void getQuotaForOrigin(const ::java::lang::String&, const ::android::webkit::ValueCallback&) const ;
    void setQuotaForOrigin(const ::java::lang::String&, int64_t) const ;
    void deleteOrigin(const ::java::lang::String&) const ;
    void deleteAllData() const ;
    static ::android::webkit::WebStorage getInstance();

};
}
}

#include "android.webkit.WebStorage_Origin.hpp"
#include "android.webkit.WebStorage_QuotaUpdater.hpp"

